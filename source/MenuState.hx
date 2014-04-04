package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

class MenuState extends FlxState
{
	private var startButton:FlxButton;
	
	override public function create():Void
	{
		super.create();

		startButton = new FlxButton();
		add(startButton);
	}
	
	private function startPlayState() {
		FlxG.switchState( new PlayState() );
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
