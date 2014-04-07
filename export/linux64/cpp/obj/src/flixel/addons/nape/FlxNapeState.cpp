#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeState
#include <flixel/addons/nape/FlxNapeState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","new",0xaa4f6fa6,"flixel.addons.nape.FlxNapeState.new","flixel/addons/nape/FlxNapeState.hx",30,0x029731c9)

HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(58)
	this->positionIterations = (int)10;
	HX_STACK_LINE(53)
	this->velocityIterations = (int)10;
	HX_STACK_LINE(30)
	super::__construct(MaxSize);
}
;
	return null();
}

//FlxNapeState_obj::~FlxNapeState_obj() { }

Dynamic FlxNapeState_obj::__CreateEmpty() { return  new FlxNapeState_obj; }
hx::ObjectPtr< FlxNapeState_obj > FlxNapeState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxNapeState_obj > result = new FlxNapeState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic FlxNapeState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeState_obj > result = new FlxNapeState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxNapeState_obj::create( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","create",0x48261776,"flixel.addons.nape.FlxNapeState.create","flixel/addons/nape/FlxNapeState.hx",83,0x029731c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		if (((::flixel::addons::nape::FlxNapeState_obj::space == null()))){
			HX_STACK_LINE(85)
			::flixel::addons::nape::FlxNapeState_obj::space = ::nape::space::Space_obj::__new(::nape::geom::Vec2_obj::__new(null(),null()),null());
		}
	}
return null();
}


::nape::phys::Body FlxNapeState_obj::createWalls( hx::Null< Float >  __o_MinX,hx::Null< Float >  __o_MinY,hx::Null< Float >  __o_MaxX,hx::Null< Float >  __o_MaxY,hx::Null< Float >  __o_Thickness,::nape::phys::Material _Material){
Float MinX = __o_MinX.Default(0);
Float MinY = __o_MinY.Default(0);
Float MaxX = __o_MaxX.Default(0);
Float MaxY = __o_MaxY.Default(0);
Float Thickness = __o_Thickness.Default(10);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","createWalls",0x29cf98d3,"flixel.addons.nape.FlxNapeState.createWalls","flixel/addons/nape/FlxNapeState.hx",106,0x029731c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinX,"MinX")
	HX_STACK_ARG(MinY,"MinY")
	HX_STACK_ARG(MaxX,"MaxX")
	HX_STACK_ARG(MaxY,"MaxY")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(_Material,"_Material")
{
		HX_STACK_LINE(107)
		if (((MaxX == (int)0))){
			HX_STACK_LINE(109)
			MaxX = ::flixel::FlxG_obj::width;
		}
		HX_STACK_LINE(112)
		if (((MaxY == (int)0))){
			HX_STACK_LINE(114)
			MaxY = ::flixel::FlxG_obj::height;
		}
		HX_STACK_LINE(117)
		if (((_Material == null()))){
			HX_STACK_LINE(119)
			_Material = ::nape::phys::Material_obj::__new(0.4,0.2,0.38,0.7,null());
		}
		struct _Function_1_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeState.hx",122,0x029731c9)
				{
					HX_STACK_LINE(122)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(122)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(122)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(122)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(122)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(122)
		::nape::phys::Body walls = ::nape::phys::Body_obj::__new(_Function_1_1::Block(),null());		HX_STACK_VAR(walls,"walls");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::nape::shape::ShapeList _this = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect((MinX - Thickness),MinY,Thickness,(MaxY + ::Math_obj::abs(MinY)),null()),null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(125)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(125)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(125)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::nape::shape::ShapeList _this = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(127)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(MaxX,MinY,Thickness,(MaxY + ::Math_obj::abs(MinY)),null()),null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(127)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(127)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(127)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::nape::shape::ShapeList _this = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(129)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(MinX,(MinY - Thickness),(MaxX + ::Math_obj::abs(MinX)),Thickness,null()),null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(129)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(129)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(129)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::nape::shape::ShapeList _this = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(131)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(MinX,MaxY,(MaxX + ::Math_obj::abs(MinX)),Thickness,null()),null(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(131)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(131)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(131)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				if (((walls->zpp_inner->compound != null()))){
					HX_STACK_LINE(133)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(133)
				walls->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(133)
				if ((walls->zpp_inner->world)){
					HX_STACK_LINE(133)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(133)
				if (((((  (((walls->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(walls->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(133)
					if (((((  (((walls->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(walls->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(133)
						walls->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(133)
					if (((((  (((walls->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(walls->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(133)
						((  (((walls->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(walls->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(walls);
					}
					HX_STACK_LINE(133)
					if (((space != null()))){
						HX_STACK_LINE(133)
						::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(133)
						if ((_this->zpp_inner->reverse_flag)){
							HX_STACK_LINE(133)
							_this->push(walls);
						}
						else{
							HX_STACK_LINE(133)
							_this->unshift(walls);
						}
					}
				}
			}
			HX_STACK_LINE(133)
			if (((walls->zpp_inner->space == null()))){
				HX_STACK_LINE(133)
				Dynamic();
			}
			else{
				HX_STACK_LINE(133)
				walls->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(134)
		walls->setShapeMaterials(_Material);
		HX_STACK_LINE(136)
		return walls;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxNapeState_obj,createWalls,return )

Void FlxNapeState_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","update",0x531c3683,"flixel.addons.nape.FlxNapeState.update","flixel/addons/nape/FlxNapeState.hx",143,0x029731c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		::flixel::addons::nape::FlxNapeState_obj::space->step(::flixel::FlxG_obj::elapsed,this->velocityIterations,this->positionIterations);
		HX_STACK_LINE(145)
		this->super::update();
	}
return null();
}


Void FlxNapeState_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","draw",0x549fe9fe,"flixel.addons.nape.FlxNapeState.draw","flixel/addons/nape/FlxNapeState.hx",153,0x029731c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->super::draw();
	}
return null();
}


Void FlxNapeState_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","destroy",0xec49e740,"flixel.addons.nape.FlxNapeState.destroy","flixel/addons/nape/FlxNapeState.hx",165,0x029731c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		this->super::destroy();
		HX_STACK_LINE(168)
		::flixel::addons::nape::FlxNapeState_obj::space->clear();
		HX_STACK_LINE(170)
		::flixel::addons::nape::FlxNapeState_obj::space = null();
	}
return null();
}


bool FlxNapeState_obj::set_napeDebugEnabled( bool Value){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","set_napeDebugEnabled",0xcc8485ed,"flixel.addons.nape.FlxNapeState.set_napeDebugEnabled","flixel/addons/nape/FlxNapeState.hx",201,0x029731c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(201)
	return this->napeDebugEnabled = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeState_obj,set_napeDebugEnabled,return )

Void FlxNapeState_obj::drawPhysDebug( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeState","drawPhysDebug",0x65697543,"flixel.addons.nape.FlxNapeState.drawPhysDebug","flixel/addons/nape/FlxNapeState.hx",208,0x029731c9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeState_obj,drawPhysDebug,(void))

::nape::space::Space FlxNapeState_obj::space;


FlxNapeState_obj::FlxNapeState_obj()
{
}

Dynamic FlxNapeState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createWalls") ) { return createWalls_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawPhysDebug") ) { return drawPhysDebug_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"napeDebugEnabled") ) { return napeDebugEnabled; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { return velocityIterations; }
		if (HX_FIELD_EQ(inName,"positionIterations") ) { return positionIterations; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_napeDebugEnabled") ) { return set_napeDebugEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"napeDebugEnabled") ) { if (inCallProp) return set_napeDebugEnabled(inValue);napeDebugEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { velocityIterations=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionIterations") ) { positionIterations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("velocityIterations"));
	outFields->push(HX_CSTRING("positionIterations"));
	outFields->push(HX_CSTRING("napeDebugEnabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("space"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxNapeState_obj,velocityIterations),HX_CSTRING("velocityIterations")},
	{hx::fsInt,(int)offsetof(FlxNapeState_obj,positionIterations),HX_CSTRING("positionIterations")},
	{hx::fsBool,(int)offsetof(FlxNapeState_obj,napeDebugEnabled),HX_CSTRING("napeDebugEnabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("velocityIterations"),
	HX_CSTRING("positionIterations"),
	HX_CSTRING("napeDebugEnabled"),
	HX_CSTRING("create"),
	HX_CSTRING("createWalls"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_napeDebugEnabled"),
	HX_CSTRING("drawPhysDebug"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxNapeState_obj::space,"space");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxNapeState_obj::space,"space");
};

#endif

Class FlxNapeState_obj::__mClass;

void FlxNapeState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.nape.FlxNapeState"), hx::TCanCast< FlxNapeState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxNapeState_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
