#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_models_Fish
#include <models/Fish.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
namespace models{

Void Fish_obj::__construct()
{
HX_STACK_FRAME("models.Fish","new",0x5c36c5ee,"models.Fish.new","models/Fish.hx",18,0xe1374361)
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null(),null(),null());
	HX_STACK_LINE(21)
	this->makeGraphic((int)100,(int)200,(int)16711680,null(),null());
	HX_STACK_LINE(22)
	this->loadGraphic(HX_CSTRING("assets/images/box.png"),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(23)
	this->createRectangularBody(null(),null(),null());
	HX_STACK_LINE(24)
	this->setBodyMaterial(.5,.5,.5,(int)2,null());
}
;
	return null();
}

//Fish_obj::~Fish_obj() { }

Dynamic Fish_obj::__CreateEmpty() { return  new Fish_obj; }
hx::ObjectPtr< Fish_obj > Fish_obj::__new()
{  hx::ObjectPtr< Fish_obj > result = new Fish_obj();
	result->__construct();
	return result;}

Dynamic Fish_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fish_obj > result = new Fish_obj();
	result->__construct();
	return result;}


Fish_obj::Fish_obj()
{
}

Dynamic Fish_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Fish_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Fish_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Fish_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fish_obj::__mClass,"__mClass");
};

#endif

Class Fish_obj::__mClass;

void Fish_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("models.Fish"), hx::TCanCast< Fish_obj> ,sStaticFields,sMemberFields,
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

void Fish_obj::__boot()
{
}

} // end namespace models
