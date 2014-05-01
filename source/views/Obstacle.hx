package views;

import flixel.FlxG;
import flixel.FlxSprite;

import flixel.util.FlxPoint;
import flixel.util.FlxRandom;

class Obstacle extends FlxSprite {
	
	static inline var SCROLL_SPEED:Int = -50;
	
	public function new() {
		super("assets/images/pipe.png");
	}
}

