package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

import views.Title;

class MenuState extends FlxState
{
	private var title:Title;
	private var messageButton:FlxButton;
	
	override public function create():Void
	{
		super.create();

		title = new Title();
		add(title);
		
		messageButton = new FlxButton("Message", openMessage);
		messageButton.x = (FlxG.width - messageButton.width) * 0.5;
		messageButton.y = title.height + 35;
		messageButton.scale.x = messageButton.scale.y = 2;
		messageButton.label.scale.x = messageButton.label.scale.y = 2;
		
		add(messageButton);
	}
	
	private function openMessage() {
		FlxG.switchState( new MessageState() );
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
