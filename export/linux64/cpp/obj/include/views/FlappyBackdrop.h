#ifndef INCLUDED_views_FlappyBackdrop
#define INCLUDED_views_FlappyBackdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/display/FlxBackdrop.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS1(views,FlappyBackdrop)
namespace views{


class HXCPP_CLASS_ATTRIBUTES  FlappyBackdrop_obj : public ::flixel::addons::display::FlxBackdrop_obj{
	public:
		typedef ::flixel::addons::display::FlxBackdrop_obj super;
		typedef FlappyBackdrop_obj OBJ_;
		FlappyBackdrop_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlappyBackdrop_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlappyBackdrop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlappyBackdrop"); }

};

} // end namespace views

#endif /* INCLUDED_views_FlappyBackdrop */ 
