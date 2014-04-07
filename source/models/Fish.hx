package models;

import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeState;
import nape.callbacks.CbEvent;
import nape.callbacks.CbType;
import nape.callbacks.InteractionCallback;
import nape.callbacks.InteractionListener;
import nape.callbacks.InteractionType;
import nape.constraint.DistanceJoint;
import nape.constraint.PivotJoint;
import nape.geom.Vec2;
import nape.phys.Material;
import flixel.FlxG;

class Fish extends FlxNapeSprite {

	public function new() {
		super();
		
		makeGraphic(100, 200, 0xFF0000);
		loadGraphic("assets/images/box.png");
		createRectangularBody();
		setBodyMaterial(.5, .5, .5, 2);
	}

}
