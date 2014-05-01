package views;

import flixel.FlxG;
import flixel.system.FlxAssets;

import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;

import flash.display.Sprite;

class FishNameSelect extends FlxSpriteGroup {
	
	static inline var SPACING = 0;
	
	private var leftButton:FlxButton;
	private var rightButton:FlxButton;
	private var fishName:FlxText;
	
	private var fishNames:Array<String> = [
		"Hell",
		"Angel",
		"Blow",
		"Sword",
		"Silver",
		"Gold"
	];
	
	private var fishIndex:Int = 0;
	
	public function new() {
		super();
		
		leftButton = new FlxButton( 0, 0, "<", onPressLeftButton );
		leftButton.scale.x = 0.5;
		leftButton.scale.y = 2;
		leftButton.label.scale.y = leftButton.label.scale.x = 2;
		add(leftButton);
		
		fishName = new FlxText( 0, 0, 0, "Hell", 32 );
		fishName.alignment = "center";
		add(fishName);
		
		rightButton = new FlxButton( 0, 0, ">", onPressRightButton );
		rightButton.scale.x = 0.5;
		rightButton.scale.y = 2;
		rightButton.label.scale.y = rightButton.label.scale.x = 2;
		add(rightButton);
		
		leftButton.y = ( height - leftButton.height ) * 0.5;
		rightButton.y = ( height - rightButton.height ) * 0.5;
		
		updatePositioning();
	}
	
	private function onPressLeftButton() {
		modifyFishIndex(-1);
		updateFishName();
	}
	
	private function onPressRightButton() {
		modifyFishIndex(1);
		updateFishName();
	}
	
	private function modifyFishIndex(val:Int) {
		fishIndex += val;
		
		var maxIndex:Int = fishNames.length - 1;
		
		if(fishIndex > maxIndex) {
			fishIndex = 0;
		} else if(fishIndex < 0) {
			fishIndex = maxIndex;
		}
	}
	
	private function updateFishName() {
		fishName.text = fishNames[fishIndex];
		fishName.draw();
		updatePositioning();
	}
	
	private function updatePositioning() {
		fishName.x = FlxG.width * 0.5 - fishName.width * 0.5;
		leftButton.x = fishName.x - leftButton.width - SPACING;
		rightButton.x = fishName.x + fishName.width + SPACING;
	}
}

