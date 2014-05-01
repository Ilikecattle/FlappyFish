package views;

import flixel.FlxG;
import flixel.addons.display.FlxBackdrop;

class Ground extends FlxBackdrop {
	public function new() {
		super("assets/images/ground.png", -100.0, 0, true, false);
		velocity.set(-100, 0);
		y = FlxG.height - 112;
	}
}
