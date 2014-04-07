#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace util{

Void ShapeDebug_obj::__construct(int width,int height,hx::Null< int >  __o_bgColour)
{
HX_STACK_FRAME("nape.util.ShapeDebug","new",0xf3c659ea,"nape.util.ShapeDebug.new","nape/util/ShapeDebug.hx",182,0xfa2f3866)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(__o_bgColour,"bgColour")
int bgColour = __o_bgColour.Default(3355443);
{
	HX_STACK_LINE(191)
	this->thickness = 0.0;
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(209)
	if (((width <= (int)0))){
		HX_STACK_LINE(209)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Debug width must be > 0"));
	}
	HX_STACK_LINE(212)
	if (((height <= (int)0))){
		HX_STACK_LINE(212)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Debug height must be > 0"));
	}
	HX_STACK_LINE(215)
	::zpp_nape::util::ZPP_Debug_obj::internal = true;
	HX_STACK_LINE(217)
	super::__construct();
	HX_STACK_LINE(219)
	::zpp_nape::util::ZPP_Debug_obj::internal = false;
	HX_STACK_LINE(221)
	this->zpp_inner_zn = ::zpp_nape::util::ZPP_ShapeDebug_obj::__new(width,height);
	HX_STACK_LINE(222)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(223)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(224)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		this->zpp_inner->d_shape->setbg(bgColour);
		HX_STACK_LINE(225)
		this->zpp_inner->bg_col;
	}
	HX_STACK_LINE(226)
	this->thickness = 0.1;
}
;
	return null();
}

//ShapeDebug_obj::~ShapeDebug_obj() { }

Dynamic ShapeDebug_obj::__CreateEmpty() { return  new ShapeDebug_obj; }
hx::ObjectPtr< ShapeDebug_obj > ShapeDebug_obj::__new(int width,int height,hx::Null< int >  __o_bgColour)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(width,height,__o_bgColour);
	return result;}

Dynamic ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ShapeDebug_obj::clear( ){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","clear",0xe4aaf197,"nape.util.ShapeDebug.clear","nape/util/ShapeDebug.hx",232,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->zpp_inner_zn->graphics->clear();
	}
return null();
}


Void ShapeDebug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawLine",0xbd19644e,"nape.util.ShapeDebug.drawLine","nape/util/ShapeDebug.hx",237,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(239)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(239)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(243)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(243)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(248)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(248)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(252)
		if (((start == null()))){
			HX_STACK_LINE(252)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawLine::start cannot be null"));
		}
		HX_STACK_LINE(253)
		if (((end == null()))){
			HX_STACK_LINE(253)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawLine::end cannot be null"));
		}
		HX_STACK_LINE(255)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(256)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(257)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(258)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(258)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(258)
						_this->_validate();
					}
				}
				HX_STACK_LINE(258)
				_g = start->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",258,0xfa2f3866)
					{
						HX_STACK_LINE(258)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(258)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(258)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(258)
								_this->_validate();
							}
						}
						HX_STACK_LINE(258)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			g->moveTo(_g,_Function_2_1::Block(start));
			HX_STACK_LINE(259)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(259)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				_g1 = end->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",259,0xfa2f3866)
					{
						HX_STACK_LINE(259)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(259)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(259)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(259)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(259)
								_this->_validate();
							}
						}
						HX_STACK_LINE(259)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(259)
			g->lineTo(_g1,_Function_2_2::Block(end));
			HX_STACK_LINE(260)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(264)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(264)
						if ((_this->_immutable)){
							HX_STACK_LINE(264)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(264)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(264)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(264)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(264)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(264)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(264)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(264)
					start->zpp_inner = null();
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						o->zpp_pool = null();
						HX_STACK_LINE(264)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(264)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							if (((o->outer != null()))){
								HX_STACK_LINE(264)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(264)
								o->outer = null();
							}
							HX_STACK_LINE(264)
							o->_isimmutable = null();
							HX_STACK_LINE(264)
							o->_validate = null();
							HX_STACK_LINE(264)
							o->_invalidate = null();
						}
						HX_STACK_LINE(264)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(265)
				true;
			}
			else{
				HX_STACK_LINE(268)
				false;
			}
			HX_STACK_LINE(271)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(275)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(275)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(275)
						if ((_this->_immutable)){
							HX_STACK_LINE(275)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(275)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(275)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(275)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(275)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(275)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(275)
					end->zpp_inner = null();
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						o->zpp_pool = null();
						HX_STACK_LINE(275)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(275)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(275)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							if (((o->outer != null()))){
								HX_STACK_LINE(275)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(275)
								o->outer = null();
							}
							HX_STACK_LINE(275)
							o->_isimmutable = null();
							HX_STACK_LINE(275)
							o->_validate = null();
							HX_STACK_LINE(275)
							o->_invalidate = null();
						}
						HX_STACK_LINE(275)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(276)
				true;
			}
			else{
				HX_STACK_LINE(279)
				false;
			}
		}
		else{
			HX_STACK_LINE(284)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(285)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(285)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(285)
						_this->_validate();
					}
				}
				HX_STACK_LINE(285)
				_g2 = v->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",285,0xfa2f3866)
					{
						HX_STACK_LINE(285)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(285)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(285)
								_this->_validate();
							}
						}
						HX_STACK_LINE(285)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(285)
			g->moveTo(_g2,_Function_2_1::Block(v));
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					if ((_this->_immutable)){
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(286)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(286)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(286)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				v->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					o->zpp_pool = null();
					HX_STACK_LINE(286)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(286)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						if (((o->outer != null()))){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(287)
			v = this->zpp_inner->xform->outer->transform(end,null(),null());
			HX_STACK_LINE(288)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(288)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(288)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(288)
						_this->_validate();
					}
				}
				HX_STACK_LINE(288)
				_g3 = v->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",288,0xfa2f3866)
					{
						HX_STACK_LINE(288)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(288)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(288)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(288)
								_this->_validate();
							}
						}
						HX_STACK_LINE(288)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			g->lineTo(_g3,_Function_2_2::Block(v));
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(289)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(289)
					if ((_this->_immutable)){
						HX_STACK_LINE(289)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(289)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(289)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(289)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(289)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(289)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(289)
				v->zpp_inner = null();
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					o->zpp_pool = null();
					HX_STACK_LINE(289)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(289)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(289)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(289)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(289)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						if (((o->outer != null()))){
							HX_STACK_LINE(289)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(289)
							o->outer = null();
						}
						HX_STACK_LINE(289)
						o->_isimmutable = null();
						HX_STACK_LINE(289)
						o->_validate = null();
						HX_STACK_LINE(289)
						o->_invalidate = null();
					}
					HX_STACK_LINE(289)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCurve",0x9274cf15,"nape.util.ShapeDebug.drawCurve","nape/util/ShapeDebug.hx",295,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(297)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(297)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(301)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(301)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(306)
		if (((bool((control != null())) && bool(control->zpp_disp)))){
			HX_STACK_LINE(306)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(311)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(311)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(315)
		if (((start == null()))){
			HX_STACK_LINE(315)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(316)
		if (((control == null()))){
			HX_STACK_LINE(316)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::control cannot be null"));
		}
		HX_STACK_LINE(317)
		if (((end == null()))){
			HX_STACK_LINE(317)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(319)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(320)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(321)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(322)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(322)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(322)
						_this->_validate();
					}
				}
				HX_STACK_LINE(322)
				_g = start->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",322,0xfa2f3866)
					{
						HX_STACK_LINE(322)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(322)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(322)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(322)
								_this->_validate();
							}
						}
						HX_STACK_LINE(322)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(322)
			g->moveTo(_g,_Function_2_1::Block(start));
			HX_STACK_LINE(323)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				if (((bool((control != null())) && bool(control->zpp_disp)))){
					HX_STACK_LINE(323)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g1 = control->zpp_inner->x;
			}
			HX_STACK_LINE(323)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				if (((bool((control != null())) && bool(control->zpp_disp)))){
					HX_STACK_LINE(323)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g2 = control->zpp_inner->y;
			}
			HX_STACK_LINE(323)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(323)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				_g3 = end->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",323,0xfa2f3866)
					{
						HX_STACK_LINE(323)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(323)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(323)
						{
							HX_STACK_LINE(323)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(323)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(323)
								_this->_validate();
							}
						}
						HX_STACK_LINE(323)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(323)
			g->curveTo(_g1,_g2,_g3,_Function_2_2::Block(end));
			HX_STACK_LINE(324)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(328)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(328)
						if ((_this->_immutable)){
							HX_STACK_LINE(328)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(328)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(328)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(328)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(328)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(328)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(328)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(328)
					start->zpp_inner = null();
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						o->zpp_pool = null();
						HX_STACK_LINE(328)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(328)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(328)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(328)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(328)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							if (((o->outer != null()))){
								HX_STACK_LINE(328)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(328)
								o->outer = null();
							}
							HX_STACK_LINE(328)
							o->_isimmutable = null();
							HX_STACK_LINE(328)
							o->_validate = null();
							HX_STACK_LINE(328)
							o->_invalidate = null();
						}
						HX_STACK_LINE(328)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(329)
				true;
			}
			else{
				HX_STACK_LINE(332)
				false;
			}
			HX_STACK_LINE(335)
			if ((control->zpp_inner->weak)){
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					if (((bool((control != null())) && bool(control->zpp_disp)))){
						HX_STACK_LINE(339)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(339)
						if ((_this->_immutable)){
							HX_STACK_LINE(339)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(339)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(339)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(339)
					if ((control->zpp_inner->_inuse)){
						HX_STACK_LINE(339)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(339)
					::zpp_nape::geom::ZPP_Vec2 inner = control->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(339)
					control->zpp_inner->outer = null();
					HX_STACK_LINE(339)
					control->zpp_inner = null();
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::nape::geom::Vec2 o = control;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						o->zpp_pool = null();
						HX_STACK_LINE(339)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(339)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(339)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(339)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(339)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							if (((o->outer != null()))){
								HX_STACK_LINE(339)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(339)
								o->outer = null();
							}
							HX_STACK_LINE(339)
							o->_isimmutable = null();
							HX_STACK_LINE(339)
							o->_validate = null();
							HX_STACK_LINE(339)
							o->_invalidate = null();
						}
						HX_STACK_LINE(339)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(340)
				true;
			}
			else{
				HX_STACK_LINE(343)
				false;
			}
			HX_STACK_LINE(346)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						if ((_this->_immutable)){
							HX_STACK_LINE(350)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(350)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(350)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(350)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(350)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(350)
					end->zpp_inner = null();
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						o->zpp_pool = null();
						HX_STACK_LINE(350)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(350)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(350)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							if (((o->outer != null()))){
								HX_STACK_LINE(350)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(350)
								o->outer = null();
							}
							HX_STACK_LINE(350)
							o->_isimmutable = null();
							HX_STACK_LINE(350)
							o->_validate = null();
							HX_STACK_LINE(350)
							o->_invalidate = null();
						}
						HX_STACK_LINE(350)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(351)
				true;
			}
			else{
				HX_STACK_LINE(354)
				false;
			}
		}
		else{
			HX_STACK_LINE(359)
			::nape::geom::Vec2 u = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(control,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 q = this->zpp_inner->xform->outer->transform(end,null(),null());		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(362)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(362)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(362)
						_this->_validate();
					}
				}
				HX_STACK_LINE(362)
				_g4 = u->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &u){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",362,0xfa2f3866)
					{
						HX_STACK_LINE(362)
						if (((bool((u != null())) && bool(u->zpp_disp)))){
							HX_STACK_LINE(362)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						return u->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(362)
			g->moveTo(_g4,_Function_2_1::Block(u));
			HX_STACK_LINE(363)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(363)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g5 = v->zpp_inner->x;
			}
			HX_STACK_LINE(363)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(363)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g6 = v->zpp_inner->y;
			}
			HX_STACK_LINE(363)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(363)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				_g7 = q->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &q){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",363,0xfa2f3866)
					{
						HX_STACK_LINE(363)
						if (((bool((q != null())) && bool(q->zpp_disp)))){
							HX_STACK_LINE(363)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						return q->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(363)
			g->curveTo(_g5,_g6,_g7,_Function_2_2::Block(q));
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(364)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(364)
					if ((_this->_immutable)){
						HX_STACK_LINE(364)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(364)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(364)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(364)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(364)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(364)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(364)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(364)
				u->zpp_inner = null();
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					o->zpp_pool = null();
					HX_STACK_LINE(364)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(364)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(364)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(364)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(364)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						if (((o->outer != null()))){
							HX_STACK_LINE(364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(364)
							o->outer = null();
						}
						HX_STACK_LINE(364)
						o->_isimmutable = null();
						HX_STACK_LINE(364)
						o->_validate = null();
						HX_STACK_LINE(364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(365)
					if ((_this->_immutable)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(365)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(365)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(365)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(365)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(365)
				v->zpp_inner = null();
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					o->zpp_pool = null();
					HX_STACK_LINE(365)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(365)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(365)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(365)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(365)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						if (((o->outer != null()))){
							HX_STACK_LINE(365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(365)
							o->outer = null();
						}
						HX_STACK_LINE(365)
						o->_isimmutable = null();
						HX_STACK_LINE(365)
						o->_validate = null();
						HX_STACK_LINE(365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(366)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(366)
					if ((_this->_immutable)){
						HX_STACK_LINE(366)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(366)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(366)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(366)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(366)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(366)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(366)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(366)
				q->zpp_inner = null();
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					o->zpp_pool = null();
					HX_STACK_LINE(366)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(366)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(366)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(366)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(366)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						if (((o->outer != null()))){
							HX_STACK_LINE(366)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(366)
							o->outer = null();
						}
						HX_STACK_LINE(366)
						o->_isimmutable = null();
						HX_STACK_LINE(366)
						o->_validate = null();
						HX_STACK_LINE(366)
						o->_invalidate = null();
					}
					HX_STACK_LINE(366)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCircle",0xaae308ea,"nape.util.ShapeDebug.drawCircle","nape/util/ShapeDebug.hx",372,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(374)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(374)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(378)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(378)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(382)
		if (((position == null()))){
			HX_STACK_LINE(382)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCircle::position cannot be null"));
		}
		HX_STACK_LINE(383)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(383)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCircle::radius must be >=0"));
		}
		HX_STACK_LINE(385)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(386)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(387)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(388)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(388)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(388)
						_this->_validate();
					}
				}
				HX_STACK_LINE(388)
				_g = position->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",388,0xfa2f3866)
					{
						HX_STACK_LINE(388)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(388)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(388)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(388)
								_this->_validate();
							}
						}
						HX_STACK_LINE(388)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(388)
			g->drawCircle(_g,_Function_2_1::Block(position),radius);
			HX_STACK_LINE(389)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(393)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(393)
						if ((_this->_immutable)){
							HX_STACK_LINE(393)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(393)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(393)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(393)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(393)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(393)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(393)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(393)
					position->zpp_inner = null();
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						o->zpp_pool = null();
						HX_STACK_LINE(393)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(393)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(393)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(393)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							if (((o->outer != null()))){
								HX_STACK_LINE(393)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(393)
								o->outer = null();
							}
							HX_STACK_LINE(393)
							o->_isimmutable = null();
							HX_STACK_LINE(393)
							o->_validate = null();
							HX_STACK_LINE(393)
							o->_invalidate = null();
						}
						HX_STACK_LINE(393)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(394)
				true;
			}
			else{
				HX_STACK_LINE(397)
				false;
			}
		}
		else{
			HX_STACK_LINE(402)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(403)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(403)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(403)
						_this->_validate();
					}
				}
				HX_STACK_LINE(403)
				_g1 = v->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",403,0xfa2f3866)
					{
						HX_STACK_LINE(403)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(403)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(403)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(403)
								_this->_validate();
							}
						}
						HX_STACK_LINE(403)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(403)
			g->drawCircle(_g1,_Function_2_1::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(404)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(404)
					if ((_this->_immutable)){
						HX_STACK_LINE(404)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(404)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(404)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(404)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(404)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(404)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(404)
				v->zpp_inner = null();
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					o->zpp_pool = null();
					HX_STACK_LINE(404)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(404)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(404)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(404)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(404)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						if (((o->outer != null()))){
							HX_STACK_LINE(404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(404)
							o->outer = null();
						}
						HX_STACK_LINE(404)
						o->_isimmutable = null();
						HX_STACK_LINE(404)
						o->_validate = null();
						HX_STACK_LINE(404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(404)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawAABB",0xb5b58ada,"nape.util.ShapeDebug.drawAABB","nape/util/ShapeDebug.hx",410,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(412)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(412)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(415)
		if (((aabb == null()))){
			HX_STACK_LINE(415)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawAABB::aabb cannot be null"));
		}
		HX_STACK_LINE(417)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(418)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(419)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(419)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				_g = aabb->zpp_inner->minx;
			}
			HX_STACK_LINE(419)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				_g1 = aabb->zpp_inner->miny;
			}
			HX_STACK_LINE(419)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					_g2 = (_this->maxx - _this->minx);
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",419,0xfa2f3866)
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(419)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",419,0xfa2f3866)
								{
									HX_STACK_LINE(419)
									::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(419)
									return (_this->maxy - _this->miny);
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						return _Function_3_1::Block(aabb);
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			g->drawRect(_g,_g1,_g2,_Function_2_1::Block(aabb));
		}
		else{
			HX_STACK_LINE(421)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(aabb->zpp_inner->getmin(),null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(422)
			::nape::geom::Vec2 w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(422)
							_this->_validate();
						}
					}
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						x = (_this->maxx - _this->minx);
					}
				}
				HX_STACK_LINE(422)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(422)
				if (((x != x))){
					HX_STACK_LINE(422)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(422)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(422)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(422)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(422)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(422)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(422)
					ret->zpp_pool = null();
					HX_STACK_LINE(422)
					ret->zpp_disp = false;
					HX_STACK_LINE(422)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(422)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(422)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(422)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
							}
							else{
								HX_STACK_LINE(422)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(422)
								ret1->next = null();
							}
							HX_STACK_LINE(422)
							ret1->weak = false;
						}
						HX_STACK_LINE(422)
						ret1->_immutable = immutable;
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret1->x = x;
							HX_STACK_LINE(422)
							ret1->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						ret->zpp_inner = ret1;
					}
					HX_STACK_LINE(422)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(422)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(422)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						if ((_this->_immutable)){
							HX_STACK_LINE(422)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(422)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(422)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(422)
					if (((x != x))){
						HX_STACK_LINE(422)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",422,0xfa2f3866)
							{
								HX_STACK_LINE(422)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(422)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(422)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(422)
										_this->_validate();
									}
								}
								HX_STACK_LINE(422)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",422,0xfa2f3866)
							{
								HX_STACK_LINE(422)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(422)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(422)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(422)
										_this->_validate();
									}
								}
								HX_STACK_LINE(422)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(422)
					if ((!(((  (((_Function_4_1::Block(ret) == x))) ? bool((_Function_4_2::Block(ret) == (int)0)) : bool(false) ))))){
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(422)
							ret->zpp_inner->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(422)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(422)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(422)
					ret;
				}
				HX_STACK_LINE(422)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(422)
				w = ret;
			}
			HX_STACK_LINE(423)
			::nape::geom::Vec2 w2 = this->zpp_inner->xform->outer->transform(w,true,null());		HX_STACK_VAR(w2,"w2");
			HX_STACK_LINE(424)
			::nape::geom::Vec2 h;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(424)
							_this->_validate();
						}
					}
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						y = (_this->maxy - _this->miny);
					}
				}
				HX_STACK_LINE(424)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(424)
				if (((y != y))){
					HX_STACK_LINE(424)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(424)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(424)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(424)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(424)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(424)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(424)
					ret->zpp_pool = null();
					HX_STACK_LINE(424)
					ret->zpp_disp = false;
					HX_STACK_LINE(424)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(424)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(424)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(424)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
							}
							else{
								HX_STACK_LINE(424)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(424)
								ret1->next = null();
							}
							HX_STACK_LINE(424)
							ret1->weak = false;
						}
						HX_STACK_LINE(424)
						ret1->_immutable = immutable;
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret1->x = (int)0;
							HX_STACK_LINE(424)
							ret1->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						ret->zpp_inner = ret1;
					}
					HX_STACK_LINE(424)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(424)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(424)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						if ((_this->_immutable)){
							HX_STACK_LINE(424)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(424)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(424)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(424)
					if (((y != y))){
						HX_STACK_LINE(424)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",424,0xfa2f3866)
							{
								HX_STACK_LINE(424)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(424)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(424)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(424)
										_this->_validate();
									}
								}
								HX_STACK_LINE(424)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",424,0xfa2f3866)
							{
								HX_STACK_LINE(424)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(424)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(424)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(424)
										_this->_validate();
									}
								}
								HX_STACK_LINE(424)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(424)
					if ((!(((  (((_Function_4_1::Block(ret) == (int)0))) ? bool((_Function_4_2::Block(ret) == y)) : bool(false) ))))){
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret->zpp_inner->x = (int)0;
							HX_STACK_LINE(424)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(424)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(424)
					ret;
				}
				HX_STACK_LINE(424)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(424)
				h = ret;
			}
			HX_STACK_LINE(425)
			::nape::geom::Vec2 h2 = this->zpp_inner->xform->outer->transform(h,true,null());		HX_STACK_VAR(h2,"h2");
			HX_STACK_LINE(426)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(426)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(426)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(426)
						_this->_validate();
					}
				}
				HX_STACK_LINE(426)
				_g3 = v->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",426,0xfa2f3866)
					{
						HX_STACK_LINE(426)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(426)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(426)
			g->moveTo(_g3,_Function_2_1::Block(v));
			HX_STACK_LINE(427)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(427)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g4 = v->zpp_inner->x;
			}
			HX_STACK_LINE(427)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",427,0xfa2f3866)
					{
						HX_STACK_LINE(427)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(427)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(427)
			_g5 = (_g4 + _Function_2_2::Block(w2));
			HX_STACK_LINE(427)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(427)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				_g6 = v->zpp_inner->y;
			}
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",427,0xfa2f3866)
					{
						HX_STACK_LINE(427)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(427)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(427)
			g->lineTo(_g5,(_g6 + _Function_2_3::Block(w2)));
			HX_STACK_LINE(428)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(428)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g7 = v->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",428,0xfa2f3866)
					{
						HX_STACK_LINE(428)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(428)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(428)
			_g8 = (_g7 + _Function_2_4::Block(w2));
			HX_STACK_LINE(428)
			Float _g9;		HX_STACK_VAR(_g9,"_g9");
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",428,0xfa2f3866)
					{
						HX_STACK_LINE(428)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(428)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(428)
			_g9 = (_g8 + _Function_2_5::Block(h2));
			HX_STACK_LINE(428)
			Float _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(428)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				_g10 = v->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float _g11;		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",428,0xfa2f3866)
					{
						HX_STACK_LINE(428)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(428)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(428)
			_g11 = (_g10 + _Function_2_6::Block(w2));
			struct _Function_2_7{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",428,0xfa2f3866)
					{
						HX_STACK_LINE(428)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(428)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(428)
			g->lineTo(_g9,(_g11 + _Function_2_7::Block(h2)));
			HX_STACK_LINE(429)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(429)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g12 = v->zpp_inner->x;
			}
			HX_STACK_LINE(429)
			Float _g13;		HX_STACK_VAR(_g13,"_g13");
			struct _Function_2_8{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",429,0xfa2f3866)
					{
						HX_STACK_LINE(429)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(429)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(429)
			_g13 = (_g12 + _Function_2_8::Block(h2));
			HX_STACK_LINE(429)
			Float _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(429)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				_g14 = v->zpp_inner->y;
			}
			struct _Function_2_9{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",429,0xfa2f3866)
					{
						HX_STACK_LINE(429)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(429)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(429)
			g->lineTo(_g13,(_g14 + _Function_2_9::Block(h2)));
			HX_STACK_LINE(430)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(430)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(430)
						_this->_validate();
					}
				}
				HX_STACK_LINE(430)
				_g15 = v->zpp_inner->x;
			}
			struct _Function_2_10{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",430,0xfa2f3866)
					{
						HX_STACK_LINE(430)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(430)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(430)
						{
							HX_STACK_LINE(430)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(430)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(430)
								_this->_validate();
							}
						}
						HX_STACK_LINE(430)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(430)
			g->lineTo(_g15,_Function_2_10::Block(v));
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(431)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					if ((_this->_immutable)){
						HX_STACK_LINE(431)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(431)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(431)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(431)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(431)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(431)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(431)
				v->zpp_inner = null();
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					o->zpp_pool = null();
					HX_STACK_LINE(431)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(431)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						if (((o->outer != null()))){
							HX_STACK_LINE(431)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(431)
							o->outer = null();
						}
						HX_STACK_LINE(431)
						o->_isimmutable = null();
						HX_STACK_LINE(431)
						o->_validate = null();
						HX_STACK_LINE(431)
						o->_invalidate = null();
					}
					HX_STACK_LINE(431)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				if (((bool((w != null())) && bool(w->zpp_disp)))){
					HX_STACK_LINE(432)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 _this = w->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(432)
					if ((_this->_immutable)){
						HX_STACK_LINE(432)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(432)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(432)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(432)
				if ((w->zpp_inner->_inuse)){
					HX_STACK_LINE(432)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 inner = w->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(432)
				w->zpp_inner->outer = null();
				HX_STACK_LINE(432)
				w->zpp_inner = null();
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::nape::geom::Vec2 o = w;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					o->zpp_pool = null();
					HX_STACK_LINE(432)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(432)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(432)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						if (((o->outer != null()))){
							HX_STACK_LINE(432)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(432)
							o->outer = null();
						}
						HX_STACK_LINE(432)
						o->_isimmutable = null();
						HX_STACK_LINE(432)
						o->_validate = null();
						HX_STACK_LINE(432)
						o->_invalidate = null();
					}
					HX_STACK_LINE(432)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
					HX_STACK_LINE(433)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(433)
					if ((_this->_immutable)){
						HX_STACK_LINE(433)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(433)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(433)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(433)
				if ((w2->zpp_inner->_inuse)){
					HX_STACK_LINE(433)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 inner = w2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(433)
				w2->zpp_inner->outer = null();
				HX_STACK_LINE(433)
				w2->zpp_inner = null();
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::nape::geom::Vec2 o = w2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					o->zpp_pool = null();
					HX_STACK_LINE(433)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(433)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(433)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(433)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(433)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						if (((o->outer != null()))){
							HX_STACK_LINE(433)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(433)
							o->outer = null();
						}
						HX_STACK_LINE(433)
						o->_isimmutable = null();
						HX_STACK_LINE(433)
						o->_validate = null();
						HX_STACK_LINE(433)
						o->_invalidate = null();
					}
					HX_STACK_LINE(433)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(434)
			{
				HX_STACK_LINE(434)
				if (((bool((h != null())) && bool(h->zpp_disp)))){
					HX_STACK_LINE(434)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 _this = h->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(434)
					if ((_this->_immutable)){
						HX_STACK_LINE(434)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(434)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(434)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(434)
				if ((h->zpp_inner->_inuse)){
					HX_STACK_LINE(434)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(434)
				::zpp_nape::geom::ZPP_Vec2 inner = h->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(434)
				h->zpp_inner->outer = null();
				HX_STACK_LINE(434)
				h->zpp_inner = null();
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::nape::geom::Vec2 o = h;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					o->zpp_pool = null();
					HX_STACK_LINE(434)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(434)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(434)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(434)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(434)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						if (((o->outer != null()))){
							HX_STACK_LINE(434)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(434)
							o->outer = null();
						}
						HX_STACK_LINE(434)
						o->_isimmutable = null();
						HX_STACK_LINE(434)
						o->_validate = null();
						HX_STACK_LINE(434)
						o->_invalidate = null();
					}
					HX_STACK_LINE(434)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
					HX_STACK_LINE(435)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(435)
					if ((_this->_immutable)){
						HX_STACK_LINE(435)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(435)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(435)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(435)
				if ((h2->zpp_inner->_inuse)){
					HX_STACK_LINE(435)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(435)
				::zpp_nape::geom::ZPP_Vec2 inner = h2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(435)
				h2->zpp_inner->outer = null();
				HX_STACK_LINE(435)
				h2->zpp_inner = null();
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::nape::geom::Vec2 o = h2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					o->zpp_pool = null();
					HX_STACK_LINE(435)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(435)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(435)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(435)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(435)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(435)
						if (((o->outer != null()))){
							HX_STACK_LINE(435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(435)
							o->outer = null();
						}
						HX_STACK_LINE(435)
						o->_isimmutable = null();
						HX_STACK_LINE(435)
						o->_validate = null();
						HX_STACK_LINE(435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(435)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledTriangle",0xb9aefb64,"nape.util.ShapeDebug.drawFilledTriangle","nape/util/ShapeDebug.hx",441,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p0,"p0")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(443)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(443)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(447)
		if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
			HX_STACK_LINE(447)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(452)
		if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
			HX_STACK_LINE(452)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(457)
		if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
			HX_STACK_LINE(457)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(461)
		if (((bool((bool((p0 == null())) || bool((p1 == null())))) || bool((p2 == null()))))){
			HX_STACK_LINE(461)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawFilledTriangle can't use null points"));
		}
		HX_STACK_LINE(463)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(464)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(465)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(466)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(467)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
					HX_STACK_LINE(467)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(467)
						_this->_validate();
					}
				}
				HX_STACK_LINE(467)
				_g = p0->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &p0){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",467,0xfa2f3866)
					{
						HX_STACK_LINE(467)
						if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
							HX_STACK_LINE(467)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(467)
						{
							HX_STACK_LINE(467)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(467)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(467)
								_this->_validate();
							}
						}
						HX_STACK_LINE(467)
						return p0->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(467)
			g->moveTo(_g,_Function_2_1::Block(p0));
			HX_STACK_LINE(468)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
					HX_STACK_LINE(468)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(468)
						_this->_validate();
					}
				}
				HX_STACK_LINE(468)
				_g1 = p1->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &p1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",468,0xfa2f3866)
					{
						HX_STACK_LINE(468)
						if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
							HX_STACK_LINE(468)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(468)
						{
							HX_STACK_LINE(468)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(468)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(468)
								_this->_validate();
							}
						}
						HX_STACK_LINE(468)
						return p1->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(468)
			g->lineTo(_g1,_Function_2_2::Block(p1));
			HX_STACK_LINE(469)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
					HX_STACK_LINE(469)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(469)
						_this->_validate();
					}
				}
				HX_STACK_LINE(469)
				_g2 = p2->zpp_inner->x;
			}
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &p2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",469,0xfa2f3866)
					{
						HX_STACK_LINE(469)
						if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
							HX_STACK_LINE(469)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(469)
						{
							HX_STACK_LINE(469)
							::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(469)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(469)
								_this->_validate();
							}
						}
						HX_STACK_LINE(469)
						return p2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(469)
			g->lineTo(_g2,_Function_2_3::Block(p2));
			HX_STACK_LINE(470)
			if ((p0->zpp_inner->weak)){
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
						HX_STACK_LINE(474)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(474)
						if ((_this->_immutable)){
							HX_STACK_LINE(474)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(474)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(474)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(474)
					if ((p0->zpp_inner->_inuse)){
						HX_STACK_LINE(474)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(474)
					::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(474)
					p0->zpp_inner->outer = null();
					HX_STACK_LINE(474)
					p0->zpp_inner = null();
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						o->zpp_pool = null();
						HX_STACK_LINE(474)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(474)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(474)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(474)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(474)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							if (((o->outer != null()))){
								HX_STACK_LINE(474)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(474)
								o->outer = null();
							}
							HX_STACK_LINE(474)
							o->_isimmutable = null();
							HX_STACK_LINE(474)
							o->_validate = null();
							HX_STACK_LINE(474)
							o->_invalidate = null();
						}
						HX_STACK_LINE(474)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(475)
				true;
			}
			else{
				HX_STACK_LINE(478)
				false;
			}
			HX_STACK_LINE(481)
			if ((p1->zpp_inner->weak)){
				HX_STACK_LINE(485)
				{
					HX_STACK_LINE(485)
					if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
						HX_STACK_LINE(485)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(485)
						if ((_this->_immutable)){
							HX_STACK_LINE(485)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(485)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(485)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(485)
					if ((p1->zpp_inner->_inuse)){
						HX_STACK_LINE(485)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(485)
					p1->zpp_inner->outer = null();
					HX_STACK_LINE(485)
					p1->zpp_inner = null();
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						o->zpp_pool = null();
						HX_STACK_LINE(485)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(485)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(485)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(485)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(485)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							if (((o->outer != null()))){
								HX_STACK_LINE(485)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(485)
								o->outer = null();
							}
							HX_STACK_LINE(485)
							o->_isimmutable = null();
							HX_STACK_LINE(485)
							o->_validate = null();
							HX_STACK_LINE(485)
							o->_invalidate = null();
						}
						HX_STACK_LINE(485)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(486)
				true;
			}
			else{
				HX_STACK_LINE(489)
				false;
			}
			HX_STACK_LINE(492)
			if ((p2->zpp_inner->weak)){
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(496)
					if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
						HX_STACK_LINE(496)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(496)
						if ((_this->_immutable)){
							HX_STACK_LINE(496)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(496)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(496)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(496)
					if ((p2->zpp_inner->_inuse)){
						HX_STACK_LINE(496)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(496)
					::zpp_nape::geom::ZPP_Vec2 inner = p2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(496)
					p2->zpp_inner->outer = null();
					HX_STACK_LINE(496)
					p2->zpp_inner = null();
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::nape::geom::Vec2 o = p2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						o->zpp_pool = null();
						HX_STACK_LINE(496)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(496)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(496)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(496)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(496)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							if (((o->outer != null()))){
								HX_STACK_LINE(496)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(496)
								o->outer = null();
							}
							HX_STACK_LINE(496)
							o->_isimmutable = null();
							HX_STACK_LINE(496)
							o->_validate = null();
							HX_STACK_LINE(496)
							o->_invalidate = null();
						}
						HX_STACK_LINE(496)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(497)
				true;
			}
			else{
				HX_STACK_LINE(500)
				false;
			}
		}
		else{
			HX_STACK_LINE(505)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p0,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(506)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(506)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(506)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(506)
						_this->_validate();
					}
				}
				HX_STACK_LINE(506)
				_g3 = v->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",506,0xfa2f3866)
					{
						HX_STACK_LINE(506)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(506)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(506)
						{
							HX_STACK_LINE(506)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(506)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(506)
								_this->_validate();
							}
						}
						HX_STACK_LINE(506)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(506)
			g->moveTo(_g3,_Function_2_1::Block(v));
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(507)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(507)
					if ((_this->_immutable)){
						HX_STACK_LINE(507)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(507)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(507)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(507)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(507)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(507)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(507)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(507)
				v->zpp_inner = null();
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					o->zpp_pool = null();
					HX_STACK_LINE(507)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(507)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(507)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						if (((o->outer != null()))){
							HX_STACK_LINE(507)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(507)
							o->outer = null();
						}
						HX_STACK_LINE(507)
						o->_isimmutable = null();
						HX_STACK_LINE(507)
						o->_validate = null();
						HX_STACK_LINE(507)
						o->_invalidate = null();
					}
					HX_STACK_LINE(507)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(508)
			v = this->zpp_inner->xform->outer->transform(p1,null(),null());
			HX_STACK_LINE(509)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(509)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(509)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(509)
						_this->_validate();
					}
				}
				HX_STACK_LINE(509)
				_g4 = v->zpp_inner->x;
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",509,0xfa2f3866)
					{
						HX_STACK_LINE(509)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(509)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(509)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(509)
								_this->_validate();
							}
						}
						HX_STACK_LINE(509)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(509)
			g->lineTo(_g4,_Function_2_2::Block(v));
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(510)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(510)
					if ((_this->_immutable)){
						HX_STACK_LINE(510)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(510)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(510)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(510)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(510)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(510)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(510)
				v->zpp_inner = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					o->zpp_pool = null();
					HX_STACK_LINE(510)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(510)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(510)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						if (((o->outer != null()))){
							HX_STACK_LINE(510)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(510)
							o->outer = null();
						}
						HX_STACK_LINE(510)
						o->_isimmutable = null();
						HX_STACK_LINE(510)
						o->_validate = null();
						HX_STACK_LINE(510)
						o->_invalidate = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(511)
			v = this->zpp_inner->xform->outer->transform(p2,null(),null());
			HX_STACK_LINE(512)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(512)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(512)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(512)
						_this->_validate();
					}
				}
				HX_STACK_LINE(512)
				_g5 = v->zpp_inner->x;
			}
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",512,0xfa2f3866)
					{
						HX_STACK_LINE(512)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(512)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(512)
								_this->_validate();
							}
						}
						HX_STACK_LINE(512)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(512)
			g->lineTo(_g5,_Function_2_3::Block(v));
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if ((_this->_immutable)){
						HX_STACK_LINE(513)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(513)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(513)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(513)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(513)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(513)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(513)
				v->zpp_inner = null();
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					o->zpp_pool = null();
					HX_STACK_LINE(513)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(513)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(513)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(513)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(513)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						if (((o->outer != null()))){
							HX_STACK_LINE(513)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(513)
							o->outer = null();
						}
						HX_STACK_LINE(513)
						o->_isimmutable = null();
						HX_STACK_LINE(513)
						o->_validate = null();
						HX_STACK_LINE(513)
						o->_invalidate = null();
					}
					HX_STACK_LINE(513)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(515)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledCircle",0xa41f0fac,"nape.util.ShapeDebug.drawFilledCircle","nape/util/ShapeDebug.hx",520,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(522)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(522)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(526)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(526)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(530)
		if (((position == null()))){
			HX_STACK_LINE(530)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawFilledCircle::position cannot be null"));
		}
		HX_STACK_LINE(531)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(531)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawFilledCircle::radius must be >=0"));
		}
		HX_STACK_LINE(533)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(534)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(535)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(536)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(537)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(537)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(537)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(537)
						_this->_validate();
					}
				}
				HX_STACK_LINE(537)
				_g = position->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",537,0xfa2f3866)
					{
						HX_STACK_LINE(537)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(537)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(537)
						{
							HX_STACK_LINE(537)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(537)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(537)
								_this->_validate();
							}
						}
						HX_STACK_LINE(537)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(537)
			g->drawCircle(_g,_Function_2_1::Block(position),radius);
			HX_STACK_LINE(538)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(542)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(542)
						if ((_this->_immutable)){
							HX_STACK_LINE(542)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(542)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(542)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(542)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(542)
						HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(542)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(542)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(542)
					position->zpp_inner = null();
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						o->zpp_pool = null();
						HX_STACK_LINE(542)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(542)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(542)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(542)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(542)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						{
							HX_STACK_LINE(542)
							if (((o->outer != null()))){
								HX_STACK_LINE(542)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(542)
								o->outer = null();
							}
							HX_STACK_LINE(542)
							o->_isimmutable = null();
							HX_STACK_LINE(542)
							o->_validate = null();
							HX_STACK_LINE(542)
							o->_invalidate = null();
						}
						HX_STACK_LINE(542)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(543)
				true;
			}
			else{
				HX_STACK_LINE(546)
				false;
			}
		}
		else{
			HX_STACK_LINE(551)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(552)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(552)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(552)
						_this->_validate();
					}
				}
				HX_STACK_LINE(552)
				_g1 = v->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",552,0xfa2f3866)
					{
						HX_STACK_LINE(552)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(552)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(552)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(552)
								_this->_validate();
							}
						}
						HX_STACK_LINE(552)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(552)
			g->drawCircle(_g1,_Function_2_1::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(553)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(553)
					if ((_this->_immutable)){
						HX_STACK_LINE(553)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(553)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(553)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(553)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(553)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(553)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(553)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(553)
				v->zpp_inner = null();
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					o->zpp_pool = null();
					HX_STACK_LINE(553)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(553)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(553)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(553)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(553)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						if (((o->outer != null()))){
							HX_STACK_LINE(553)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(553)
							o->outer = null();
						}
						HX_STACK_LINE(553)
						o->_isimmutable = null();
						HX_STACK_LINE(553)
						o->_validate = null();
						HX_STACK_LINE(553)
						o->_invalidate = null();
					}
					HX_STACK_LINE(553)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(555)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawPolygon",0xf89f6a60,"nape.util.ShapeDebug.drawPolygon","nape/util/ShapeDebug.hx",560,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(562)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(562)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(565)
		if (((polygon == null()))){
			HX_STACK_LINE(565)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot draw null polygon"));
		}
		HX_STACK_LINE(567)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(568)
		g->lineStyle(this->thickness,(int(colour) & int((int)16777215)),1.0,null(),null(),null(),null(),null());
		HX_STACK_LINE(569)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(570)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(571)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(573)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(574)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(575)
				{
					HX_STACK_LINE(575)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(575)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(575)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(575)
						++(_g);
						HX_STACK_LINE(577)
						if (((vite == null()))){
							HX_STACK_LINE(577)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(580)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(580)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(582)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(585)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(585)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(588)
						{
							HX_STACK_LINE(589)
							if ((fsttime)){
								HX_STACK_LINE(590)
								{
									HX_STACK_LINE(590)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(590)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(590)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(590)
									{
										HX_STACK_LINE(590)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(590)
										{
											HX_STACK_LINE(590)
											if ((p->zpp_disp)){
												HX_STACK_LINE(590)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											x = p->zpp_inner->x;
										}
										HX_STACK_LINE(590)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(590)
										{
											HX_STACK_LINE(590)
											if ((p->zpp_disp)){
												HX_STACK_LINE(590)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											y = p->zpp_inner->y;
										}
										HX_STACK_LINE(590)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(590)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										HX_STACK_LINE(590)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(590)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(590)
											ret = ::nape::geom::Vec2_obj::__new(null(),null());
										}
										else{
											HX_STACK_LINE(590)
											ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(590)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(590)
											ret->zpp_pool = null();
											HX_STACK_LINE(590)
											ret->zpp_disp = false;
											HX_STACK_LINE(590)
											if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
												HX_STACK_LINE(590)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
										HX_STACK_LINE(590)
										if (((ret->zpp_inner == null()))){
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(590)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(590)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(590)
														ret1->next = null();
													}
													HX_STACK_LINE(590)
													ret1->weak = false;
												}
												HX_STACK_LINE(590)
												ret1->_immutable = immutable;
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													ret1->x = x;
													HX_STACK_LINE(590)
													ret1->y = y;
													HX_STACK_LINE(590)
													{
													}
												}
												HX_STACK_LINE(590)
												ret->zpp_inner = ret1;
											}
											HX_STACK_LINE(590)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(590)
											if (((bool((ret != null())) && bool(ret->zpp_disp)))){
												HX_STACK_LINE(590)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if ((_this->_immutable)){
													HX_STACK_LINE(590)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(590)
												if (((_this->_isimmutable != null()))){
													HX_STACK_LINE(590)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(590)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(590)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											struct _Function_10_1{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",590,0xfa2f3866)
													{
														HX_STACK_LINE(590)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(590)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
														}
														HX_STACK_LINE(590)
														{
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(590)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(590)
																_this->_validate();
															}
														}
														HX_STACK_LINE(590)
														return ret->zpp_inner->x;
													}
													return null();
												}
											};
											struct _Function_10_2{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",590,0xfa2f3866)
													{
														HX_STACK_LINE(590)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(590)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
														}
														HX_STACK_LINE(590)
														{
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(590)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(590)
																_this->_validate();
															}
														}
														HX_STACK_LINE(590)
														return ret->zpp_inner->y;
													}
													return null();
												}
											};
											HX_STACK_LINE(590)
											if ((!(((  (((_Function_10_1::Block(ret) == x))) ? bool((_Function_10_2::Block(ret) == y)) : bool(false) ))))){
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(590)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(590)
													{
													}
												}
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(590)
													if (((_this->_invalidate != null()))){
														HX_STACK_LINE(590)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(590)
											ret;
										}
										HX_STACK_LINE(590)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(590)
										fst = ret;
									}
								}
								HX_STACK_LINE(591)
								Float _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(591)
								{
									HX_STACK_LINE(591)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(591)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(591)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(591)
											_this->_validate();
										}
									}
									HX_STACK_LINE(591)
									_g1 = p->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",591,0xfa2f3866)
										{
											HX_STACK_LINE(591)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(591)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(591)
											{
												HX_STACK_LINE(591)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(591)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(591)
													_this->_validate();
												}
											}
											HX_STACK_LINE(591)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(591)
								g->moveTo(_g1,_Function_7_1::Block(p));
							}
							else{
								HX_STACK_LINE(593)
								Float _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(593)
								{
									HX_STACK_LINE(593)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(593)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(593)
									{
										HX_STACK_LINE(593)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(593)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(593)
											_this->_validate();
										}
									}
									HX_STACK_LINE(593)
									_g1 = p->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",593,0xfa2f3866)
										{
											HX_STACK_LINE(593)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(593)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(593)
											{
												HX_STACK_LINE(593)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(593)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(593)
													_this->_validate();
												}
											}
											HX_STACK_LINE(593)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(593)
								g->lineTo(_g1,_Function_7_1::Block(p));
							}
							HX_STACK_LINE(594)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(621)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(622)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(623)
					{
						HX_STACK_LINE(623)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",623,0xfa2f3866)
								{
									HX_STACK_LINE(623)
									_g->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(623)
									int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(623)
									_g->zpp_critical = true;
									struct _Function_6_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",623,0xfa2f3866)
											{
												HX_STACK_LINE(623)
												{
													HX_STACK_LINE(623)
													_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(623)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
													HX_STACK_LINE(623)
													_g->zpp_inner = null();
												}
												HX_STACK_LINE(623)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(623)
									return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_6_1::Block(_g)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(623)
						while((_Function_5_1::Block(_g))){
							HX_STACK_LINE(623)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(623)
							{
								HX_STACK_LINE(623)
								_g->zpp_critical = false;
								HX_STACK_LINE(623)
								p = _g->zpp_inner->at((_g->zpp_i)++);
							}
							HX_STACK_LINE(625)
							if (((p == null()))){
								HX_STACK_LINE(625)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(629)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(629)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(632)
							{
								HX_STACK_LINE(633)
								if ((fsttime)){
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(634)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(634)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(634)
										{
											HX_STACK_LINE(634)
											Float x;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(634)
											{
												HX_STACK_LINE(634)
												if ((p->zpp_disp)){
													HX_STACK_LINE(634)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												x = p->zpp_inner->x;
											}
											HX_STACK_LINE(634)
											Float y;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(634)
											{
												HX_STACK_LINE(634)
												if ((p->zpp_disp)){
													HX_STACK_LINE(634)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												y = p->zpp_inner->y;
											}
											HX_STACK_LINE(634)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(634)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(634)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(634)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(634)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(634)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(634)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(634)
												ret->zpp_pool = null();
												HX_STACK_LINE(634)
												ret->zpp_disp = false;
												HX_STACK_LINE(634)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(634)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(634)
											if (((ret->zpp_inner == null()))){
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(634)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(634)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(634)
															ret1->next = null();
														}
														HX_STACK_LINE(634)
														ret1->weak = false;
													}
													HX_STACK_LINE(634)
													ret1->_immutable = immutable;
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														ret1->x = x;
														HX_STACK_LINE(634)
														ret1->y = y;
														HX_STACK_LINE(634)
														{
														}
													}
													HX_STACK_LINE(634)
													ret->zpp_inner = ret1;
												}
												HX_STACK_LINE(634)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(634)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(634)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if ((_this->_immutable)){
														HX_STACK_LINE(634)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(634)
													if (((_this->_isimmutable != null()))){
														HX_STACK_LINE(634)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(634)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(634)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_11_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",634,0xfa2f3866)
														{
															HX_STACK_LINE(634)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(634)
																HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
															}
															HX_STACK_LINE(634)
															{
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(634)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(634)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(634)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_11_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",634,0xfa2f3866)
														{
															HX_STACK_LINE(634)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(634)
																HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
															}
															HX_STACK_LINE(634)
															{
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(634)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(634)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(634)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(634)
												if ((!(((  (((_Function_11_1::Block(ret) == x))) ? bool((_Function_11_2::Block(ret) == y)) : bool(false) ))))){
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(634)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(634)
														{
														}
													}
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(634)
														if (((_this->_invalidate != null()))){
															HX_STACK_LINE(634)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(634)
												ret;
											}
											HX_STACK_LINE(634)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(634)
											fst = ret;
										}
									}
									HX_STACK_LINE(635)
									Float _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(635)
									{
										HX_STACK_LINE(635)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(635)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(635)
										{
											HX_STACK_LINE(635)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(635)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(635)
												_this->_validate();
											}
										}
										HX_STACK_LINE(635)
										_g2 = p->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",635,0xfa2f3866)
											{
												HX_STACK_LINE(635)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(635)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(635)
												{
													HX_STACK_LINE(635)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(635)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(635)
														_this->_validate();
													}
												}
												HX_STACK_LINE(635)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(635)
									g->moveTo(_g2,_Function_8_1::Block(p));
								}
								else{
									HX_STACK_LINE(637)
									Float _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(637)
									{
										HX_STACK_LINE(637)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(637)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(637)
										{
											HX_STACK_LINE(637)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(637)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(637)
												_this->_validate();
											}
										}
										HX_STACK_LINE(637)
										_g3 = p->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",637,0xfa2f3866)
											{
												HX_STACK_LINE(637)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(637)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(637)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(637)
														_this->_validate();
													}
												}
												HX_STACK_LINE(637)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(637)
									g->lineTo(_g3,_Function_8_1::Block(p));
								}
								HX_STACK_LINE(638)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(642)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(643)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(646)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(646)
							HX_STACK_DO_THROW(HX_CSTRING("Error: GeomPoly has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(649)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(650)
						if (((verts != null()))){
							HX_STACK_LINE(651)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(652)
							do{
								HX_STACK_LINE(653)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(653)
								{
									HX_STACK_LINE(653)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(653)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(653)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(653)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(653)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(653)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(653)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(653)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(653)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(653)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(653)
										ret->zpp_pool = null();
										HX_STACK_LINE(653)
										ret->zpp_disp = false;
										HX_STACK_LINE(653)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(653)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(653)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(653)
										{
											HX_STACK_LINE(653)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(653)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(653)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
												}
												else{
													HX_STACK_LINE(653)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(653)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(653)
													ret1->next = null();
												}
												HX_STACK_LINE(653)
												ret1->weak = false;
											}
											HX_STACK_LINE(653)
											ret1->_immutable = immutable;
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												ret1->x = x;
												HX_STACK_LINE(653)
												ret1->y = y;
												HX_STACK_LINE(653)
												{
												}
											}
											HX_STACK_LINE(653)
											ret->zpp_inner = ret1;
										}
										HX_STACK_LINE(653)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(653)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(653)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(653)
										{
											HX_STACK_LINE(653)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(653)
											if ((_this->_immutable)){
												HX_STACK_LINE(653)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(653)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(653)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(653)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(653)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",653,0xfa2f3866)
												{
													HX_STACK_LINE(653)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(653)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(653)
													{
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(653)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(653)
															_this->_validate();
														}
													}
													HX_STACK_LINE(653)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",653,0xfa2f3866)
												{
													HX_STACK_LINE(653)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(653)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(653)
													{
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(653)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(653)
															_this->_validate();
														}
													}
													HX_STACK_LINE(653)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(653)
										if ((!(((  (((_Function_9_1::Block(ret) == x))) ? bool((_Function_9_2::Block(ret) == y)) : bool(false) ))))){
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(653)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(653)
												{
												}
											}
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(653)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(653)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(653)
										ret;
									}
									HX_STACK_LINE(653)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(653)
									p = ret;
								}
								HX_STACK_LINE(654)
								vite = vite->next;
								HX_STACK_LINE(655)
								{
									HX_STACK_LINE(656)
									if ((fsttime)){
										HX_STACK_LINE(657)
										{
											HX_STACK_LINE(657)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(657)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(657)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(657)
											{
												HX_STACK_LINE(657)
												Float x;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(657)
												{
													HX_STACK_LINE(657)
													if ((p->zpp_disp)){
														HX_STACK_LINE(657)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													x = p->zpp_inner->x;
												}
												HX_STACK_LINE(657)
												Float y;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(657)
												{
													HX_STACK_LINE(657)
													if ((p->zpp_disp)){
														HX_STACK_LINE(657)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													y = p->zpp_inner->y;
												}
												HX_STACK_LINE(657)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(657)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												HX_STACK_LINE(657)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(657)
												if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
													HX_STACK_LINE(657)
													ret = ::nape::geom::Vec2_obj::__new(null(),null());
												}
												else{
													HX_STACK_LINE(657)
													ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(657)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(657)
													ret->zpp_pool = null();
													HX_STACK_LINE(657)
													ret->zpp_disp = false;
													HX_STACK_LINE(657)
													if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
														HX_STACK_LINE(657)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
													}
												}
												HX_STACK_LINE(657)
												if (((ret->zpp_inner == null()))){
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																HX_STACK_LINE(657)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
															}
															else{
																HX_STACK_LINE(657)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(657)
																ret1->next = null();
															}
															HX_STACK_LINE(657)
															ret1->weak = false;
														}
														HX_STACK_LINE(657)
														ret1->_immutable = immutable;
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															ret1->x = x;
															HX_STACK_LINE(657)
															ret1->y = y;
															HX_STACK_LINE(657)
															{
															}
														}
														HX_STACK_LINE(657)
														ret->zpp_inner = ret1;
													}
													HX_STACK_LINE(657)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(657)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(657)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if ((_this->_immutable)){
															HX_STACK_LINE(657)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
														}
														HX_STACK_LINE(657)
														if (((_this->_isimmutable != null()))){
															HX_STACK_LINE(657)
															_this->_isimmutable();
														}
													}
													HX_STACK_LINE(657)
													if (((bool((x != x)) || bool((y != y))))){
														HX_STACK_LINE(657)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
													}
													struct _Function_12_1{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",657,0xfa2f3866)
															{
																HX_STACK_LINE(657)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(657)
																	HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
																}
																HX_STACK_LINE(657)
																{
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(657)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(657)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(657)
																return ret->zpp_inner->x;
															}
															return null();
														}
													};
													struct _Function_12_2{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",657,0xfa2f3866)
															{
																HX_STACK_LINE(657)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(657)
																	HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
																}
																HX_STACK_LINE(657)
																{
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(657)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(657)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(657)
																return ret->zpp_inner->y;
															}
															return null();
														}
													};
													HX_STACK_LINE(657)
													if ((!(((  (((_Function_12_1::Block(ret) == x))) ? bool((_Function_12_2::Block(ret) == y)) : bool(false) ))))){
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(657)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(657)
															{
															}
														}
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(657)
															if (((_this->_invalidate != null()))){
																HX_STACK_LINE(657)
																_this->_invalidate(_this);
															}
														}
													}
													HX_STACK_LINE(657)
													ret;
												}
												HX_STACK_LINE(657)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(657)
												fst = ret;
											}
										}
										HX_STACK_LINE(658)
										Float _g4;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(658)
										{
											HX_STACK_LINE(658)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(658)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(658)
											{
												HX_STACK_LINE(658)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(658)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(658)
													_this->_validate();
												}
											}
											HX_STACK_LINE(658)
											_g4 = p->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",658,0xfa2f3866)
												{
													HX_STACK_LINE(658)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(658)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(658)
													{
														HX_STACK_LINE(658)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(658)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(658)
															_this->_validate();
														}
													}
													HX_STACK_LINE(658)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(658)
										g->moveTo(_g4,_Function_9_1::Block(p));
									}
									else{
										HX_STACK_LINE(660)
										Float _g5;		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(660)
										{
											HX_STACK_LINE(660)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(660)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(660)
											{
												HX_STACK_LINE(660)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(660)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(660)
													_this->_validate();
												}
											}
											HX_STACK_LINE(660)
											_g5 = p->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",660,0xfa2f3866)
												{
													HX_STACK_LINE(660)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(660)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(660)
													{
														HX_STACK_LINE(660)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(660)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(660)
															_this->_validate();
														}
													}
													HX_STACK_LINE(660)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(660)
										g->lineTo(_g5,_Function_9_1::Block(p));
									}
									HX_STACK_LINE(661)
									fsttime = false;
								}
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(663)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(663)
										if ((_this->_immutable)){
											HX_STACK_LINE(663)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(663)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(663)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(663)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(663)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(663)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(663)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(663)
									p->zpp_inner = null();
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										o->zpp_pool = null();
										HX_STACK_LINE(663)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(663)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(663)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(663)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(663)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											if (((o->outer != null()))){
												HX_STACK_LINE(663)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(663)
												o->outer = null();
											}
											HX_STACK_LINE(663)
											o->_isimmutable = null();
											HX_STACK_LINE(663)
											o->_validate = null();
											HX_STACK_LINE(663)
											o->_invalidate = null();
										}
										HX_STACK_LINE(663)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(670)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			HX_STACK_LINE(674)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(674)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(674)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(674)
						_this->_validate();
					}
				}
				HX_STACK_LINE(674)
				_g6 = fst->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",674,0xfa2f3866)
					{
						HX_STACK_LINE(674)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(674)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(674)
						{
							HX_STACK_LINE(674)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(674)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(674)
								_this->_validate();
							}
						}
						HX_STACK_LINE(674)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(674)
			g->lineTo(_g6,_Function_2_1::Block(fst));
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(675)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(675)
					if ((_this->_immutable)){
						HX_STACK_LINE(675)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(675)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(675)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(675)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(675)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(675)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(675)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(675)
				fst->zpp_inner = null();
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					o->zpp_pool = null();
					HX_STACK_LINE(675)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(675)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(675)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(675)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(675)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						if (((o->outer != null()))){
							HX_STACK_LINE(675)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(675)
							o->outer = null();
						}
						HX_STACK_LINE(675)
						o->_isimmutable = null();
						HX_STACK_LINE(675)
						o->_validate = null();
						HX_STACK_LINE(675)
						o->_invalidate = null();
					}
					HX_STACK_LINE(675)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(679)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(680)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(681)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(681)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(681)
						++(_g);
						HX_STACK_LINE(683)
						if (((vite == null()))){
							HX_STACK_LINE(683)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(686)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(686)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(688)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(691)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(691)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(694)
						{
							HX_STACK_LINE(695)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(696)
							if ((fsttime)){
								HX_STACK_LINE(697)
								fst = v;
								HX_STACK_LINE(698)
								Float _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(698)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(698)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(698)
											_this->_validate();
										}
									}
									HX_STACK_LINE(698)
									_g7 = v->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",698,0xfa2f3866)
										{
											HX_STACK_LINE(698)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(698)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(698)
											{
												HX_STACK_LINE(698)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(698)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(698)
													_this->_validate();
												}
											}
											HX_STACK_LINE(698)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(698)
								g->moveTo(_g7,_Function_7_1::Block(v));
							}
							else{
								HX_STACK_LINE(700)
								Float _g8;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(700)
								{
									HX_STACK_LINE(700)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(700)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(700)
									{
										HX_STACK_LINE(700)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(700)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(700)
											_this->_validate();
										}
									}
									HX_STACK_LINE(700)
									_g8 = v->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",700,0xfa2f3866)
										{
											HX_STACK_LINE(700)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(700)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(700)
											{
												HX_STACK_LINE(700)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(700)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(700)
													_this->_validate();
												}
											}
											HX_STACK_LINE(700)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(700)
								g->lineTo(_g8,_Function_7_1::Block(v));
							}
							HX_STACK_LINE(701)
							if ((!(fsttime))){
								HX_STACK_LINE(701)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(701)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(701)
									if ((_this->_immutable)){
										HX_STACK_LINE(701)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(701)
									if (((_this->_isimmutable != null()))){
										HX_STACK_LINE(701)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(701)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(701)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(701)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(701)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(701)
								v->zpp_inner = null();
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									o->zpp_pool = null();
									HX_STACK_LINE(701)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(701)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(701)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(701)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(701)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									{
										HX_STACK_LINE(701)
										if (((o->outer != null()))){
											HX_STACK_LINE(701)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(701)
											o->outer = null();
										}
										HX_STACK_LINE(701)
										o->_isimmutable = null();
										HX_STACK_LINE(701)
										o->_validate = null();
										HX_STACK_LINE(701)
										o->_invalidate = null();
									}
									HX_STACK_LINE(701)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(702)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(731)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(732)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(733)
					{
						HX_STACK_LINE(733)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",733,0xfa2f3866)
								{
									HX_STACK_LINE(733)
									_g->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(733)
									int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(733)
									_g->zpp_critical = true;
									struct _Function_6_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",733,0xfa2f3866)
											{
												HX_STACK_LINE(733)
												{
													HX_STACK_LINE(733)
													_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(733)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
													HX_STACK_LINE(733)
													_g->zpp_inner = null();
												}
												HX_STACK_LINE(733)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(733)
									return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_6_1::Block(_g)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(733)
						while((_Function_5_1::Block(_g))){
							HX_STACK_LINE(733)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(733)
								_g->zpp_critical = false;
								HX_STACK_LINE(733)
								p = _g->zpp_inner->at((_g->zpp_i)++);
							}
							HX_STACK_LINE(735)
							if (((p == null()))){
								HX_STACK_LINE(735)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(739)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(739)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(743)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(744)
								if ((fsttime)){
									HX_STACK_LINE(745)
									fst = v;
									HX_STACK_LINE(746)
									Float _g9;		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(746)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(746)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(746)
												_this->_validate();
											}
										}
										HX_STACK_LINE(746)
										_g9 = v->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",746,0xfa2f3866)
											{
												HX_STACK_LINE(746)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(746)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(746)
												{
													HX_STACK_LINE(746)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(746)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(746)
														_this->_validate();
													}
												}
												HX_STACK_LINE(746)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(746)
									g->moveTo(_g9,_Function_8_1::Block(v));
								}
								else{
									HX_STACK_LINE(748)
									Float _g10;		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(748)
									{
										HX_STACK_LINE(748)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(748)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(748)
										{
											HX_STACK_LINE(748)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(748)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(748)
												_this->_validate();
											}
										}
										HX_STACK_LINE(748)
										_g10 = v->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",748,0xfa2f3866)
											{
												HX_STACK_LINE(748)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(748)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(748)
												{
													HX_STACK_LINE(748)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(748)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(748)
														_this->_validate();
													}
												}
												HX_STACK_LINE(748)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(748)
									g->lineTo(_g10,_Function_8_1::Block(v));
								}
								HX_STACK_LINE(749)
								if ((!(fsttime))){
									HX_STACK_LINE(749)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(749)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(749)
										if ((_this->_immutable)){
											HX_STACK_LINE(749)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(749)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(749)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(749)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(749)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(749)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(749)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(749)
									v->zpp_inner = null();
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										o->zpp_pool = null();
										HX_STACK_LINE(749)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(749)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(749)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(749)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(749)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										{
											HX_STACK_LINE(749)
											if (((o->outer != null()))){
												HX_STACK_LINE(749)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(749)
												o->outer = null();
											}
											HX_STACK_LINE(749)
											o->_isimmutable = null();
											HX_STACK_LINE(749)
											o->_validate = null();
											HX_STACK_LINE(749)
											o->_invalidate = null();
										}
										HX_STACK_LINE(749)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(750)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(754)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(755)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(758)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(758)
							HX_STACK_DO_THROW(HX_CSTRING("Error: GeomPoly has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(762)
						if (((verts != null()))){
							HX_STACK_LINE(763)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(764)
							do{
								HX_STACK_LINE(765)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(765)
								{
									HX_STACK_LINE(765)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(765)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(765)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(765)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(765)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(765)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(765)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(765)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(765)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(765)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(765)
										ret->zpp_pool = null();
										HX_STACK_LINE(765)
										ret->zpp_disp = false;
										HX_STACK_LINE(765)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(765)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(765)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(765)
										{
											HX_STACK_LINE(765)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(765)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(765)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
												}
												else{
													HX_STACK_LINE(765)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(765)
													ret1->next = null();
												}
												HX_STACK_LINE(765)
												ret1->weak = false;
											}
											HX_STACK_LINE(765)
											ret1->_immutable = immutable;
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												ret1->x = x;
												HX_STACK_LINE(765)
												ret1->y = y;
												HX_STACK_LINE(765)
												{
												}
											}
											HX_STACK_LINE(765)
											ret->zpp_inner = ret1;
										}
										HX_STACK_LINE(765)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(765)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(765)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(765)
										{
											HX_STACK_LINE(765)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(765)
											if ((_this->_immutable)){
												HX_STACK_LINE(765)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(765)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(765)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(765)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(765)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",765,0xfa2f3866)
												{
													HX_STACK_LINE(765)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(765)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(765)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(765)
															_this->_validate();
														}
													}
													HX_STACK_LINE(765)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",765,0xfa2f3866)
												{
													HX_STACK_LINE(765)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(765)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(765)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(765)
															_this->_validate();
														}
													}
													HX_STACK_LINE(765)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(765)
										if ((!(((  (((_Function_9_1::Block(ret) == x))) ? bool((_Function_9_2::Block(ret) == y)) : bool(false) ))))){
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(765)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(765)
												{
												}
											}
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(765)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(765)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(765)
										ret;
									}
									HX_STACK_LINE(765)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(765)
									p = ret;
								}
								HX_STACK_LINE(766)
								vite = vite->next;
								HX_STACK_LINE(767)
								{
									HX_STACK_LINE(768)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(769)
									if ((fsttime)){
										HX_STACK_LINE(770)
										fst = v;
										HX_STACK_LINE(771)
										Float _g11;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(771)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(771)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(771)
													_this->_validate();
												}
											}
											HX_STACK_LINE(771)
											_g11 = v->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",771,0xfa2f3866)
												{
													HX_STACK_LINE(771)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(771)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(771)
													{
														HX_STACK_LINE(771)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(771)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(771)
															_this->_validate();
														}
													}
													HX_STACK_LINE(771)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(771)
										g->moveTo(_g11,_Function_9_1::Block(v));
									}
									else{
										HX_STACK_LINE(773)
										Float _g12;		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(773)
										{
											HX_STACK_LINE(773)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(773)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(773)
											{
												HX_STACK_LINE(773)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(773)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(773)
													_this->_validate();
												}
											}
											HX_STACK_LINE(773)
											_g12 = v->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",773,0xfa2f3866)
												{
													HX_STACK_LINE(773)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(773)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(773)
													{
														HX_STACK_LINE(773)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(773)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(773)
															_this->_validate();
														}
													}
													HX_STACK_LINE(773)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(773)
										g->lineTo(_g12,_Function_9_1::Block(v));
									}
									HX_STACK_LINE(774)
									if ((!(fsttime))){
										HX_STACK_LINE(774)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(774)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(774)
											if ((_this->_immutable)){
												HX_STACK_LINE(774)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(774)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(774)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(774)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(774)
											HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(774)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(774)
										v->zpp_inner = null();
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											o->zpp_pool = null();
											HX_STACK_LINE(774)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(774)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(774)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(774)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(774)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												if (((o->outer != null()))){
													HX_STACK_LINE(774)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(774)
													o->outer = null();
												}
												HX_STACK_LINE(774)
												o->_isimmutable = null();
												HX_STACK_LINE(774)
												o->_validate = null();
												HX_STACK_LINE(774)
												o->_invalidate = null();
											}
											HX_STACK_LINE(774)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(775)
									fsttime = false;
								}
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(777)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										if ((_this->_immutable)){
											HX_STACK_LINE(777)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(777)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(777)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(777)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(777)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(777)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(777)
									p->zpp_inner = null();
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										o->zpp_pool = null();
										HX_STACK_LINE(777)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(777)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(777)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(777)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(777)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										{
											HX_STACK_LINE(777)
											if (((o->outer != null()))){
												HX_STACK_LINE(777)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(777)
												o->outer = null();
											}
											HX_STACK_LINE(777)
											o->_isimmutable = null();
											HX_STACK_LINE(777)
											o->_validate = null();
											HX_STACK_LINE(777)
											o->_invalidate = null();
										}
										HX_STACK_LINE(777)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(784)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			HX_STACK_LINE(788)
			Float _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(788)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(788)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(788)
						_this->_validate();
					}
				}
				HX_STACK_LINE(788)
				_g13 = fst->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",788,0xfa2f3866)
					{
						HX_STACK_LINE(788)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(788)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(788)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(788)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(788)
								_this->_validate();
							}
						}
						HX_STACK_LINE(788)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(788)
			g->lineTo(_g13,_Function_2_1::Block(fst));
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(789)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(789)
					if ((_this->_immutable)){
						HX_STACK_LINE(789)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(789)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(789)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(789)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(789)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				fst->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					o->zpp_pool = null();
					HX_STACK_LINE(789)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(789)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(789)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(789)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
						HX_STACK_LINE(789)
						if (((o->outer != null()))){
							HX_STACK_LINE(789)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(789)
							o->outer = null();
						}
						HX_STACK_LINE(789)
						o->_isimmutable = null();
						HX_STACK_LINE(789)
						o->_validate = null();
						HX_STACK_LINE(789)
						o->_invalidate = null();
					}
					HX_STACK_LINE(789)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(792)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(793)
			Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(794)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(795)
			while(((i < lv->length))){
				HX_STACK_LINE(796)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",800,0xfa2f3866)
						{
							HX_STACK_LINE(801)
							{
								HX_STACK_LINE(801)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(801)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(801)
									if ((_this->_immutable)){
										HX_STACK_LINE(801)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(801)
									if (((_this->_isimmutable != null()))){
										HX_STACK_LINE(801)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(801)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(801)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(801)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(801)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(801)
								cur->zpp_inner = null();
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									o->zpp_pool = null();
									HX_STACK_LINE(801)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(801)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(801)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(801)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(801)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									{
										HX_STACK_LINE(801)
										if (((o->outer != null()))){
											HX_STACK_LINE(801)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(801)
											o->outer = null();
										}
										HX_STACK_LINE(801)
										o->_isimmutable = null();
										HX_STACK_LINE(801)
										o->_validate = null();
										HX_STACK_LINE(801)
										o->_invalidate = null();
									}
									HX_STACK_LINE(801)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(802)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(797)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(808)
					lv->splice(i,(int)1);
					HX_STACK_LINE(809)
					continue;
				}
				HX_STACK_LINE(811)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(839)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(840)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(841)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(841)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(842)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(843)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(844)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(845)
				while(((cur != null()))){
					HX_STACK_LINE(846)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(847)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(850)
						cur = ins->erase(pre);
						HX_STACK_LINE(851)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(855)
							{
								HX_STACK_LINE(855)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(855)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(855)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(855)
									if ((_this1->_immutable)){
										HX_STACK_LINE(855)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(855)
									if (((_this1->_isimmutable != null()))){
										HX_STACK_LINE(855)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(855)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(855)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(855)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(855)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(855)
								_this->zpp_inner = null();
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									o->zpp_pool = null();
									HX_STACK_LINE(855)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(855)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(855)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(855)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(855)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									{
										HX_STACK_LINE(855)
										if (((o->outer != null()))){
											HX_STACK_LINE(855)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(855)
											o->outer = null();
										}
										HX_STACK_LINE(855)
										o->_isimmutable = null();
										HX_STACK_LINE(855)
										o->_validate = null();
										HX_STACK_LINE(855)
										o->_invalidate = null();
									}
									HX_STACK_LINE(855)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(856)
							true;
						}
						else{
							HX_STACK_LINE(859)
							false;
						}
					}
					else{
						HX_STACK_LINE(864)
						pre = cur;
						HX_STACK_LINE(865)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledPolygon",0x13e94d5e,"nape.util.ShapeDebug.drawFilledPolygon","nape/util/ShapeDebug.hx",874,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(876)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(876)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(879)
		if (((polygon == null()))){
			HX_STACK_LINE(879)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot draw null polygon!"));
		}
		HX_STACK_LINE(881)
		::flash::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(882)
		g->beginFill((int(colour) & int((int)16777215)),1.0);
		HX_STACK_LINE(883)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(884)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(885)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(886)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(888)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(889)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(890)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(890)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(890)
						++(_g);
						HX_STACK_LINE(892)
						if (((vite == null()))){
							HX_STACK_LINE(892)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(895)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(895)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(897)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(900)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(900)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(904)
							if ((fsttime)){
								HX_STACK_LINE(905)
								{
									HX_STACK_LINE(905)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(905)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(905)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(905)
									{
										HX_STACK_LINE(905)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(905)
										{
											HX_STACK_LINE(905)
											if ((p->zpp_disp)){
												HX_STACK_LINE(905)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											x = p->zpp_inner->x;
										}
										HX_STACK_LINE(905)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(905)
										{
											HX_STACK_LINE(905)
											if ((p->zpp_disp)){
												HX_STACK_LINE(905)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											y = p->zpp_inner->y;
										}
										HX_STACK_LINE(905)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(905)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										HX_STACK_LINE(905)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(905)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(905)
											ret = ::nape::geom::Vec2_obj::__new(null(),null());
										}
										else{
											HX_STACK_LINE(905)
											ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(905)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(905)
											ret->zpp_pool = null();
											HX_STACK_LINE(905)
											ret->zpp_disp = false;
											HX_STACK_LINE(905)
											if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
												HX_STACK_LINE(905)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
										HX_STACK_LINE(905)
										if (((ret->zpp_inner == null()))){
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(905)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(905)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(905)
														ret1->next = null();
													}
													HX_STACK_LINE(905)
													ret1->weak = false;
												}
												HX_STACK_LINE(905)
												ret1->_immutable = immutable;
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													ret1->x = x;
													HX_STACK_LINE(905)
													ret1->y = y;
													HX_STACK_LINE(905)
													{
													}
												}
												HX_STACK_LINE(905)
												ret->zpp_inner = ret1;
											}
											HX_STACK_LINE(905)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(905)
											if (((bool((ret != null())) && bool(ret->zpp_disp)))){
												HX_STACK_LINE(905)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if ((_this->_immutable)){
													HX_STACK_LINE(905)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(905)
												if (((_this->_isimmutable != null()))){
													HX_STACK_LINE(905)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(905)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(905)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											struct _Function_10_1{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",905,0xfa2f3866)
													{
														HX_STACK_LINE(905)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(905)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
														}
														HX_STACK_LINE(905)
														{
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(905)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(905)
																_this->_validate();
															}
														}
														HX_STACK_LINE(905)
														return ret->zpp_inner->x;
													}
													return null();
												}
											};
											struct _Function_10_2{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",905,0xfa2f3866)
													{
														HX_STACK_LINE(905)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(905)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
														}
														HX_STACK_LINE(905)
														{
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(905)
															if (((_this->_validate != null()))){
																HX_STACK_LINE(905)
																_this->_validate();
															}
														}
														HX_STACK_LINE(905)
														return ret->zpp_inner->y;
													}
													return null();
												}
											};
											HX_STACK_LINE(905)
											if ((!(((  (((_Function_10_1::Block(ret) == x))) ? bool((_Function_10_2::Block(ret) == y)) : bool(false) ))))){
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(905)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(905)
													{
													}
												}
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(905)
													if (((_this->_invalidate != null()))){
														HX_STACK_LINE(905)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(905)
											ret;
										}
										HX_STACK_LINE(905)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(905)
										fst = ret;
									}
								}
								HX_STACK_LINE(906)
								Float _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(906)
								{
									HX_STACK_LINE(906)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(906)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(906)
									{
										HX_STACK_LINE(906)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(906)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(906)
											_this->_validate();
										}
									}
									HX_STACK_LINE(906)
									_g1 = p->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",906,0xfa2f3866)
										{
											HX_STACK_LINE(906)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(906)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(906)
											{
												HX_STACK_LINE(906)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(906)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(906)
													_this->_validate();
												}
											}
											HX_STACK_LINE(906)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(906)
								g->moveTo(_g1,_Function_7_1::Block(p));
							}
							else{
								HX_STACK_LINE(908)
								Float _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(908)
								{
									HX_STACK_LINE(908)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(908)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(908)
									{
										HX_STACK_LINE(908)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(908)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(908)
											_this->_validate();
										}
									}
									HX_STACK_LINE(908)
									_g1 = p->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",908,0xfa2f3866)
										{
											HX_STACK_LINE(908)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(908)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(908)
											{
												HX_STACK_LINE(908)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(908)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(908)
													_this->_validate();
												}
											}
											HX_STACK_LINE(908)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(908)
								g->lineTo(_g1,_Function_7_1::Block(p));
							}
							HX_STACK_LINE(909)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(936)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(937)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(938)
					{
						HX_STACK_LINE(938)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",938,0xfa2f3866)
								{
									HX_STACK_LINE(938)
									_g->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(938)
									int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(938)
									_g->zpp_critical = true;
									struct _Function_6_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",938,0xfa2f3866)
											{
												HX_STACK_LINE(938)
												{
													HX_STACK_LINE(938)
													_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(938)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
													HX_STACK_LINE(938)
													_g->zpp_inner = null();
												}
												HX_STACK_LINE(938)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(938)
									return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_6_1::Block(_g)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(938)
						while((_Function_5_1::Block(_g))){
							HX_STACK_LINE(938)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(938)
							{
								HX_STACK_LINE(938)
								_g->zpp_critical = false;
								HX_STACK_LINE(938)
								p = _g->zpp_inner->at((_g->zpp_i)++);
							}
							HX_STACK_LINE(940)
							if (((p == null()))){
								HX_STACK_LINE(940)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(944)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(944)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(948)
								if ((fsttime)){
									HX_STACK_LINE(949)
									{
										HX_STACK_LINE(949)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(949)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(949)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(949)
										{
											HX_STACK_LINE(949)
											Float x;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(949)
											{
												HX_STACK_LINE(949)
												if ((p->zpp_disp)){
													HX_STACK_LINE(949)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												x = p->zpp_inner->x;
											}
											HX_STACK_LINE(949)
											Float y;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(949)
											{
												HX_STACK_LINE(949)
												if ((p->zpp_disp)){
													HX_STACK_LINE(949)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												y = p->zpp_inner->y;
											}
											HX_STACK_LINE(949)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(949)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(949)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(949)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(949)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(949)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(949)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(949)
												ret->zpp_pool = null();
												HX_STACK_LINE(949)
												ret->zpp_disp = false;
												HX_STACK_LINE(949)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(949)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(949)
											if (((ret->zpp_inner == null()))){
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(949)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(949)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(949)
															ret1->next = null();
														}
														HX_STACK_LINE(949)
														ret1->weak = false;
													}
													HX_STACK_LINE(949)
													ret1->_immutable = immutable;
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														ret1->x = x;
														HX_STACK_LINE(949)
														ret1->y = y;
														HX_STACK_LINE(949)
														{
														}
													}
													HX_STACK_LINE(949)
													ret->zpp_inner = ret1;
												}
												HX_STACK_LINE(949)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(949)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(949)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if ((_this->_immutable)){
														HX_STACK_LINE(949)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(949)
													if (((_this->_isimmutable != null()))){
														HX_STACK_LINE(949)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(949)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(949)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_11_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",949,0xfa2f3866)
														{
															HX_STACK_LINE(949)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(949)
																HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
															}
															HX_STACK_LINE(949)
															{
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(949)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(949)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(949)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_11_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",949,0xfa2f3866)
														{
															HX_STACK_LINE(949)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(949)
																HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
															}
															HX_STACK_LINE(949)
															{
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(949)
																if (((_this->_validate != null()))){
																	HX_STACK_LINE(949)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(949)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(949)
												if ((!(((  (((_Function_11_1::Block(ret) == x))) ? bool((_Function_11_2::Block(ret) == y)) : bool(false) ))))){
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(949)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(949)
														{
														}
													}
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(949)
														if (((_this->_invalidate != null()))){
															HX_STACK_LINE(949)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(949)
												ret;
											}
											HX_STACK_LINE(949)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(949)
											fst = ret;
										}
									}
									HX_STACK_LINE(950)
									Float _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(950)
									{
										HX_STACK_LINE(950)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(950)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(950)
										{
											HX_STACK_LINE(950)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(950)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(950)
												_this->_validate();
											}
										}
										HX_STACK_LINE(950)
										_g2 = p->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",950,0xfa2f3866)
											{
												HX_STACK_LINE(950)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(950)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(950)
												{
													HX_STACK_LINE(950)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(950)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(950)
														_this->_validate();
													}
												}
												HX_STACK_LINE(950)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(950)
									g->moveTo(_g2,_Function_8_1::Block(p));
								}
								else{
									HX_STACK_LINE(952)
									Float _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(952)
									{
										HX_STACK_LINE(952)
										if (((bool((p != null())) && bool(p->zpp_disp)))){
											HX_STACK_LINE(952)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(952)
										{
											HX_STACK_LINE(952)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(952)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(952)
												_this->_validate();
											}
										}
										HX_STACK_LINE(952)
										_g3 = p->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",952,0xfa2f3866)
											{
												HX_STACK_LINE(952)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(952)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(952)
												{
													HX_STACK_LINE(952)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(952)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(952)
														_this->_validate();
													}
												}
												HX_STACK_LINE(952)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(952)
									g->lineTo(_g3,_Function_8_1::Block(p));
								}
								HX_STACK_LINE(953)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(957)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(958)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(961)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(961)
							HX_STACK_DO_THROW(HX_CSTRING("Error: GeomPoly has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(965)
						if (((verts != null()))){
							HX_STACK_LINE(966)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(967)
							do{
								HX_STACK_LINE(968)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(968)
								{
									HX_STACK_LINE(968)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(968)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(968)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(968)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(968)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(968)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(968)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(968)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(968)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(968)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(968)
										ret->zpp_pool = null();
										HX_STACK_LINE(968)
										ret->zpp_disp = false;
										HX_STACK_LINE(968)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(968)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(968)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(968)
										{
											HX_STACK_LINE(968)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(968)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(968)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
												}
												else{
													HX_STACK_LINE(968)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(968)
													ret1->next = null();
												}
												HX_STACK_LINE(968)
												ret1->weak = false;
											}
											HX_STACK_LINE(968)
											ret1->_immutable = immutable;
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												ret1->x = x;
												HX_STACK_LINE(968)
												ret1->y = y;
												HX_STACK_LINE(968)
												{
												}
											}
											HX_STACK_LINE(968)
											ret->zpp_inner = ret1;
										}
										HX_STACK_LINE(968)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(968)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(968)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(968)
										{
											HX_STACK_LINE(968)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(968)
											if ((_this->_immutable)){
												HX_STACK_LINE(968)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(968)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(968)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(968)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(968)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",968,0xfa2f3866)
												{
													HX_STACK_LINE(968)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(968)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(968)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(968)
															_this->_validate();
														}
													}
													HX_STACK_LINE(968)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",968,0xfa2f3866)
												{
													HX_STACK_LINE(968)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(968)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(968)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(968)
															_this->_validate();
														}
													}
													HX_STACK_LINE(968)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(968)
										if ((!(((  (((_Function_9_1::Block(ret) == x))) ? bool((_Function_9_2::Block(ret) == y)) : bool(false) ))))){
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(968)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(968)
												{
												}
											}
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(968)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(968)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(968)
										ret;
									}
									HX_STACK_LINE(968)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(968)
									p = ret;
								}
								HX_STACK_LINE(969)
								vite = vite->next;
								HX_STACK_LINE(970)
								{
									HX_STACK_LINE(971)
									if ((fsttime)){
										HX_STACK_LINE(972)
										{
											HX_STACK_LINE(972)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(972)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(972)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(972)
											{
												HX_STACK_LINE(972)
												Float x;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(972)
												{
													HX_STACK_LINE(972)
													if ((p->zpp_disp)){
														HX_STACK_LINE(972)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													x = p->zpp_inner->x;
												}
												HX_STACK_LINE(972)
												Float y;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(972)
												{
													HX_STACK_LINE(972)
													if ((p->zpp_disp)){
														HX_STACK_LINE(972)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													y = p->zpp_inner->y;
												}
												HX_STACK_LINE(972)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(972)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												HX_STACK_LINE(972)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(972)
												if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
													HX_STACK_LINE(972)
													ret = ::nape::geom::Vec2_obj::__new(null(),null());
												}
												else{
													HX_STACK_LINE(972)
													ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(972)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(972)
													ret->zpp_pool = null();
													HX_STACK_LINE(972)
													ret->zpp_disp = false;
													HX_STACK_LINE(972)
													if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
														HX_STACK_LINE(972)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
													}
												}
												HX_STACK_LINE(972)
												if (((ret->zpp_inner == null()))){
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																HX_STACK_LINE(972)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
															}
															else{
																HX_STACK_LINE(972)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(972)
																ret1->next = null();
															}
															HX_STACK_LINE(972)
															ret1->weak = false;
														}
														HX_STACK_LINE(972)
														ret1->_immutable = immutable;
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															ret1->x = x;
															HX_STACK_LINE(972)
															ret1->y = y;
															HX_STACK_LINE(972)
															{
															}
														}
														HX_STACK_LINE(972)
														ret->zpp_inner = ret1;
													}
													HX_STACK_LINE(972)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(972)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(972)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if ((_this->_immutable)){
															HX_STACK_LINE(972)
															HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
														}
														HX_STACK_LINE(972)
														if (((_this->_isimmutable != null()))){
															HX_STACK_LINE(972)
															_this->_isimmutable();
														}
													}
													HX_STACK_LINE(972)
													if (((bool((x != x)) || bool((y != y))))){
														HX_STACK_LINE(972)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
													}
													struct _Function_12_1{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",972,0xfa2f3866)
															{
																HX_STACK_LINE(972)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(972)
																	HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
																}
																HX_STACK_LINE(972)
																{
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(972)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(972)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(972)
																return ret->zpp_inner->x;
															}
															return null();
														}
													};
													struct _Function_12_2{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",972,0xfa2f3866)
															{
																HX_STACK_LINE(972)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(972)
																	HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
																}
																HX_STACK_LINE(972)
																{
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(972)
																	if (((_this->_validate != null()))){
																		HX_STACK_LINE(972)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(972)
																return ret->zpp_inner->y;
															}
															return null();
														}
													};
													HX_STACK_LINE(972)
													if ((!(((  (((_Function_12_1::Block(ret) == x))) ? bool((_Function_12_2::Block(ret) == y)) : bool(false) ))))){
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(972)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(972)
															{
															}
														}
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(972)
															if (((_this->_invalidate != null()))){
																HX_STACK_LINE(972)
																_this->_invalidate(_this);
															}
														}
													}
													HX_STACK_LINE(972)
													ret;
												}
												HX_STACK_LINE(972)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(972)
												fst = ret;
											}
										}
										HX_STACK_LINE(973)
										Float _g4;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(973)
										{
											HX_STACK_LINE(973)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(973)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(973)
											{
												HX_STACK_LINE(973)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(973)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(973)
													_this->_validate();
												}
											}
											HX_STACK_LINE(973)
											_g4 = p->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",973,0xfa2f3866)
												{
													HX_STACK_LINE(973)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(973)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(973)
													{
														HX_STACK_LINE(973)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(973)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(973)
															_this->_validate();
														}
													}
													HX_STACK_LINE(973)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(973)
										g->moveTo(_g4,_Function_9_1::Block(p));
									}
									else{
										HX_STACK_LINE(975)
										Float _g5;		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(975)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(975)
											{
												HX_STACK_LINE(975)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(975)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(975)
													_this->_validate();
												}
											}
											HX_STACK_LINE(975)
											_g5 = p->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",975,0xfa2f3866)
												{
													HX_STACK_LINE(975)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(975)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(975)
													{
														HX_STACK_LINE(975)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(975)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(975)
															_this->_validate();
														}
													}
													HX_STACK_LINE(975)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(975)
										g->lineTo(_g5,_Function_9_1::Block(p));
									}
									HX_STACK_LINE(976)
									fsttime = false;
								}
								HX_STACK_LINE(978)
								{
									HX_STACK_LINE(978)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(978)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(978)
										if ((_this->_immutable)){
											HX_STACK_LINE(978)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(978)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(978)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(978)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(978)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(978)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(978)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(978)
									p->zpp_inner = null();
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										o->zpp_pool = null();
										HX_STACK_LINE(978)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(978)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(978)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(978)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(978)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										{
											HX_STACK_LINE(978)
											if (((o->outer != null()))){
												HX_STACK_LINE(978)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(978)
												o->outer = null();
											}
											HX_STACK_LINE(978)
											o->_isimmutable = null();
											HX_STACK_LINE(978)
											o->_validate = null();
											HX_STACK_LINE(978)
											o->_invalidate = null();
										}
										HX_STACK_LINE(978)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(985)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			HX_STACK_LINE(989)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(989)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(989)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(989)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(989)
						_this->_validate();
					}
				}
				HX_STACK_LINE(989)
				_g6 = fst->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",989,0xfa2f3866)
					{
						HX_STACK_LINE(989)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(989)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(989)
						{
							HX_STACK_LINE(989)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(989)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(989)
								_this->_validate();
							}
						}
						HX_STACK_LINE(989)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(989)
			g->lineTo(_g6,_Function_2_1::Block(fst));
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(990)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(990)
					if ((_this->_immutable)){
						HX_STACK_LINE(990)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(990)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(990)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(990)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(990)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(990)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(990)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(990)
				fst->zpp_inner = null();
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					o->zpp_pool = null();
					HX_STACK_LINE(990)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(990)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(990)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(990)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(990)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(990)
						if (((o->outer != null()))){
							HX_STACK_LINE(990)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(990)
							o->outer = null();
						}
						HX_STACK_LINE(990)
						o->_isimmutable = null();
						HX_STACK_LINE(990)
						o->_validate = null();
						HX_STACK_LINE(990)
						o->_invalidate = null();
					}
					HX_STACK_LINE(990)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(994)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(995)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(996)
				{
					HX_STACK_LINE(996)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(996)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(996)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(996)
						++(_g);
						HX_STACK_LINE(998)
						if (((vite == null()))){
							HX_STACK_LINE(998)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(1001)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(1001)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(1003)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1006)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(1006)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1009)
						{
							HX_STACK_LINE(1010)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1011)
							if ((fsttime)){
								HX_STACK_LINE(1012)
								fst = v;
								HX_STACK_LINE(1013)
								Float _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(1013)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1013)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1013)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1013)
									_g7 = v->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1013,0xfa2f3866)
										{
											HX_STACK_LINE(1013)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1013)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(1013)
											{
												HX_STACK_LINE(1013)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1013)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1013)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1013)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1013)
								g->moveTo(_g7,_Function_7_1::Block(v));
							}
							else{
								HX_STACK_LINE(1015)
								Float _g8;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(1015)
								{
									HX_STACK_LINE(1015)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(1015)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1015)
									{
										HX_STACK_LINE(1015)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1015)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1015)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1015)
									_g8 = v->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1015,0xfa2f3866)
										{
											HX_STACK_LINE(1015)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1015)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(1015)
											{
												HX_STACK_LINE(1015)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1015)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1015)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1015)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1015)
								g->lineTo(_g8,_Function_7_1::Block(v));
							}
							HX_STACK_LINE(1016)
							if ((!(fsttime))){
								HX_STACK_LINE(1016)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(1016)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1016)
									if ((_this->_immutable)){
										HX_STACK_LINE(1016)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1016)
									if (((_this->_isimmutable != null()))){
										HX_STACK_LINE(1016)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1016)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(1016)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1016)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1016)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1016)
								v->zpp_inner = null();
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									o->zpp_pool = null();
									HX_STACK_LINE(1016)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1016)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1016)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1016)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1016)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										if (((o->outer != null()))){
											HX_STACK_LINE(1016)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1016)
											o->outer = null();
										}
										HX_STACK_LINE(1016)
										o->_isimmutable = null();
										HX_STACK_LINE(1016)
										o->_validate = null();
										HX_STACK_LINE(1016)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1016)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1017)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1046)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(1047)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1048)
					{
						HX_STACK_LINE(1048)
						::nape::geom::Vec2Iterator _g = lv->iterator();		HX_STACK_VAR(_g,"_g");
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2Iterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1048,0xfa2f3866)
								{
									HX_STACK_LINE(1048)
									_g->zpp_inner->zpp_inner->valmod();
									HX_STACK_LINE(1048)
									int length = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1048)
									_g->zpp_critical = true;
									struct _Function_6_1{
										inline static bool Block( ::nape::geom::Vec2Iterator &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1048,0xfa2f3866)
											{
												HX_STACK_LINE(1048)
												{
													HX_STACK_LINE(1048)
													_g->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
													HX_STACK_LINE(1048)
													::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
													HX_STACK_LINE(1048)
													_g->zpp_inner = null();
												}
												HX_STACK_LINE(1048)
												return false;
											}
											return null();
										}
									};
									HX_STACK_LINE(1048)
									return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_6_1::Block(_g)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1048)
						while((_Function_5_1::Block(_g))){
							HX_STACK_LINE(1048)
							::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(1048)
							{
								HX_STACK_LINE(1048)
								_g->zpp_critical = false;
								HX_STACK_LINE(1048)
								p = _g->zpp_inner->at((_g->zpp_i)++);
							}
							HX_STACK_LINE(1050)
							if (((p == null()))){
								HX_STACK_LINE(1050)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(1054)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(1054)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1057)
							{
								HX_STACK_LINE(1058)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1059)
								if ((fsttime)){
									HX_STACK_LINE(1060)
									fst = v;
									HX_STACK_LINE(1061)
									Float _g9;		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1061)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1061)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1061)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1061)
										_g9 = v->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1061,0xfa2f3866)
											{
												HX_STACK_LINE(1061)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1061)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(1061)
												{
													HX_STACK_LINE(1061)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1061)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(1061)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1061)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1061)
									g->moveTo(_g9,_Function_8_1::Block(v));
								}
								else{
									HX_STACK_LINE(1063)
									Float _g10;		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(1063)
									{
										HX_STACK_LINE(1063)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1063)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1063)
										{
											HX_STACK_LINE(1063)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1063)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1063)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1063)
										_g10 = v->zpp_inner->x;
									}
									struct _Function_8_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1063,0xfa2f3866)
											{
												HX_STACK_LINE(1063)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1063)
													HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
												}
												HX_STACK_LINE(1063)
												{
													HX_STACK_LINE(1063)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1063)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(1063)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1063)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1063)
									g->lineTo(_g10,_Function_8_1::Block(v));
								}
								HX_STACK_LINE(1064)
								if ((!(fsttime))){
									HX_STACK_LINE(1064)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(1064)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1064)
										if ((_this->_immutable)){
											HX_STACK_LINE(1064)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1064)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(1064)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1064)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(1064)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1064)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1064)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1064)
									v->zpp_inner = null();
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										o->zpp_pool = null();
										HX_STACK_LINE(1064)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1064)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1064)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1064)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1064)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											if (((o->outer != null()))){
												HX_STACK_LINE(1064)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1064)
												o->outer = null();
											}
											HX_STACK_LINE(1064)
											o->_isimmutable = null();
											HX_STACK_LINE(1064)
											o->_validate = null();
											HX_STACK_LINE(1064)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1064)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1065)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1069)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(1070)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1073)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(1073)
							HX_STACK_DO_THROW(HX_CSTRING("Error: GeomPoly has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1076)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1077)
						if (((verts != null()))){
							HX_STACK_LINE(1078)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1079)
							do{
								HX_STACK_LINE(1080)
								::nape::geom::Vec2 p;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1080)
								{
									HX_STACK_LINE(1080)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1080)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1080)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1080)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(1080)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(1080)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1080)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1080)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(1080)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1080)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1080)
										ret->zpp_pool = null();
										HX_STACK_LINE(1080)
										ret->zpp_disp = false;
										HX_STACK_LINE(1080)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(1080)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(1080)
									if (((ret->zpp_inner == null()))){
										HX_STACK_LINE(1080)
										{
											HX_STACK_LINE(1080)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1080)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(1080)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
												}
												else{
													HX_STACK_LINE(1080)
													ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1080)
													ret1->next = null();
												}
												HX_STACK_LINE(1080)
												ret1->weak = false;
											}
											HX_STACK_LINE(1080)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												ret1->x = x;
												HX_STACK_LINE(1080)
												ret1->y = y;
												HX_STACK_LINE(1080)
												{
												}
											}
											HX_STACK_LINE(1080)
											ret->zpp_inner = ret1;
										}
										HX_STACK_LINE(1080)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1080)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1080)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1080)
										{
											HX_STACK_LINE(1080)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1080)
											if ((_this->_immutable)){
												HX_STACK_LINE(1080)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1080)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(1080)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1080)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(1080)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1080,0xfa2f3866)
												{
													HX_STACK_LINE(1080)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1080)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1080)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1080)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1080)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1080,0xfa2f3866)
												{
													HX_STACK_LINE(1080)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1080)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1080)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1080)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1080)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1080)
										if ((!(((  (((_Function_9_1::Block(ret) == x))) ? bool((_Function_9_2::Block(ret) == y)) : bool(false) ))))){
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1080)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1080)
												{
												}
											}
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1080)
												if (((_this->_invalidate != null()))){
													HX_STACK_LINE(1080)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(1080)
										ret;
									}
									HX_STACK_LINE(1080)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1080)
									p = ret;
								}
								HX_STACK_LINE(1081)
								vite = vite->next;
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1084)
									if ((fsttime)){
										HX_STACK_LINE(1085)
										fst = v;
										HX_STACK_LINE(1086)
										Float _g11;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1086)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1086)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1086)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1086)
											_g11 = v->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1086,0xfa2f3866)
												{
													HX_STACK_LINE(1086)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1086)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(1086)
													{
														HX_STACK_LINE(1086)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1086)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1086)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1086)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1086)
										g->moveTo(_g11,_Function_9_1::Block(v));
									}
									else{
										HX_STACK_LINE(1088)
										Float _g12;		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1088)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
											}
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1088)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1088)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1088)
											_g12 = v->zpp_inner->x;
										}
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1088,0xfa2f3866)
												{
													HX_STACK_LINE(1088)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1088)
														HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
													}
													HX_STACK_LINE(1088)
													{
														HX_STACK_LINE(1088)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1088)
														if (((_this->_validate != null()))){
															HX_STACK_LINE(1088)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1088)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1088)
										g->lineTo(_g12,_Function_9_1::Block(v));
									}
									HX_STACK_LINE(1089)
									if ((!(fsttime))){
										HX_STACK_LINE(1089)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1089)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1089)
											if ((_this->_immutable)){
												HX_STACK_LINE(1089)
												HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1089)
											if (((_this->_isimmutable != null()))){
												HX_STACK_LINE(1089)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1089)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(1089)
											HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1089)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(1089)
										v->zpp_inner = null();
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											o->zpp_pool = null();
											HX_STACK_LINE(1089)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(1089)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(1089)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1089)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(1089)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												if (((o->outer != null()))){
													HX_STACK_LINE(1089)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1089)
													o->outer = null();
												}
												HX_STACK_LINE(1089)
												o->_isimmutable = null();
												HX_STACK_LINE(1089)
												o->_validate = null();
												HX_STACK_LINE(1089)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1089)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1090)
									fsttime = false;
								}
								HX_STACK_LINE(1092)
								{
									HX_STACK_LINE(1092)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(1092)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1092)
										if ((_this->_immutable)){
											HX_STACK_LINE(1092)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1092)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(1092)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1092)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(1092)
										HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1092)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(1092)
									p->zpp_inner = null();
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										o->zpp_pool = null();
										HX_STACK_LINE(1092)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1092)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1092)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1092)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1092)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										{
											HX_STACK_LINE(1092)
											if (((o->outer != null()))){
												HX_STACK_LINE(1092)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1092)
												o->outer = null();
											}
											HX_STACK_LINE(1092)
											o->_isimmutable = null();
											HX_STACK_LINE(1092)
											o->_validate = null();
											HX_STACK_LINE(1092)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1092)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(1099)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			HX_STACK_LINE(1103)
			Float _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(1103)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1103)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1103)
				_g13 = fst->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1103,0xfa2f3866)
					{
						HX_STACK_LINE(1103)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(1103)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1103)
						{
							HX_STACK_LINE(1103)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1103)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1103)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1103)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1103)
			g->lineTo(_g13,_Function_2_1::Block(fst));
			HX_STACK_LINE(1104)
			{
				HX_STACK_LINE(1104)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(1104)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1104)
					if ((_this->_immutable)){
						HX_STACK_LINE(1104)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1104)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1104)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1104)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(1104)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1104)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1104)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(1104)
				fst->zpp_inner = null();
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					o->zpp_pool = null();
					HX_STACK_LINE(1104)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1104)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1104)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1104)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1104)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1104)
						if (((o->outer != null()))){
							HX_STACK_LINE(1104)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1104)
							o->outer = null();
						}
						HX_STACK_LINE(1104)
						o->_isimmutable = null();
						HX_STACK_LINE(1104)
						o->_validate = null();
						HX_STACK_LINE(1104)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1104)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1106)
		g->endFill();
		HX_STACK_LINE(1108)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1109)
			Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1110)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1111)
			while(((i < lv->length))){
				HX_STACK_LINE(1112)
				::nape::geom::Vec2 cur = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1116,0xfa2f3866)
						{
							HX_STACK_LINE(1117)
							{
								HX_STACK_LINE(1117)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(1117)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1117)
									if ((_this->_immutable)){
										HX_STACK_LINE(1117)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1117)
									if (((_this->_isimmutable != null()))){
										HX_STACK_LINE(1117)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1117)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(1117)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1117)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1117)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1117)
								cur->zpp_inner = null();
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									o->zpp_pool = null();
									HX_STACK_LINE(1117)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1117)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1117)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1117)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1117)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									{
										HX_STACK_LINE(1117)
										if (((o->outer != null()))){
											HX_STACK_LINE(1117)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1117)
											o->outer = null();
										}
										HX_STACK_LINE(1117)
										o->_isimmutable = null();
										HX_STACK_LINE(1117)
										o->_validate = null();
										HX_STACK_LINE(1117)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1117)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1118)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1113)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1124)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1125)
					continue;
				}
				HX_STACK_LINE(1127)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1155)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1156)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1157)
				if (((lv->zpp_inner->_validate != null()))){
					HX_STACK_LINE(1157)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1158)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1159)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1160)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1161)
				while(((cur != null()))){
					HX_STACK_LINE(1162)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1163)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1166)
						cur = ins->erase(pre);
						HX_STACK_LINE(1167)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1171)
							{
								HX_STACK_LINE(1171)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1171)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1171)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1171)
									if ((_this1->_immutable)){
										HX_STACK_LINE(1171)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1171)
									if (((_this1->_isimmutable != null()))){
										HX_STACK_LINE(1171)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(1171)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(1171)
									HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1171)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1171)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1171)
								_this->zpp_inner = null();
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									o->zpp_pool = null();
									HX_STACK_LINE(1171)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1171)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1171)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1171)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1171)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									{
										HX_STACK_LINE(1171)
										if (((o->outer != null()))){
											HX_STACK_LINE(1171)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1171)
											o->outer = null();
										}
										HX_STACK_LINE(1171)
										o->_isimmutable = null();
										HX_STACK_LINE(1171)
										o->_validate = null();
										HX_STACK_LINE(1171)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1171)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1172)
							true;
						}
						else{
							HX_STACK_LINE(1175)
							false;
						}
					}
					else{
						HX_STACK_LINE(1180)
						pre = cur;
						HX_STACK_LINE(1181)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::draw( Dynamic object){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","draw",0x5335fb3a,"nape.util.ShapeDebug.draw","nape/util/ShapeDebug.hx",1191,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(1193)
		if (((  (((this->zpp_inner->xform != null()))) ? bool(!(this->zpp_inner->xform->outer->equiorthogonal())) : bool(false) ))){
			HX_STACK_LINE(1193)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(1195)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(1196)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1196)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,null(),1.0,true);
			}
			else{
				HX_STACK_LINE(1197)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Compound >()))){
					HX_STACK_LINE(1197)
					this->zpp_inner_zn->draw_compound((hx::TCast< nape::phys::Compound >::cast(object))->zpp_inner,null(),1.0,true);
				}
				else{
					HX_STACK_LINE(1198)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
						HX_STACK_LINE(1198)
						this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,null(),1.0,true);
					}
					else{
						HX_STACK_LINE(1199)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
							HX_STACK_LINE(1199)
							this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,null(),1.0,true);
						}
						else{
							HX_STACK_LINE(1200)
							if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
								HX_STACK_LINE(1200)
								(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
							}
							else{
								HX_STACK_LINE(1203)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Unhandled object type for Debug draw"));
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1208)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1208)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
			}
			else{
				HX_STACK_LINE(1209)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
					HX_STACK_LINE(1209)
					this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
				}
				else{
					HX_STACK_LINE(1210)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
						HX_STACK_LINE(1210)
						this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
					}
					else{
						HX_STACK_LINE(1211)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
							HX_STACK_LINE(1211)
							(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
						}
						else{
							HX_STACK_LINE(1214)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Unhandled object type for Debug draw"));
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(3.0);
	HX_STACK_FRAME("nape.util.ShapeDebug","drawSpring",0x186b6da7,"nape.util.ShapeDebug.drawSpring","nape/util/ShapeDebug.hx",1223,0xfa2f3866)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(colour,"colour")
	HX_STACK_ARG(coils,"coils")
	HX_STACK_ARG(radius,"radius")
{
		HX_STACK_LINE(1226)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(1226)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(1231)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(1231)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(1235)
		if (((start == null()))){
			HX_STACK_LINE(1235)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(1238)
		if (((end == null()))){
			HX_STACK_LINE(1238)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(1241)
		if (((coils < (int)0))){
			HX_STACK_LINE(1241)
			HX_STACK_DO_THROW(HX_CSTRING("Error: drawCurve::coils must be >= 0"));
		}
		HX_STACK_LINE(1243)
		if (((coils == (int)0))){
			HX_STACK_LINE(1243)
			this->drawLine(start,end,colour);
		}
		else{
			HX_STACK_LINE(1245)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(1245)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1245)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1245)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1245)
				_g = end->zpp_inner->x;
			}
			HX_STACK_LINE(1245)
			Float dx;		HX_STACK_VAR(dx,"dx");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1245,0xfa2f3866)
					{
						HX_STACK_LINE(1245)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1245)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1245)
						{
							HX_STACK_LINE(1245)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1245)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1245)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1245)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1245)
			dx = (_g - _Function_2_1::Block(start));
			HX_STACK_LINE(1246)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(1246)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1246)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1246)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1246)
				_g1 = end->zpp_inner->y;
			}
			HX_STACK_LINE(1246)
			Float dy;		HX_STACK_VAR(dy,"dy");
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1246,0xfa2f3866)
					{
						HX_STACK_LINE(1246)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1246)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1246)
						{
							HX_STACK_LINE(1246)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1246)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1246)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1246)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1246)
			dy = (_g1 - _Function_2_2::Block(start));
			HX_STACK_LINE(1263)
			{
				HX_STACK_LINE(1264)
				Float t = (Float(1.0) / Float(((coils * (int)4))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1273)
				hx::MultEq(dx,t);
				HX_STACK_LINE(1274)
				hx::MultEq(dy,t);
			}
			HX_STACK_LINE(1276)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1277)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1279)
				nx = dx;
				HX_STACK_LINE(1280)
				ny = dy;
				HX_STACK_LINE(1289)
				{
				}
			}
			HX_STACK_LINE(1298)
			if (((((nx * nx) + (ny * ny)) < 0.1))){
				HX_STACK_LINE(1298)
				return null();
			}
			HX_STACK_LINE(1299)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1301)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1310)
					Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1311)
					{
						HX_STACK_LINE(1312)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1321)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1322)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1325)
				{
					HX_STACK_LINE(1326)
					Float t = nx;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1327)
					nx = -(ny);
					HX_STACK_LINE(1328)
					ny = t;
				}
			}
			HX_STACK_LINE(1331)
			{
				HX_STACK_LINE(1332)
				Float t = (radius * (int)2);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1341)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1342)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(1344)
			::nape::geom::Vec2 u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1344)
			{
				HX_STACK_LINE(1344)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1344)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(1344)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1344)
				{
					HX_STACK_LINE(1344)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						if ((start->zpp_disp)){
							HX_STACK_LINE(1344)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						x = start->zpp_inner->x;
					}
					HX_STACK_LINE(1344)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						if ((start->zpp_disp)){
							HX_STACK_LINE(1344)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						y = start->zpp_inner->y;
					}
					HX_STACK_LINE(1344)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1344)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1344)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1344)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1344)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1344)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1344)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1344)
						ret->zpp_pool = null();
						HX_STACK_LINE(1344)
						ret->zpp_disp = false;
						HX_STACK_LINE(1344)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1344)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1344)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(1344)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
								}
								else{
									HX_STACK_LINE(1344)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1344)
									ret1->next = null();
								}
								HX_STACK_LINE(1344)
								ret1->weak = false;
							}
							HX_STACK_LINE(1344)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret1->x = x;
								HX_STACK_LINE(1344)
								ret1->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							ret->zpp_inner = ret1;
						}
						HX_STACK_LINE(1344)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1344)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1344)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							if ((_this->_immutable)){
								HX_STACK_LINE(1344)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1344)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1344)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1344)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1344)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1344,0xfa2f3866)
								{
									HX_STACK_LINE(1344)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1344)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1344)
									{
										HX_STACK_LINE(1344)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1344)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1344)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1344)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1344,0xfa2f3866)
								{
									HX_STACK_LINE(1344)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1344)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1344)
									{
										HX_STACK_LINE(1344)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1344)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1344)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1344)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1344)
						if ((!(((  (((_Function_5_1::Block(ret) == x))) ? bool((_Function_5_2::Block(ret) == y)) : bool(false) ))))){
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1344)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1344)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1344)
						ret;
					}
					HX_STACK_LINE(1344)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1344)
					u = ret;
				}
			}
			HX_STACK_LINE(1345)
			::nape::geom::Vec2 v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1345)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1345)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1345)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1345)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1345)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1345)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1345)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1345)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1345)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1345)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1345)
					ret->zpp_pool = null();
					HX_STACK_LINE(1345)
					ret->zpp_disp = false;
					HX_STACK_LINE(1345)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1345)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1345)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1345)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1345)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
							}
							else{
								HX_STACK_LINE(1345)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1345)
								ret1->next = null();
							}
							HX_STACK_LINE(1345)
							ret1->weak = false;
						}
						HX_STACK_LINE(1345)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret1->x = x;
							HX_STACK_LINE(1345)
							ret1->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						ret->zpp_inner = ret1;
					}
					HX_STACK_LINE(1345)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1345)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1345)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1345)
						if ((_this->_immutable)){
							HX_STACK_LINE(1345)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1345)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1345)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1345)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1345)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1345,0xfa2f3866)
							{
								HX_STACK_LINE(1345)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1345)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1345)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1345)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1345)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1345,0xfa2f3866)
							{
								HX_STACK_LINE(1345)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1345)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1345)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1345)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1345)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1345)
					if ((!(((  (((_Function_4_1::Block(ret) == x))) ? bool((_Function_4_2::Block(ret) == y)) : bool(false) ))))){
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1345)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1345)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1345)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1345)
					ret;
				}
				HX_STACK_LINE(1345)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1345)
				v = ret;
			}
			HX_STACK_LINE(1346)
			::nape::geom::Vec2 q;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1346)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1346)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1346)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1346)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1346)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1346)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1346)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1346)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1346)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1346)
					ret->zpp_pool = null();
					HX_STACK_LINE(1346)
					ret->zpp_disp = false;
					HX_STACK_LINE(1346)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1346)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1346)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1346)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(1346)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
							}
							else{
								HX_STACK_LINE(1346)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1346)
								ret1->next = null();
							}
							HX_STACK_LINE(1346)
							ret1->weak = false;
						}
						HX_STACK_LINE(1346)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret1->x = x;
							HX_STACK_LINE(1346)
							ret1->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						ret->zpp_inner = ret1;
					}
					HX_STACK_LINE(1346)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1346)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1346)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1346)
						if ((_this->_immutable)){
							HX_STACK_LINE(1346)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1346)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1346)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1346)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1346)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1346,0xfa2f3866)
							{
								HX_STACK_LINE(1346)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1346)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1346)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1346)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1346)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1346,0xfa2f3866)
							{
								HX_STACK_LINE(1346)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1346)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
								}
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1346)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1346)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1346)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1346)
					if ((!(((  (((_Function_4_1::Block(ret) == x))) ? bool((_Function_4_2::Block(ret) == y)) : bool(false) ))))){
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1346)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1346)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1346)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1346)
					ret;
				}
				HX_STACK_LINE(1346)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1346)
				q = ret;
			}
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1347)
				while(((_g2 < coils))){
					HX_STACK_LINE(1347)
					int i = (_g2)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1348)
					{
						HX_STACK_LINE(1348)
						Float x;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1348,0xfa2f3866)
								{
									HX_STACK_LINE(1348)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1348)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1348)
									{
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1348)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1348)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1348)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1348)
						x = ((_Function_5_1::Block(u) + dx) + nx);
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1348)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if ((_this->_immutable)){
									HX_STACK_LINE(1348)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1348)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1348)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1348,0xfa2f3866)
									{
										HX_STACK_LINE(1348)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1348)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1348)
										{
											HX_STACK_LINE(1348)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1348)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1348)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1348)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1348)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1348)
								if (((x != x))){
									HX_STACK_LINE(1348)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1348)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1348)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1348)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1349)
					{
						HX_STACK_LINE(1349)
						Float y;		HX_STACK_VAR(y,"y");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1349,0xfa2f3866)
								{
									HX_STACK_LINE(1349)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1349)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1349)
									{
										HX_STACK_LINE(1349)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1349)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1349)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1349)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1349)
						y = ((_Function_5_1::Block(u) + dy) + ny);
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1349)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if ((_this->_immutable)){
									HX_STACK_LINE(1349)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1349)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1349)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1349,0xfa2f3866)
									{
										HX_STACK_LINE(1349)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1349)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1349)
										{
											HX_STACK_LINE(1349)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1349)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1349)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1349)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1349)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1349)
								if (((y != y))){
									HX_STACK_LINE(1349)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1349)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1349)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1349)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1350)
					{
						HX_STACK_LINE(1350)
						Float x;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1350,0xfa2f3866)
								{
									HX_STACK_LINE(1350)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1350)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1350)
									{
										HX_STACK_LINE(1350)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1350)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1350)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1350)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1350)
						x = (_Function_5_1::Block(u) + (dx * (int)2));
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1350)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if ((_this->_immutable)){
									HX_STACK_LINE(1350)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1350)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1350)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1350,0xfa2f3866)
									{
										HX_STACK_LINE(1350)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1350)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1350)
										{
											HX_STACK_LINE(1350)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1350)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1350)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1350)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1350)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1350)
								if (((x != x))){
									HX_STACK_LINE(1350)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1350)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1350)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1350)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1351)
					{
						HX_STACK_LINE(1351)
						Float y;		HX_STACK_VAR(y,"y");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1351,0xfa2f3866)
								{
									HX_STACK_LINE(1351)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1351)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1351)
									{
										HX_STACK_LINE(1351)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1351)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1351)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1351)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1351)
						y = (_Function_5_1::Block(u) + (dy * (int)2));
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1351)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if ((_this->_immutable)){
									HX_STACK_LINE(1351)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1351)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1351)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1351,0xfa2f3866)
									{
										HX_STACK_LINE(1351)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1351)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1351)
										{
											HX_STACK_LINE(1351)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1351)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1351)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1351)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1351)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1351)
								if (((y != y))){
									HX_STACK_LINE(1351)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1351)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1351)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1351)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1352)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1353)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1353)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							x = q->zpp_inner->x;
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1353)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if ((_this->_immutable)){
									HX_STACK_LINE(1353)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1353)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1353)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1353,0xfa2f3866)
									{
										HX_STACK_LINE(1353)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1353)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1353)
										{
											HX_STACK_LINE(1353)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1353)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1353)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1353)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1353)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1353)
								if (((x != x))){
									HX_STACK_LINE(1353)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1353)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1353)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1353)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1354)
					{
						HX_STACK_LINE(1354)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1354)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							y = q->zpp_inner->y;
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1354)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if ((_this->_immutable)){
									HX_STACK_LINE(1354)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1354)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1354)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1354,0xfa2f3866)
									{
										HX_STACK_LINE(1354)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1354)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1354)
										{
											HX_STACK_LINE(1354)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1354)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1354)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1354)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1354)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1354)
								if (((y != y))){
									HX_STACK_LINE(1354)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1354)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1354)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1354)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							u->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1355)
					{
						HX_STACK_LINE(1355)
						Float x;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1355,0xfa2f3866)
								{
									HX_STACK_LINE(1355)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1355)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1355)
									{
										HX_STACK_LINE(1355)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1355)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1355)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1355)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1355)
						x = ((_Function_5_1::Block(u) + dx) - nx);
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1355)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if ((_this->_immutable)){
									HX_STACK_LINE(1355)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1355)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1355)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1355,0xfa2f3866)
									{
										HX_STACK_LINE(1355)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1355)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1355)
										{
											HX_STACK_LINE(1355)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1355)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1355)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1355)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1355)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1355)
								if (((x != x))){
									HX_STACK_LINE(1355)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1355)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1355)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1355)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1356)
					{
						HX_STACK_LINE(1356)
						Float y;		HX_STACK_VAR(y,"y");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1356,0xfa2f3866)
								{
									HX_STACK_LINE(1356)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1356)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1356)
									{
										HX_STACK_LINE(1356)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1356)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1356)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1356)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1356)
						y = ((_Function_5_1::Block(u) + dy) - ny);
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1356)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if ((_this->_immutable)){
									HX_STACK_LINE(1356)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1356)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1356)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1356,0xfa2f3866)
									{
										HX_STACK_LINE(1356)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1356)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1356)
										{
											HX_STACK_LINE(1356)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1356)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1356)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1356)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1356)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1356)
								if (((y != y))){
									HX_STACK_LINE(1356)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1356)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1356)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1356)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						Float x;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1357,0xfa2f3866)
								{
									HX_STACK_LINE(1357)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1357)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1357)
									{
										HX_STACK_LINE(1357)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1357)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1357)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1357)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1357)
						x = (_Function_5_1::Block(u) + (dx * (int)2));
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1357)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if ((_this->_immutable)){
									HX_STACK_LINE(1357)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1357)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1357)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1357,0xfa2f3866)
									{
										HX_STACK_LINE(1357)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1357)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1357)
										{
											HX_STACK_LINE(1357)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1357)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1357)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1357)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1357)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1357)
								if (((x != x))){
									HX_STACK_LINE(1357)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1357)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1357)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1357)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1358)
					{
						HX_STACK_LINE(1358)
						Float y;		HX_STACK_VAR(y,"y");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1358,0xfa2f3866)
								{
									HX_STACK_LINE(1358)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1358)
										HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
									}
									HX_STACK_LINE(1358)
									{
										HX_STACK_LINE(1358)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1358)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1358)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1358)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1358)
						y = (_Function_5_1::Block(u) + (dy * (int)2));
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1358)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if ((_this->_immutable)){
									HX_STACK_LINE(1358)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1358)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1358)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1358,0xfa2f3866)
									{
										HX_STACK_LINE(1358)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1358)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1358)
										{
											HX_STACK_LINE(1358)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1358)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1358)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1358)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1358)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1358)
								if (((y != y))){
									HX_STACK_LINE(1358)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1358)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1358)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1358)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1359)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1360)
					{
						HX_STACK_LINE(1360)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1360)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							x = q->zpp_inner->x;
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1360)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if ((_this->_immutable)){
									HX_STACK_LINE(1360)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1360)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1360)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1360,0xfa2f3866)
									{
										HX_STACK_LINE(1360)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1360)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1360)
										{
											HX_STACK_LINE(1360)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1360)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1360)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1360)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1360)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1360)
								if (((x != x))){
									HX_STACK_LINE(1360)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::x cannot be NaN"));
								}
								HX_STACK_LINE(1360)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1360)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1360)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1361)
					{
						HX_STACK_LINE(1361)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1361)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							y = q->zpp_inner->y;
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1361)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if ((_this->_immutable)){
									HX_STACK_LINE(1361)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1361)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1361)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/util/ShapeDebug.hx",1361,0xfa2f3866)
									{
										HX_STACK_LINE(1361)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1361)
											HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
										}
										HX_STACK_LINE(1361)
										{
											HX_STACK_LINE(1361)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1361)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1361)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1361)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1361)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1361)
								if (((y != y))){
									HX_STACK_LINE(1361)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2::y cannot be NaN"));
								}
								HX_STACK_LINE(1361)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1361)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1361)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							u->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1363)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(1363)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1363)
					if ((_this->_immutable)){
						HX_STACK_LINE(1363)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1363)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1363)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1363)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(1363)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1363)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1363)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(1363)
				u->zpp_inner = null();
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					o->zpp_pool = null();
					HX_STACK_LINE(1363)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1363)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1363)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1363)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					{
						HX_STACK_LINE(1363)
						if (((o->outer != null()))){
							HX_STACK_LINE(1363)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1363)
							o->outer = null();
						}
						HX_STACK_LINE(1363)
						o->_isimmutable = null();
						HX_STACK_LINE(1363)
						o->_validate = null();
						HX_STACK_LINE(1363)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1363)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1364)
			{
				HX_STACK_LINE(1364)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(1364)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1364)
					if ((_this->_immutable)){
						HX_STACK_LINE(1364)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1364)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1364)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1364)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(1364)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1364)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1364)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(1364)
				v->zpp_inner = null();
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					o->zpp_pool = null();
					HX_STACK_LINE(1364)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1364)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1364)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1364)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1364)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					{
						HX_STACK_LINE(1364)
						if (((o->outer != null()))){
							HX_STACK_LINE(1364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1364)
							o->outer = null();
						}
						HX_STACK_LINE(1364)
						o->_isimmutable = null();
						HX_STACK_LINE(1364)
						o->_validate = null();
						HX_STACK_LINE(1364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(1365)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1365)
					if ((_this->_immutable)){
						HX_STACK_LINE(1365)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1365)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1365)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1365)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(1365)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1365)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(1365)
				q->zpp_inner = null();
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					o->zpp_pool = null();
					HX_STACK_LINE(1365)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1365)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1365)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1365)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1365)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						if (((o->outer != null()))){
							HX_STACK_LINE(1365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1365)
							o->outer = null();
						}
						HX_STACK_LINE(1365)
						o->_isimmutable = null();
						HX_STACK_LINE(1365)
						o->_validate = null();
						HX_STACK_LINE(1365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1367)
		if ((start->zpp_inner->weak)){
			HX_STACK_LINE(1371)
			{
				HX_STACK_LINE(1371)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(1371)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1371)
					if ((_this->_immutable)){
						HX_STACK_LINE(1371)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1371)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1371)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1371)
				if ((start->zpp_inner->_inuse)){
					HX_STACK_LINE(1371)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1371)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1371)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(1371)
				start->zpp_inner = null();
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					o->zpp_pool = null();
					HX_STACK_LINE(1371)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1371)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						if (((o->outer != null()))){
							HX_STACK_LINE(1371)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1371)
							o->outer = null();
						}
						HX_STACK_LINE(1371)
						o->_isimmutable = null();
						HX_STACK_LINE(1371)
						o->_validate = null();
						HX_STACK_LINE(1371)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1371)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1372)
			true;
		}
		else{
			HX_STACK_LINE(1375)
			false;
		}
		HX_STACK_LINE(1378)
		if ((end->zpp_inner->weak)){
			HX_STACK_LINE(1382)
			{
				HX_STACK_LINE(1382)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(1382)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
				}
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1382)
					if ((_this->_immutable)){
						HX_STACK_LINE(1382)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1382)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1382)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1382)
				if ((end->zpp_inner->_inuse)){
					HX_STACK_LINE(1382)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1382)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1382)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(1382)
				end->zpp_inner = null();
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					o->zpp_pool = null();
					HX_STACK_LINE(1382)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1382)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1382)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1382)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1382)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						if (((o->outer != null()))){
							HX_STACK_LINE(1382)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1382)
							o->outer = null();
						}
						HX_STACK_LINE(1382)
						o->_isimmutable = null();
						HX_STACK_LINE(1382)
						o->_validate = null();
						HX_STACK_LINE(1382)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1382)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1383)
			true;
		}
		else{
			HX_STACK_LINE(1386)
			false;
		}
	}
return null();
}



ShapeDebug_obj::ShapeDebug_obj()
{
}

void ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeDebug);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	outFields->push(HX_CSTRING("thickness"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ShapeDebug*/ ,(int)offsetof(ShapeDebug_obj,zpp_inner_zn),HX_CSTRING("zpp_inner_zn")},
	{hx::fsFloat,(int)offsetof(ShapeDebug_obj,thickness),HX_CSTRING("thickness")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner_zn"),
	HX_CSTRING("thickness"),
	HX_CSTRING("clear"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawAABB"),
	HX_CSTRING("drawFilledTriangle"),
	HX_CSTRING("drawFilledCircle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawFilledPolygon"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawSpring"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#endif

Class ShapeDebug_obj::__mClass;

void ShapeDebug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.ShapeDebug"), hx::TCanCast< ShapeDebug_obj> ,sStaticFields,sMemberFields,
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

void ShapeDebug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
