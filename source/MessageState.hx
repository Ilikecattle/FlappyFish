package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;

import openfl.Assets;

class MessageState extends FlxState
{
	
	private var message:FlxText;
	private var backButton:FlxButton;
	
	override public function create():Void
	{
		super.create();
		message = new FlxText(0, 0, FlxG.width, Assets.getText("assets/data/message.txt"));
		add(message);
		
		backButton = new FlxButton("Back", goBack);
		backButton.scale.x = backButton.scale.y = 2;
		backButton.label.scale.x = backButton.label.scale.y = 2;
		backButton.x = (FlxG.width - backButton.width )* 0.5;
		backButton.y = FlxG.height - backButton.height * 2;
		add(backButton);
	}
	
	private function goBack() {
		FlxG.switchState( new MenuState() );
	}
}
