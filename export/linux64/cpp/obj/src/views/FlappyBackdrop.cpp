#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_views_FlappyBackdrop
#include <views/FlappyBackdrop.h>
#endif
namespace views{

Void FlappyBackdrop_obj::__construct()
{
HX_STACK_FRAME("views.FlappyBackdrop","new",0x2429aa06,"views.FlappyBackdrop.new","views/FlappyBackdrop.hx",9,0x97b7e709)
{
	HX_STACK_LINE(10)
	super::__construct(HX_CSTRING("assets/images/backgrounds.png"),100.0,(int)0,true,false);
	HX_STACK_LINE(11)
	this->velocity->set((int)-100,(int)0);
}
;
	return null();
}

//FlappyBackdrop_obj::~FlappyBackdrop_obj() { }

Dynamic FlappyBackdrop_obj::__CreateEmpty() { return  new FlappyBackdrop_obj; }
hx::ObjectPtr< FlappyBackdrop_obj > FlappyBackdrop_obj::__new()
{  hx::ObjectPtr< FlappyBackdrop_obj > result = new FlappyBackdrop_obj();
	result->__construct();
	return result;}

Dynamic FlappyBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlappyBackdrop_obj > result = new FlappyBackdrop_obj();
	result->__construct();
	return result;}


FlappyBackdrop_obj::FlappyBackdrop_obj()
{
}

Dynamic FlappyBackdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlappyBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlappyBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlappyBackdrop_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlappyBackdrop_obj::__mClass,"__mClass");
};

#endif

Class FlappyBackdrop_obj::__mClass;

void FlappyBackdrop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("views.FlappyBackdrop"), hx::TCanCast< FlappyBackdrop_obj> ,sStaticFields,sMemberFields,
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

void FlappyBackdrop_obj::__boot()
{
}

} // end namespace views
