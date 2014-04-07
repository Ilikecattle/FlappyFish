#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void AABB_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("nape.geom.AABB","new",0xaccd397e,"nape.geom.AABB.new","nape/geom/AABB.hx",182,0x3e49ef52)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(186)
	this->zpp_inner = null();
	HX_STACK_LINE(207)
	if (((bool((x != x)) || bool((y != y))))){
		HX_STACK_LINE(208)
		HX_STACK_DO_THROW(HX_CSTRING("Error: AABB position cannot be NaN"));
	}
	HX_STACK_LINE(210)
	if (((bool((width != width)) || bool((height != height))))){
		HX_STACK_LINE(211)
		HX_STACK_DO_THROW(HX_CSTRING("Error: AABB dimensions cannot be NaN"));
	}
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(214)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
			}
			else{
				HX_STACK_LINE(214)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(214)
				ret->next = null();
			}
			HX_STACK_LINE(214)
			Dynamic();
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->minx = x;
			HX_STACK_LINE(214)
			ret->miny = y;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->maxx = (x + width);
			HX_STACK_LINE(214)
			ret->maxy = (y + height);
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		this->zpp_inner = ret;
	}
	HX_STACK_LINE(215)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//AABB_obj::~AABB_obj() { }

Dynamic AABB_obj::__CreateEmpty() { return  new AABB_obj; }
hx::ObjectPtr< AABB_obj > AABB_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< AABB_obj > result = new AABB_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB_obj > result = new AABB_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::nape::geom::AABB AABB_obj::copy( ){
	HX_STACK_FRAME("nape.geom.AABB","copy",0x7f874cd7,"nape.geom.AABB.copy","nape/geom/AABB.hx",226,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(227)
			_this->_validate();
		}
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( ::nape::geom::AABB_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",228,0x3e49ef52)
			{
				HX_STACK_LINE(228)
				::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_AABB Block( ::zpp_nape::geom::ZPP_AABB _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",228,0x3e49ef52)
						{
							HX_STACK_LINE(228)
							::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
									HX_STACK_LINE(228)
									ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
								}
								else{
									HX_STACK_LINE(228)
									ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
									HX_STACK_LINE(228)
									ret->next = null();
								}
								HX_STACK_LINE(228)
								Dynamic();
							}
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								ret->minx = _this->minx;
								HX_STACK_LINE(228)
								ret->miny = _this->miny;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								ret->maxx = _this->maxx;
								HX_STACK_LINE(228)
								ret->maxy = _this->maxy;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(228)
				return _Function_2_1::Block(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(228)
	return (_Function_1_1::Block(this))->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,copy,return )

::flash::geom::Rectangle AABB_obj::toRect( ){
	HX_STACK_FRAME("nape.geom.AABB","toRect",0xa1c355e1,"nape.geom.AABB.toRect","nape/geom/AABB.hx",260,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		_g = this->zpp_inner->minx;
	}
	HX_STACK_LINE(261)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		_g1 = this->zpp_inner->miny;
	}
	HX_STACK_LINE(261)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			if (((_this->_validate != null()))){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			_g2 = (_this->maxx - _this->minx);
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::AABB_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",261,0x3e49ef52)
			{
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(261)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(261)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",261,0x3e49ef52)
						{
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(261)
							return (_this->maxy - _this->miny);
						}
						return null();
					}
				};
				HX_STACK_LINE(261)
				return _Function_2_1::Block(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(261)
	return ::flash::geom::Rectangle_obj::__new(_g,_g1,_g2,_Function_1_1::Block(this));
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toRect,return )

::nape::geom::Vec2 AABB_obj::get_min( ){
	HX_STACK_FRAME("nape.geom.AABB","get_min",0x5caf2a47,"nape.geom.AABB.get_min","nape/geom/AABB.hx",281,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	return this->zpp_inner->getmin();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_min,return )

::nape::geom::Vec2 AABB_obj::set_min( ::nape::geom::Vec2 min){
	HX_STACK_FRAME("nape.geom.AABB","set_min",0x4fb0bb53,"nape.geom.AABB.set_min","nape/geom/AABB.hx",283,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_LINE(284)
	{
		HX_STACK_LINE(287)
		if (((bool((min != null())) && bool(min->zpp_disp)))){
			HX_STACK_LINE(287)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(291)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(292)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		HX_STACK_LINE(294)
		if (((min == null()))){
			HX_STACK_LINE(295)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot assign null to AABB::min"));
		}
		HX_STACK_LINE(297)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(297)
					_this->_validate();
				}
			}
			HX_STACK_LINE(297)
			_g = this->zpp_inner->minx;
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",297,0x3e49ef52)
				{
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(297)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(297)
							_this->_validate();
						}
					}
					HX_STACK_LINE(297)
					return __this->zpp_inner->minx;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",297,0x3e49ef52)
				{
					HX_STACK_LINE(297)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(297)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(297)
								_this->_validate();
							}
						}
						HX_STACK_LINE(297)
						_g1 = __this->zpp_inner->miny;
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::AABB_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",297,0x3e49ef52)
							{
								HX_STACK_LINE(297)
								{
									HX_STACK_LINE(297)
									::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(297)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(297)
										_this->_validate();
									}
								}
								HX_STACK_LINE(297)
								return __this->zpp_inner->miny;
							}
							return null();
						}
					};
					HX_STACK_LINE(297)
					return (_g1 != _Function_3_1::Block(__this));
				}
				return null();
			}
		};
		HX_STACK_LINE(297)
		if (((  ((!(((_g != _Function_2_1::Block(this)))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(298)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::min components cannot be NaN"));
		}
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(301)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				if (((bool((min != null())) && bool(min->zpp_disp)))){
					HX_STACK_LINE(301)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(301)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(301)
						_this->_validate();
					}
				}
				HX_STACK_LINE(301)
				_g2 = min->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",301,0x3e49ef52)
					{
						HX_STACK_LINE(301)
						::nape::geom::Vec2 _this = __this->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(301)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(301)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(301)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(301)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(301)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(301)
			if (((_g2 > _Function_3_1::Block(this)))){
				HX_STACK_LINE(301)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Assignment would cause negative width"));
			}
			HX_STACK_LINE(302)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				if (((bool((min != null())) && bool(min->zpp_disp)))){
					HX_STACK_LINE(302)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				_g3 = min->zpp_inner->y;
			}
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",302,0x3e49ef52)
					{
						HX_STACK_LINE(302)
						::nape::geom::Vec2 _this = __this->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(302)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(302)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(302)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(302)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(302)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(302)
			if (((_g3 > _Function_3_2::Block(this)))){
				HX_STACK_LINE(302)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Assignment would cause negative height"));
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::nape::geom::Vec2 _this = this->zpp_inner->getmin();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(309)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(309)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
			}
			HX_STACK_LINE(309)
			if (((bool((min != null())) && bool(min->zpp_disp)))){
				HX_STACK_LINE(309)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
			}
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(309)
				if ((_this1->_immutable)){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(309)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(309)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(309)
			if (((min == null()))){
				HX_STACK_LINE(309)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			HX_STACK_LINE(309)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((bool((min != null())) && bool(min->zpp_disp)))){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					x = min->zpp_inner->x;
				}
				HX_STACK_LINE(309)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((bool((min != null())) && bool(min->zpp_disp)))){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					y = min->zpp_inner->y;
				}
				HX_STACK_LINE(309)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					if ((_this1->_immutable)){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(309)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(309)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(309)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_4_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",309,0x3e49ef52)
						{
							HX_STACK_LINE(309)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(309)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(309)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(309)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",309,0x3e49ef52)
						{
							HX_STACK_LINE(309)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(309)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(309)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(309)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(309)
				if ((!(((  (((_Function_4_1::Block(_this) == x))) ? bool((_Function_4_2::Block(_this) == y)) : bool(false) ))))){
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(309)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(309)
						{
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(309)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(309)
				ret = _this;
			}
			HX_STACK_LINE(309)
			if ((min->zpp_inner->weak)){
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((bool((min != null())) && bool(min->zpp_disp)))){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						if ((_this1->_immutable)){
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(309)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(309)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(309)
					if ((min->zpp_inner->_inuse)){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 inner = min->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(309)
					min->zpp_inner->outer = null();
					HX_STACK_LINE(309)
					min->zpp_inner = null();
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::nape::geom::Vec2 o = min;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(309)
						o->zpp_pool = null();
						HX_STACK_LINE(309)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(309)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(309)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(309)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(309)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							if (((o->outer != null()))){
								HX_STACK_LINE(309)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(309)
								o->outer = null();
							}
							HX_STACK_LINE(309)
							o->_isimmutable = null();
							HX_STACK_LINE(309)
							o->_validate = null();
							HX_STACK_LINE(309)
							o->_invalidate = null();
						}
						HX_STACK_LINE(309)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(309)
				true;
			}
			else{
				HX_STACK_LINE(309)
				false;
			}
			HX_STACK_LINE(309)
			ret;
		}
	}
	HX_STACK_LINE(311)
	return this->zpp_inner->getmin();
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_min,return )

::nape::geom::Vec2 AABB_obj::get_max( ){
	HX_STACK_FRAME("nape.geom.AABB","get_max",0x5caf2359,"nape.geom.AABB.get_max","nape/geom/AABB.hx",330,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	return this->zpp_inner->getmax();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_max,return )

::nape::geom::Vec2 AABB_obj::set_max( ::nape::geom::Vec2 max){
	HX_STACK_FRAME("nape.geom.AABB","set_max",0x4fb0b465,"nape.geom.AABB.set_max","nape/geom/AABB.hx",332,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(336)
		if (((bool((max != null())) && bool(max->zpp_disp)))){
			HX_STACK_LINE(336)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(340)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(341)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		HX_STACK_LINE(343)
		if (((max == null()))){
			HX_STACK_LINE(344)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot assign null to AABB::max"));
		}
		HX_STACK_LINE(346)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(346)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(346)
					_this->_validate();
				}
			}
			HX_STACK_LINE(346)
			_g = this->zpp_inner->minx;
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",346,0x3e49ef52)
				{
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(346)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(346)
							_this->_validate();
						}
					}
					HX_STACK_LINE(346)
					return __this->zpp_inner->minx;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",346,0x3e49ef52)
				{
					HX_STACK_LINE(346)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						{
							HX_STACK_LINE(346)
							::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(346)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(346)
								_this->_validate();
							}
						}
						HX_STACK_LINE(346)
						_g1 = __this->zpp_inner->miny;
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::AABB_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",346,0x3e49ef52)
							{
								HX_STACK_LINE(346)
								{
									HX_STACK_LINE(346)
									::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(346)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(346)
										_this->_validate();
									}
								}
								HX_STACK_LINE(346)
								return __this->zpp_inner->miny;
							}
							return null();
						}
					};
					HX_STACK_LINE(346)
					return (_g1 != _Function_3_1::Block(__this));
				}
				return null();
			}
		};
		HX_STACK_LINE(346)
		if (((  ((!(((_g != _Function_2_1::Block(this)))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(347)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::max components cannot be NaN"));
		}
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(354)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				if (((bool((max != null())) && bool(max->zpp_disp)))){
					HX_STACK_LINE(354)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(354)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(354)
						_this->_validate();
					}
				}
				HX_STACK_LINE(354)
				_g4 = max->zpp_inner->x;
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",354,0x3e49ef52)
					{
						HX_STACK_LINE(354)
						::nape::geom::Vec2 _this = __this->zpp_inner->getmin();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(354)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(354)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(354)
						{
							HX_STACK_LINE(354)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(354)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(354)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(354)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(354)
			if (((_g4 < _Function_3_1::Block(this)))){
				HX_STACK_LINE(354)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Assignment would cause negative width"));
			}
			HX_STACK_LINE(355)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				if (((bool((max != null())) && bool(max->zpp_disp)))){
					HX_STACK_LINE(355)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(355)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(355)
						_this->_validate();
					}
				}
				HX_STACK_LINE(355)
				_g5 = max->zpp_inner->y;
			}
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",355,0x3e49ef52)
					{
						HX_STACK_LINE(355)
						::nape::geom::Vec2 _this = __this->zpp_inner->getmin();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(355)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(355)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(355)
						{
							HX_STACK_LINE(355)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(355)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(355)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(355)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(355)
			if (((_g5 < _Function_3_2::Block(this)))){
				HX_STACK_LINE(355)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Assignment would cause negative height"));
			}
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			::nape::geom::Vec2 _this = this->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(358)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(358)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
			}
			HX_STACK_LINE(358)
			if (((bool((max != null())) && bool(max->zpp_disp)))){
				HX_STACK_LINE(358)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(358)
				if ((_this1->_immutable)){
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(358)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(358)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(358)
			if (((max == null()))){
				HX_STACK_LINE(358)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			HX_STACK_LINE(358)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					if (((bool((max != null())) && bool(max->zpp_disp)))){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					x = max->zpp_inner->x;
				}
				HX_STACK_LINE(358)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					if (((bool((max != null())) && bool(max->zpp_disp)))){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					y = max->zpp_inner->y;
				}
				HX_STACK_LINE(358)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					if ((_this1->_immutable)){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(358)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(358)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(358)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_4_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",358,0x3e49ef52)
						{
							HX_STACK_LINE(358)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(358)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(358)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(358)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",358,0x3e49ef52)
						{
							HX_STACK_LINE(358)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(358)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(358)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(358)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(358)
				if ((!(((  (((_Function_4_1::Block(_this) == x))) ? bool((_Function_4_2::Block(_this) == y)) : bool(false) ))))){
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(358)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(358)
						{
						}
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(358)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(358)
				ret = _this;
			}
			HX_STACK_LINE(358)
			if ((max->zpp_inner->weak)){
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					if (((bool((max != null())) && bool(max->zpp_disp)))){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						if ((_this1->_immutable)){
							HX_STACK_LINE(358)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(358)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(358)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(358)
					if ((max->zpp_inner->_inuse)){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 inner = max->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(358)
					max->zpp_inner->outer = null();
					HX_STACK_LINE(358)
					max->zpp_inner = null();
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::nape::geom::Vec2 o = max;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(358)
						o->zpp_pool = null();
						HX_STACK_LINE(358)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(358)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(358)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(358)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(358)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							if (((o->outer != null()))){
								HX_STACK_LINE(358)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(358)
								o->outer = null();
							}
							HX_STACK_LINE(358)
							o->_isimmutable = null();
							HX_STACK_LINE(358)
							o->_validate = null();
							HX_STACK_LINE(358)
							o->_invalidate = null();
						}
						HX_STACK_LINE(358)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(358)
				true;
			}
			else{
				HX_STACK_LINE(358)
				false;
			}
			HX_STACK_LINE(358)
			ret;
		}
	}
	HX_STACK_LINE(360)
	return this->zpp_inner->getmax();
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_max,return )

Float AABB_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.AABB","get_x",0x5ddd11ed,"nape.geom.AABB.get_x","nape/geom/AABB.hx",370,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(371)
			_this->_validate();
		}
	}
	HX_STACK_LINE(372)
	return this->zpp_inner->minx;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_x,return )

Float AABB_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.AABB","set_x",0x46ac07f9,"nape.geom.AABB.set_x","nape/geom/AABB.hx",374,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(377)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(378)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",381,0x3e49ef52)
				{
					HX_STACK_LINE(381)
					{
						HX_STACK_LINE(381)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(381)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(381)
							_this->_validate();
						}
					}
					HX_STACK_LINE(381)
					return __this->zpp_inner->minx;
				}
				return null();
			}
		};
		HX_STACK_LINE(381)
		if (((_Function_2_1::Block(this) != x))){
			HX_STACK_LINE(383)
			if (((x != x))){
				HX_STACK_LINE(383)
				HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::x cannot be NaN"));
			}
			HX_STACK_LINE(385)
			hx::AddEq(this->zpp_inner->maxx,(x - this->zpp_inner->minx));
			HX_STACK_LINE(386)
			this->zpp_inner->minx = x;
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(387)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(390)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(390)
			_this->_validate();
		}
	}
	HX_STACK_LINE(390)
	return this->zpp_inner->minx;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_x,return )

Float AABB_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.AABB","get_y",0x5ddd11ee,"nape.geom.AABB.get_y","nape/geom/AABB.hx",400,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(401)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(401)
			_this->_validate();
		}
	}
	HX_STACK_LINE(402)
	return this->zpp_inner->miny;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_y,return )

Float AABB_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.AABB","set_y",0x46ac07fa,"nape.geom.AABB.set_y","nape/geom/AABB.hx",404,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(405)
	{
		HX_STACK_LINE(407)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(408)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",411,0x3e49ef52)
				{
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(411)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(411)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(411)
							_this->_validate();
						}
					}
					HX_STACK_LINE(411)
					return __this->zpp_inner->miny;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		if (((_Function_2_1::Block(this) != y))){
			HX_STACK_LINE(413)
			if (((y != y))){
				HX_STACK_LINE(413)
				HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::y cannot be NaN"));
			}
			HX_STACK_LINE(415)
			hx::AddEq(this->zpp_inner->maxy,(y - this->zpp_inner->miny));
			HX_STACK_LINE(416)
			this->zpp_inner->miny = y;
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(417)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(420)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(420)
			_this->_validate();
		}
	}
	HX_STACK_LINE(420)
	return this->zpp_inner->miny;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_y,return )

Float AABB_obj::get_width( ){
	HX_STACK_FRAME("nape.geom.AABB","get_width",0x087e25fb,"nape.geom.AABB.get_width","nape/geom/AABB.hx",430,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(431)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(431)
			_this->_validate();
		}
	}
	HX_STACK_LINE(432)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(432)
	return (_this->maxx - _this->minx);
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_width,return )

Float AABB_obj::set_width( Float width){
	HX_STACK_FRAME("nape.geom.AABB","set_width",0xebcf1207,"nape.geom.AABB.set_width","nape/geom/AABB.hx",434,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(437)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(438)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",441,0x3e49ef52)
				{
					HX_STACK_LINE(441)
					{
						HX_STACK_LINE(441)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(441)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(441)
							_this->_validate();
						}
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::AABB_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",441,0x3e49ef52)
							{
								HX_STACK_LINE(441)
								::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(441)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					HX_STACK_LINE(441)
					return _Function_3_1::Block(__this);
				}
				return null();
			}
		};
		HX_STACK_LINE(441)
		if (((_Function_2_1::Block(this) != width))){
			HX_STACK_LINE(443)
			if (((width != width))){
				HX_STACK_LINE(444)
				HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::width cannot be NaN"));
			}
			HX_STACK_LINE(446)
			if (((width < (int)0))){
				HX_STACK_LINE(447)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: AABB::width (") + width) + HX_CSTRING(") must be >= 0")));
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",450,0x3e49ef52)
					{
						HX_STACK_LINE(450)
						{
							HX_STACK_LINE(450)
							::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(450)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(450)
								_this->_validate();
							}
						}
						HX_STACK_LINE(450)
						return __this->zpp_inner->minx;
					}
					return null();
				}
			};
			HX_STACK_LINE(450)
			this->zpp_inner->maxx = (_Function_3_1::Block(this) + width);
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(451)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(454)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(454)
			_this->_validate();
		}
	}
	HX_STACK_LINE(454)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(454)
	return (_this->maxx - _this->minx);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_width,return )

Float AABB_obj::get_height( ){
	HX_STACK_FRAME("nape.geom.AABB","get_height",0x1c328e52,"nape.geom.AABB.get_height","nape/geom/AABB.hx",464,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(465)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(465)
			_this->_validate();
		}
	}
	HX_STACK_LINE(466)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(466)
	return (_this->maxy - _this->miny);
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_height,return )

Float AABB_obj::set_height( Float height){
	HX_STACK_FRAME("nape.geom.AABB","set_height",0x1fb02cc6,"nape.geom.AABB.set_height","nape/geom/AABB.hx",468,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(469)
	{
		HX_STACK_LINE(471)
		if ((this->zpp_inner->_immutable)){
			HX_STACK_LINE(472)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AABB is immutable"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::AABB_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",475,0x3e49ef52)
				{
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(475)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(475)
							_this->_validate();
						}
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::AABB_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",475,0x3e49ef52)
							{
								HX_STACK_LINE(475)
								::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(475)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(475)
					return _Function_3_1::Block(__this);
				}
				return null();
			}
		};
		HX_STACK_LINE(475)
		if (((_Function_2_1::Block(this) != height))){
			HX_STACK_LINE(477)
			if (((height != height))){
				HX_STACK_LINE(478)
				HX_STACK_DO_THROW(HX_CSTRING("Error: AABB::height cannot be NaN"));
			}
			HX_STACK_LINE(480)
			if (((height < (int)0))){
				HX_STACK_LINE(481)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: AABB::height (") + height) + HX_CSTRING(") must be >= 0")));
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::AABB_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/AABB.hx",484,0x3e49ef52)
					{
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							::zpp_nape::geom::ZPP_AABB _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(484)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(484)
								_this->_validate();
							}
						}
						HX_STACK_LINE(484)
						return __this->zpp_inner->miny;
					}
					return null();
				}
			};
			HX_STACK_LINE(484)
			this->zpp_inner->maxy = (_Function_3_1::Block(this) + height);
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(485)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(485)
					_this->_invalidate(_this);
				}
			}
		}
	}
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(488)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(488)
			_this->_validate();
		}
	}
	HX_STACK_LINE(488)
	::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(488)
	return (_this->maxy - _this->miny);
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_height,return )

::String AABB_obj::toString( ){
	HX_STACK_FRAME("nape.geom.AABB","toString",0x2ced9ace,"nape.geom.AABB.toString","nape/geom/AABB.hx",493,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(494)
			_this->_validate();
		}
	}
	HX_STACK_LINE(495)
	return this->zpp_inner->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toString,return )

::nape::geom::AABB AABB_obj::fromRect( ::flash::geom::Rectangle rect){
	HX_STACK_FRAME("nape.geom.AABB","fromRect",0x9df1e5d0,"nape.geom.AABB.fromRect","nape/geom/AABB.hx",243,0x3e49ef52)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(245)
	if (((rect == null()))){
		HX_STACK_LINE(246)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot create AABB from null Rectangle"));
	}
	HX_STACK_LINE(249)
	return ::nape::geom::AABB_obj::__new(rect->x,rect->y,rect->width,rect->height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,fromRect,return )


AABB_obj::AABB_obj()
{
}

void AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic AABB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toRect") ) { return toRect_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromRect") ) { return fromRect_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { return set_max(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromRect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(AABB_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("copy"),
	HX_CSTRING("toRect"),
	HX_CSTRING("get_min"),
	HX_CSTRING("set_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("set_max"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#endif

Class AABB_obj::__mClass;

void AABB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.AABB"), hx::TCanCast< AABB_obj> ,sStaticFields,sMemberFields,
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

void AABB_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
