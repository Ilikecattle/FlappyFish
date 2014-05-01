package;

import flixel.addons.display.FlxBackdrop;

import flixel.util.FlxRandom;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxRect;

import models.Fish;
import views.FlappyBackdrop;
import views.Ground;
import views.ObstacleRenderer;

class PlayState extends FlxState
{
	public var fish:Fish;
	public var ground:Ground;
	public var backdrop:FlxBackdrop;
	public var obstacleRenderer:ObstacleRenderer;
	
	override public function create():Void
	{
		FlxG.worldBounds.set(0, 0, FlxG.width, FlxG.height);
		
		addBackdrop();
		addFish();
		
		obstacleRenderer = new ObstacleRenderer();
		add(obstacleRenderer);
		
		super.create();
	}
	
	public function addBackdrop() {
		backdrop = new FlappyBackdrop();
		add(backdrop);
	}
	
	public function addFish() {
		fish = new Fish();
		add(new Fish());
	}
	
	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		fish.update();
		obstacleRenderer.update();
		
		super.update();
		
		FlxG.overlap(fish, obstacleRenderer, onFishCollideWithObstacle);
		
		if (fish.y > FlxG.height)
		{
			gameOver();
		}
	}
	
	private function onFishCollideWithObstacle(fish:FlxObject, obstacle:FlxObject):Void {
		gameOver();
	}
	
	private function gameOver() {
		FlxG.switchState( new MenuState() );
	}
}
