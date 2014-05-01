package views;

import flixel.FlxG;
import flixel.ui.FlxButton;

class StartButton extends FlxButton {
	
	public function new() {
		super(0, 0, "Start", startPlayState);
		scale.x = scale.y = 2;
		label.scale.y = label.scale.x = 2;
	}
	
	private function startPlayState() {
		FlxG.switchState( new PlayState() );
	}
}

