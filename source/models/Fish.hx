package models;

import flixel.FlxG;
import flixel.FlxSprite;

class Fish extends FlxSprite {

	static inline var MAX_VEL:Int = 400;

	public function isFalling():Bool
	{
		return velocity.y >100;
	}
	
	public function shouldntFlap():Bool
	{
		return velocity.y > 70;
	}

	public function new() {
		super();
		
		x = 50;
		loadGraphic("assets/images/fish_small.png");
		acceleration.y = 1300;
		maxVelocity.y = MAX_VEL;
		maxAngular = 60;
	}
	
	public override function update():Void
	{
		if(FlxG.touches.getFirst() != null) {
			if(FlxG.touches.getFirst().justPressed) {
				velocity.y = -500;
			}
		} else if (FlxG.keys.justPressed.UP || FlxG.mouse.justPressed)
		{
			velocity.y = -500;
		}
		
		if (velocity.y < 0) {
			angle -= 6;

			if (angle < -20) {
				angle = -20;
			}
		}
		
		if (isFalling()) {
			angle += 4;
			if (angle > 90) {
				angle = 90;
			}
		}
		
		super.update();
	}

	override public function kill():Void 
	{
		super.kill();
	}

}
