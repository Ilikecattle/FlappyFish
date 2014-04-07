#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
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
#ifndef INCLUDED_models_Fish
#include <models/Fish.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_views_FlappyBackdrop
#include <views/FlappyBackdrop.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",20,0xb30d7781)

HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",26,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::create();
		HX_STACK_LINE(28)
		this->setupPhysics();
		HX_STACK_LINE(29)
		this->addBackdrop();
		HX_STACK_LINE(30)
		this->addFish();
		HX_STACK_LINE(31)
		this->createWalls(null(),null(),null(),null(),null(),null());
	}
return null();
}


Void PlayState_obj::addBackdrop( ){
{
		HX_STACK_FRAME("PlayState","addBackdrop",0x55413686,"PlayState.addBackdrop","PlayState.hx",34,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->backdrop = ::views::FlappyBackdrop_obj::__new();
		HX_STACK_LINE(36)
		this->add(this->backdrop);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,addBackdrop,(void))

Void PlayState_obj::setupPhysics( ){
{
		HX_STACK_FRAME("PlayState","setupPhysics",0x97bb9f7b,"PlayState.setupPhysics","PlayState.hx",40,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::nape::space::Space _this1 = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(40)
			if (((_this1->zpp_inner->wrap_gravity == null()))){
				HX_STACK_LINE(40)
				_this1->zpp_inner->getgravity();
			}
			HX_STACK_LINE(40)
			_this = _this1->zpp_inner->wrap_gravity;
		}
		HX_STACK_LINE(40)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(40)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(40)
			if ((_this1->_immutable)){
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(40)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(40)
				_this1->_isimmutable();
			}
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",40,0xb30d7781)
				{
					HX_STACK_LINE(40)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(40)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(40)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(40)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(40)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",40,0xb30d7781)
				{
					HX_STACK_LINE(40)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(40)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(40)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(40)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(40)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		if ((!(((  (((_Function_1_1::Block(_this) == (int)0))) ? bool((_Function_1_2::Block(_this) == (int)500)) : bool(false) ))))){
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				_this->zpp_inner->x = (int)0;
				HX_STACK_LINE(40)
				_this->zpp_inner->y = (int)500;
				HX_STACK_LINE(40)
				{
				}
			}
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(40)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(40)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(40)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setupPhysics,(void))

Void PlayState_obj::addFish( ){
{
		HX_STACK_FRAME("PlayState","addFish",0xca3a4148,"PlayState.addFish","PlayState.hx",43,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->fish = ::models::Fish_obj::__new();
		HX_STACK_LINE(45)
		this->add(::models::Fish_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,addFish,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",51,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",56,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(fish,"fish");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fish,"fish");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fish") ) { return fish; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addFish") ) { return addFish_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { return backdrop; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addBackdrop") ) { return addBackdrop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setupPhysics") ) { return setupPhysics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fish") ) { fish=inValue.Cast< ::models::Fish >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fish"));
	outFields->push(HX_CSTRING("backdrop"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::models::Fish*/ ,(int)offsetof(PlayState_obj,fish),HX_CSTRING("fish")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,backdrop),HX_CSTRING("backdrop")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fish"),
	HX_CSTRING("backdrop"),
	HX_CSTRING("create"),
	HX_CSTRING("addBackdrop"),
	HX_CSTRING("setupPhysics"),
	HX_CSTRING("addFish"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

