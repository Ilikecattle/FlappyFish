#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void PreListener_obj::__construct(::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure)
{
HX_STACK_FRAME("nape.callbacks.PreListener","new",0xc516dfa3,"nape.callbacks.PreListener.new","nape/callbacks/PreListener.hx",180,0x3d50ffef)

HX_STACK_ARG(interactionType,"interactionType")

HX_STACK_ARG(options1,"options1")

HX_STACK_ARG(options2,"options2")

HX_STACK_ARG(handler,"handler")

HX_STACK_ARG(__o_precedence,"precedence")

HX_STACK_ARG(__o_pure,"pure")
int precedence = __o_precedence.Default(0);
bool pure = __o_pure.Default(false);
{
	HX_STACK_LINE(184)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(338)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
	HX_STACK_LINE(340)
	super::__construct();
	HX_STACK_LINE(342)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
	HX_STACK_LINE(345)
	if (((handler == null()))){
		HX_STACK_LINE(346)
		HX_STACK_DO_THROW(HX_CSTRING("Error: PreListener must take a handler!"));
	}
	HX_STACK_LINE(349)
	::nape::callbacks::OptionType _g = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(349)
	this->zpp_inner_zn = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__new(_g,::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options2),::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_PRE,::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);
	HX_STACK_LINE(350)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(351)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(352)
	this->zpp_inner_zn->outer_znp = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(353)
	this->zpp_inner->precedence = precedence;
	HX_STACK_LINE(354)
	this->zpp_inner_zn->pure = pure;
	HX_STACK_LINE(355)
	this->zpp_inner_zn->handlerp = handler;
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			if (((interactionType == null()))){
				HX_STACK_LINE(356)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set listener interaction type to null"));
			}
			struct _Function_3_1{
				inline static ::nape::callbacks::InteractionType Block( ::nape::callbacks::PreListener_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
					{
						HX_STACK_LINE(356)
						int ret = __this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
						struct _Function_4_1{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
								{
									HX_STACK_LINE(356)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(356)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
								{
									HX_STACK_LINE(356)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(356)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
								}
								return null();
							}
						};
						struct _Function_4_3{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
								{
									HX_STACK_LINE(356)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(356)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
								{
									HX_STACK_LINE(356)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(356)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
								}
								return null();
							}
						};
						HX_STACK_LINE(356)
						return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_4_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_4_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_4_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_4_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(356)
			if (((_Function_3_1::Block(this) != interactionType))){
				HX_STACK_LINE(356)
				int xtype;		HX_STACK_VAR(xtype,"xtype");
				struct _Function_4_1{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
						{
							HX_STACK_LINE(356)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(356)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
						}
						return null();
					}
				};
				HX_STACK_LINE(356)
				if (((interactionType == _Function_4_1::Block()))){
					HX_STACK_LINE(356)
					xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
				}
				else{
					struct _Function_5_1{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
							{
								HX_STACK_LINE(356)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(356)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(356)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
							}
							return null();
						}
					};
					HX_STACK_LINE(356)
					if (((interactionType == _Function_5_1::Block()))){
						HX_STACK_LINE(356)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
					}
					else{
						struct _Function_6_1{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",356,0x3d50ffef)
								{
									HX_STACK_LINE(356)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(356)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(356)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
								}
								return null();
							}
						};
						HX_STACK_LINE(356)
						if (((interactionType == _Function_6_1::Block()))){
							HX_STACK_LINE(356)
							xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(356)
							xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
						}
					}
				}
				HX_STACK_LINE(356)
				this->zpp_inner_zn->itype = xtype;
			}
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(356)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
				HX_STACK_LINE(356)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(356)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
					HX_STACK_LINE(356)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(356)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(356)
					if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
						HX_STACK_LINE(356)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(356)
						if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
							HX_STACK_LINE(356)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(356)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(356)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(356)
							Dynamic();
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//PreListener_obj::~PreListener_obj() { }

Dynamic PreListener_obj::__CreateEmpty() { return  new PreListener_obj; }
hx::ObjectPtr< PreListener_obj > PreListener_obj::__new(::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence,hx::Null< bool >  __o_pure)
{  hx::ObjectPtr< PreListener_obj > result = new PreListener_obj();
	result->__construct(interactionType,options1,options2,handler,__o_precedence,__o_pure);
	return result;}

Dynamic PreListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreListener_obj > result = new PreListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::nape::callbacks::OptionType PreListener_obj::get_options1( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_options1",0x8ee8e379,"nape.callbacks.PreListener.get_options1","nape/callbacks/PreListener.hx",191,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options1,return )

::nape::callbacks::OptionType PreListener_obj::set_options1( ::nape::callbacks::OptionType options1){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_options1",0xa3e206ed,"nape.callbacks.PreListener.set_options1","nape/callbacks/PreListener.hx",193,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options1,"options1")
	HX_STACK_LINE(195)
	this->zpp_inner_zn->options1->set(options1->zpp_inner);
	HX_STACK_LINE(197)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options1,return )

::nape::callbacks::OptionType PreListener_obj::get_options2( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_options2",0x8ee8e37a,"nape.callbacks.PreListener.get_options2","nape/callbacks/PreListener.hx",205,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_options2,return )

::nape::callbacks::OptionType PreListener_obj::set_options2( ::nape::callbacks::OptionType options2){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_options2",0xa3e206ee,"nape.callbacks.PreListener.set_options2","nape/callbacks/PreListener.hx",207,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options2,"options2")
	HX_STACK_LINE(209)
	this->zpp_inner_zn->options2->set(options2->zpp_inner);
	HX_STACK_LINE(211)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_options2,return )

Dynamic PreListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_handler",0xe5e89a24,"nape.callbacks.PreListener.get_handler","nape/callbacks/PreListener.hx",240,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return this->zpp_inner_zn->handlerp;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_handler,return )

Dynamic PreListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_handler",0xf055a130,"nape.callbacks.PreListener.set_handler","nape/callbacks/PreListener.hx",242,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(245)
		if (((handler == null()))){
			HX_STACK_LINE(246)
			HX_STACK_DO_THROW(HX_CSTRING("Error: PreListener must take a non-null handler!"));
		}
		HX_STACK_LINE(249)
		this->zpp_inner_zn->handlerp = handler;
		HX_STACK_LINE(250)
		this->zpp_inner_zn->wake();
	}
	HX_STACK_LINE(252)
	return this->zpp_inner_zn->handlerp;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_handler,return )

bool PreListener_obj::get_pure( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_pure",0x06cb8a5e,"nape.callbacks.PreListener.get_pure","nape/callbacks/PreListener.hx",267,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	return this->zpp_inner_zn->pure;
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_pure,return )

bool PreListener_obj::set_pure( bool pure){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_pure",0xb528e3d2,"nape.callbacks.PreListener.set_pure","nape/callbacks/PreListener.hx",269,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pure,"pure")
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(271)
		if ((!(pure))){
			HX_STACK_LINE(272)
			this->zpp_inner_zn->wake();
		}
		HX_STACK_LINE(274)
		this->zpp_inner_zn->pure = pure;
	}
	HX_STACK_LINE(276)
	return this->zpp_inner_zn->pure;
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_pure,return )

::nape::callbacks::InteractionType PreListener_obj::get_interactionType( ){
	HX_STACK_FRAME("nape.callbacks.PreListener","get_interactionType",0xddb47c06,"nape.callbacks.PreListener.get_interactionType","nape/callbacks/PreListener.hx",287,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(289)
	if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
		HX_STACK_LINE(289)
		if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(289)
		return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(290)
		if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
			HX_STACK_LINE(290)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
				HX_STACK_LINE(290)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(290)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(291)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
				HX_STACK_LINE(291)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(291)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(291)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(292)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
					HX_STACK_LINE(292)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(292)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(292)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(293)
					return null();
				}
			}
		}
	}
	HX_STACK_LINE(289)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PreListener_obj,get_interactionType,return )

::nape::callbacks::InteractionType PreListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
	HX_STACK_FRAME("nape.callbacks.PreListener","set_interactionType",0x1a516f12,"nape.callbacks.PreListener.set_interactionType","nape/callbacks/PreListener.hx",295,0x3d50ffef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(interactionType,"interactionType")
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(298)
		if (((interactionType == null()))){
			HX_STACK_LINE(299)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set listener interaction type to null"));
		}
		struct _Function_2_1{
			inline static ::nape::callbacks::InteractionType Block( ::nape::callbacks::PreListener_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",302,0x3d50ffef)
				{
					HX_STACK_LINE(302)
					int ret = __this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
					struct _Function_3_1{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",302,0x3d50ffef)
							{
								HX_STACK_LINE(302)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(302)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",302,0x3d50ffef)
							{
								HX_STACK_LINE(302)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(302)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
							}
							return null();
						}
					};
					struct _Function_3_3{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",302,0x3d50ffef)
							{
								HX_STACK_LINE(302)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(302)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",302,0x3d50ffef)
							{
								HX_STACK_LINE(302)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(302)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(302)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
							}
							return null();
						}
					};
					HX_STACK_LINE(302)
					return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_3_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_3_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_3_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_3_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(302)
		if (((_Function_2_1::Block(this) != interactionType))){
			HX_STACK_LINE(303)
			int xtype;		HX_STACK_VAR(xtype,"xtype");
			struct _Function_3_1{
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",303,0x3d50ffef)
					{
						HX_STACK_LINE(303)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(303)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(303)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
					}
					return null();
				}
			};
			HX_STACK_LINE(303)
			if (((interactionType == _Function_3_1::Block()))){
				HX_STACK_LINE(303)
				xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
			}
			else{
				struct _Function_4_1{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",303,0x3d50ffef)
						{
							HX_STACK_LINE(303)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
								HX_STACK_LINE(303)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(303)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(303)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(303)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
						}
						return null();
					}
				};
				HX_STACK_LINE(303)
				if (((interactionType == _Function_4_1::Block()))){
					HX_STACK_LINE(303)
					xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
				}
				else{
					struct _Function_5_1{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/PreListener.hx",303,0x3d50ffef)
							{
								HX_STACK_LINE(303)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
									HX_STACK_LINE(303)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(303)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(303)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(303)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
							}
							return null();
						}
					};
					HX_STACK_LINE(303)
					if (((interactionType == _Function_5_1::Block()))){
						HX_STACK_LINE(303)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(303)
						xtype = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
					}
				}
			}
			HX_STACK_LINE(304)
			this->zpp_inner_zn->itype = xtype;
		}
	}
	HX_STACK_LINE(307)
	int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(307)
	if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
		HX_STACK_LINE(307)
		if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
			HX_STACK_LINE(307)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(307)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
			HX_STACK_LINE(307)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(307)
		return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(307)
		if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
			HX_STACK_LINE(307)
			if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
				HX_STACK_LINE(307)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(307)
			return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(307)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
				HX_STACK_LINE(307)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(307)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(307)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(307)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
					HX_STACK_LINE(307)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(307)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(307)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(307)
					return null();
				}
			}
		}
	}
	HX_STACK_LINE(307)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PreListener_obj,set_interactionType,return )


PreListener_obj::PreListener_obj()
{
}

void PreListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PreListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { return get_pure(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return get_handler(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return get_options1(); }
		if (HX_FIELD_EQ(inName,"options2") ) { return get_options2(); }
		if (HX_FIELD_EQ(inName,"get_pure") ) { return get_pure_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pure") ) { return set_pure_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return get_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return set_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return get_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options2") ) { return set_options2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return get_interactionType(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return get_interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return set_interactionType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { return set_pure(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return set_handler(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { return set_options1(inValue); }
		if (HX_FIELD_EQ(inName,"options2") ) { return set_options2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return set_interactionType(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PreListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("options1"));
	outFields->push(HX_CSTRING("options2"));
	outFields->push(HX_CSTRING("pure"));
	outFields->push(HX_CSTRING("interactionType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(PreListener_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("get_options1"),
	HX_CSTRING("set_options1"),
	HX_CSTRING("get_options2"),
	HX_CSTRING("set_options2"),
	HX_CSTRING("get_handler"),
	HX_CSTRING("set_handler"),
	HX_CSTRING("get_pure"),
	HX_CSTRING("set_pure"),
	HX_CSTRING("get_interactionType"),
	HX_CSTRING("set_interactionType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreListener_obj::__mClass,"__mClass");
};

#endif

Class PreListener_obj::__mClass;

void PreListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.PreListener"), hx::TCanCast< PreListener_obj> ,sStaticFields,sMemberFields,
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

void PreListener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
