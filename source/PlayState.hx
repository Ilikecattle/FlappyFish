package;

import flixel.addons.display.FlxBackdrop;

import flixel.addons.nape.FlxNapeState;
import flixel.addons.nape.FlxNapeSprite;

import flixel.util.FlxRandom;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

import models.Fish;
import views.FlappyBackdrop;

class PlayState extends FlxNapeState
{
	public var fish:Fish;
	public var backdrop:FlxBackdrop;
	
	override public function create():Void
	{
		super.create();
		setupPhysics();
		addBackdrop();
		addFish();
		createWalls();
	}
	
	public function addBackdrop() {
		backdrop = new FlappyBackdrop();
		add(backdrop);
	}
	
	public function setupPhysics() {
		FlxNapeState.space.gravity.setxy(0, 500);
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
		super.update();
	}
}
