package views;

import flixel.FlxG;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;

import flash.display.Sprite;

import views.FishNameSelect;
import views.FishRenderer;
import views.StartButton;

class Title extends FlxSpriteGroup {
	
	private var flappyText:FlxText;
	private var fishText:FlxText;
	private var fishNameSelect:FishNameSelect;
	private var fish:FishRenderer;
	private var startButton:StartButton;
	
	public function new() {
		super();
		flappyText = new FlxText(0, 0, 0, "Flappy", 32);
		flappyText.alignment = "center";
		flappyText.x = ( FlxG.width - flappyText.width ) * 0.5;
		flappyText.y = 10;
		add(flappyText);
		
		fishNameSelect = new FishNameSelect();
		fishNameSelect.y = flappyText.y + flappyText.height;
		add(fishNameSelect);
		
		fishText = new FlxText(0, 100, 0, "Fish", 32);
		fishText.alignment = "center";
		fishText.x = ( FlxG.width - fishText.width ) * 0.5;
		fishText.y = fishNameSelect.y + fishNameSelect.height;
		add(fishText);
		
		fish = new FishRenderer();
		fish.y = (FlxG.height - fish.height) * 0.5;
		fish.x = ( FlxG.width - fish.width ) * 0.5;
		add(fish);
		
		startButton = new StartButton();
		startButton.x = ( FlxG.width - startButton.width ) * 0.5;
		startButton.y = FlxG.height * 0.8;
		add(startButton);
	}
}
