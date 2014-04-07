#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void GravMassMode_obj::__construct()
{
HX_STACK_FRAME("nape.phys.GravMassMode","new",0xf67ed11f,"nape.phys.GravMassMode.new","nape/phys/GravMassMode.hx",183,0xc89986d1)
{
	HX_STACK_LINE(183)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot instantiate GravMassMode derp!"));
	}
}
;
	return null();
}

//GravMassMode_obj::~GravMassMode_obj() { }

Dynamic GravMassMode_obj::__CreateEmpty() { return  new GravMassMode_obj; }
hx::ObjectPtr< GravMassMode_obj > GravMassMode_obj::__new()
{  hx::ObjectPtr< GravMassMode_obj > result = new GravMassMode_obj();
	result->__construct();
	return result;}

Dynamic GravMassMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GravMassMode_obj > result = new GravMassMode_obj();
	result->__construct();
	return result;}

::String GravMassMode_obj::toString( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","toString",0x648dbb8d,"nape.phys.GravMassMode.toString","nape/phys/GravMassMode.hx",192,0xc89986d1)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/GravMassMode.hx",192,0xc89986d1)
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DEFAULT");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/GravMassMode.hx",193,0xc89986d1)
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("FIXED");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::phys::GravMassMode Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/GravMassMode.hx",194,0xc89986d1)
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("SCALED");
			}
			else{
				HX_STACK_LINE(195)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,toString,return )

::nape::phys::GravMassMode GravMassMode_obj::get_DEFAULT( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_DEFAULT",0x9cda6477,"nape.phys.GravMassMode.get_DEFAULT","nape/phys/GravMassMode.hx",204,0xc89986d1)
	HX_STACK_LINE(205)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_DEFAULT,return )

::nape::phys::GravMassMode GravMassMode_obj::get_FIXED( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_FIXED",0x312827aa,"nape.phys.GravMassMode.get_FIXED","nape/phys/GravMassMode.hx",219,0xc89986d1)
	HX_STACK_LINE(220)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(225)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_FIXED,return )

::nape::phys::GravMassMode GravMassMode_obj::get_SCALED( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_SCALED",0x81082b84,"nape.phys.GravMassMode.get_SCALED","nape/phys/GravMassMode.hx",235,0xc89986d1)
	HX_STACK_LINE(236)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(238)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(239)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(241)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_SCALED,return )


GravMassMode_obj::GravMassMode_obj()
{
}

Dynamic GravMassMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { return get_FIXED(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SCALED") ) { return get_SCALED(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { return get_DEFAULT(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_FIXED") ) { return get_FIXED_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SCALED") ) { return get_SCALED_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DEFAULT") ) { return get_DEFAULT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GravMassMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GravMassMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_DEFAULT"),
	HX_CSTRING("get_FIXED"),
	HX_CSTRING("get_SCALED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
};

#endif

Class GravMassMode_obj::__mClass;

void GravMassMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.GravMassMode"), hx::TCanCast< GravMassMode_obj> ,sStaticFields,sMemberFields,
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

void GravMassMode_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
