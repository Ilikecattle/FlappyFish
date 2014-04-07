package views;

import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;

import flash.display.Sprite;

class FlappyBackdrop extends FlxBackdrop {
	public function new() {
		super("assets/images/backgrounds.png", 100.0, 0, true, false);
		velocity.set(-100, 0);
	}
}
