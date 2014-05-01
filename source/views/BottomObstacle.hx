package views;

import flixel.FlxG;
import flixel.FlxSprite;

import flixel.util.FlxPoint;
import flixel.util.FlxRandom;

class Obstacle extends FlxSprite {
	public function new() {
		super("assets/images/pipe.png");
	}
	
	override public function update() {
		super.update();
		if( x < -width ) {
			x = FlxG.width;
			reset(FlxG.width, y);
		}
	}
	
	override public function reset(x:Float, y:Float) {
		origin.y = 0;
		scale.y = FlxRandom.float();
		centerOrigin();
		super.reset(x, y);
	}
}

