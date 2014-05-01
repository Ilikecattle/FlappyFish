package views;

import flixel.addons.display.FlxBackdrop;

class FlappyBackdrop extends FlxBackdrop {
	public function new() {
		super("assets/images/backgrounds.png", -100.0, 0, true, false);
		velocity.set(-100, 0);
	}
}
