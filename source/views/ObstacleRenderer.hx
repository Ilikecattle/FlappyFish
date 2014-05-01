package views;

import flixel.FlxG;
import flixel.util.FlxRandom;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

import views.Obstacle;

class ObstacleRenderer extends FlxSpriteGroup {
	
	static inline var SCROLL_SPEED:Int = -100;
	
	static inline var MAX_CHANGE:Int = 50;
	static inline var DIST_BETW_OBSTACLES:Int = 10;
	static inline var MAX_Y_OFFSET:Int = 100;
	
	public var topObstacle:FlxSprite;
	public var bottomObstacle:FlxSprite;

	private var yOffset:Float = 0;

	public function new() {
		super();
		
		topObstacle = new FlxSprite("assets/images/pipe_down.png");
		add(topObstacle);
		
		bottomObstacle = new FlxSprite("assets/images/pipe.png");
		add(bottomObstacle);
		
		setObstaclePos(0);
		
		velocity.x = SCROLL_SPEED;
		x = FlxG.width;
	}
	
	private function setObstaclePos(offset:Float) {
		topObstacle.y = -130 + offset;
		bottomObstacle.y = FlxG.height - bottomObstacle.height + 130 + offset;
	}
	
	override public function update()
	{
		yOffset += MAX_CHANGE * FlxRandom.float() * FlxRandom.sign( 50 );
		
		if(yOffset > MAX_Y_OFFSET) {
			yOffset = MAX_Y_OFFSET;
		} else if(yOffset < -MAX_Y_OFFSET) {
			yOffset = -MAX_Y_OFFSET;
		}
		
		if( x < -topObstacle.width ) {
			
			setObstaclePos(yOffset);
			
			x = FlxG.width + topObstacle.width;
		}

		super.update();
	}
}

