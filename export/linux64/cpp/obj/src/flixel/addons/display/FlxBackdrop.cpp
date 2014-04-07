#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxBackdrop_obj::__construct(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY)
{
HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","new",0xbcdf9a65,"flixel.addons.display.FlxBackdrop.new","flixel/addons/display/FlxBackdrop.hx",19,0x7f3b228c)

HX_STACK_ARG(Graphic,"Graphic")

HX_STACK_ARG(__o_ScrollX,"ScrollX")

HX_STACK_ARG(__o_ScrollY,"ScrollY")

HX_STACK_ARG(__o_RepeatX,"RepeatX")

HX_STACK_ARG(__o_RepeatY,"RepeatY")
Float ScrollX = __o_ScrollX.Default(1);
Float ScrollY = __o_ScrollY.Default(1);
bool RepeatX = __o_RepeatX.Default(true);
bool RepeatY = __o_RepeatY.Default(true);
{
	HX_STACK_LINE(30)
	this->_numTiles = (int)0;
	HX_STACK_LINE(46)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(48)
	this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(Graphic,null(),null()));
	HX_STACK_LINE(50)
	if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
		HX_STACK_LINE(52)
		int _g = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,_g,this->cachedGraphics->bitmap->get_height(),null(),null(),null(),null());
		HX_STACK_LINE(53)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(54)
		this->region->height = this->cachedGraphics->bitmap->get_height();
	}
	else{
		HX_STACK_LINE(58)
		this->region = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();
	}
	HX_STACK_LINE(61)
	int w = this->region->width;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(62)
	int h = this->region->height;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(64)
	if ((RepeatX)){
		HX_STACK_LINE(66)
		hx::AddEq(w,::flixel::FlxG_obj::width);
	}
	HX_STACK_LINE(68)
	if ((RepeatY)){
		HX_STACK_LINE(70)
		hx::AddEq(h,::flixel::FlxG_obj::height);
	}
	HX_STACK_LINE(76)
	this->_ppoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(78)
	this->_scrollW = this->region->width;
	HX_STACK_LINE(79)
	this->_scrollH = this->region->height;
	HX_STACK_LINE(80)
	this->_repeatX = RepeatX;
	HX_STACK_LINE(81)
	this->_repeatY = RepeatY;
	HX_STACK_LINE(84)
	this->_tileInfo = Array_obj< Float >::__new();
	HX_STACK_LINE(85)
	this->_numTiles = (int)0;
	HX_STACK_LINE(90)
	while(((this->_ppoint->y < (h + this->region->height)))){
		HX_STACK_LINE(92)
		while(((this->_ppoint->x < (w + this->region->width)))){
			HX_STACK_LINE(97)
			this->_tileInfo->push(this->_ppoint->x);
			HX_STACK_LINE(98)
			this->_tileInfo->push(this->_ppoint->y);
			HX_STACK_LINE(99)
			(this->_numTiles)++;
			HX_STACK_LINE(101)
			hx::AddEq(this->_ppoint->x,this->region->width);
		}
		HX_STACK_LINE(103)
		this->_ppoint->x = (int)0;
		HX_STACK_LINE(104)
		hx::AddEq(this->_ppoint->y,this->region->height);
	}
	HX_STACK_LINE(107)
	this->scrollFactor->set_x(ScrollX);
	HX_STACK_LINE(108)
	this->scrollFactor->set_y(ScrollY);
	HX_STACK_LINE(110)
	this->updateFrameData();
}
;
	return null();
}

//FlxBackdrop_obj::~FlxBackdrop_obj() { }

Dynamic FlxBackdrop_obj::__CreateEmpty() { return  new FlxBackdrop_obj; }
hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(Graphic,__o_ScrollX,__o_ScrollY,__o_RepeatX,__o_RepeatY);
	return result;}

Dynamic FlxBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxBackdrop_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","destroy",0x54bfdd7f,"flixel.addons.display.FlxBackdrop.destroy","flixel/addons/display/FlxBackdrop.hx",114,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->_tileInfo = null();
		HX_STACK_LINE(124)
		this->_ppoint = null();
		HX_STACK_LINE(126)
		this->super::destroy();
	}
return null();
}


Void FlxBackdrop_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","draw",0x8035265f,"flixel.addons.display.FlxBackdrop.draw","flixel/addons/display/FlxBackdrop.hx",130,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		if (((this->cameras == null()))){
			HX_STACK_LINE(133)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(135)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(136)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			int _g = l;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while(((_g1 < _g))){
				HX_STACK_LINE(138)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(140)
				camera = this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
				HX_STACK_LINE(142)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(144)
					continue;
				}
				HX_STACK_LINE(148)
				if ((this->_repeatX)){
					HX_STACK_LINE(150)
					this->_ppoint->x = hx::Mod(((this->x - (camera->scroll->x * this->scrollFactor->x))),this->_scrollW);
					HX_STACK_LINE(151)
					if (((this->_ppoint->x > (int)0))){
						HX_STACK_LINE(151)
						hx::SubEq(this->_ppoint->x,this->_scrollW);
					}
				}
				else{
					HX_STACK_LINE(155)
					this->_ppoint->x = (this->x - (camera->scroll->x * this->scrollFactor->x));
				}
				HX_STACK_LINE(159)
				if ((this->_repeatY)){
					HX_STACK_LINE(161)
					this->_ppoint->y = hx::Mod(((this->y - (camera->scroll->y * this->scrollFactor->y))),this->_scrollH);
					HX_STACK_LINE(162)
					if (((this->_ppoint->y > (int)0))){
						HX_STACK_LINE(162)
						hx::SubEq(this->_ppoint->y,this->_scrollH);
					}
				}
				else{
					HX_STACK_LINE(166)
					this->_ppoint->y = (this->y - (camera->scroll->y * this->scrollFactor->y));
				}
				HX_STACK_LINE(173)
				if (((this->cachedGraphics == null()))){
					HX_STACK_LINE(175)
					return null();
				}
				HX_STACK_LINE(178)
				Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
				HX_STACK_LINE(179)
				int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
				HX_STACK_LINE(181)
				::flixel::system::layer::DrawStackItem drawItem = camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
				HX_STACK_LINE(186)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(187)
				currIndex = drawItem->position;
				HX_STACK_LINE(189)
				int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
				HX_STACK_LINE(190)
				Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
				HX_STACK_LINE(191)
				Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(193)
					int _g2 = this->_numTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(193)
					while(((_g3 < _g2))){
						HX_STACK_LINE(193)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(195)
						currPosInArr = (j * (int)2);
						HX_STACK_LINE(196)
						currTileX = this->_tileInfo->__get(currPosInArr);
						HX_STACK_LINE(197)
						currTileY = this->_tileInfo->__get((currPosInArr + (int)1));
						HX_STACK_LINE(199)
						currDrawData[(currIndex)++] = (this->_ppoint->x + currTileX);
						HX_STACK_LINE(200)
						currDrawData[(currIndex)++] = (this->_ppoint->y + currTileY);
						HX_STACK_LINE(205)
						currDrawData[(currIndex)++] = this->_tileID;
						HX_STACK_LINE(207)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(208)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(209)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(210)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(214)
						currDrawData[(currIndex)++] = 1.0;
					}
				}
				HX_STACK_LINE(218)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxBackdrop_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","updateFrameData",0xa0442333,"flixel.addons.display.FlxBackdrop.updateFrameData","flixel/addons/display/FlxBackdrop.hx",226,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(228)
			::flixel::system::layer::TileSheetData _this = this->cachedGraphics->get_tilesheet();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			::flash::geom::Rectangle tileRect = ::flash::geom::Rectangle_obj::__new(this->region->startX,this->region->startY,this->_scrollW,this->_scrollH);		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(228)
			::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(228)
			this->_tileID = _this->tileSheet->addTileRectID(tileRect,point);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBackdrop_obj,updateFrameData,(void))


FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_tileID,"_tileID");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_tileID,"_tileID");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBackdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return _ppoint; }
		if (HX_FIELD_EQ(inName,"_tileID") ) { return _tileID; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return _scrollW; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return _scrollH; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return _tileInfo; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileID") ) { _tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ppoint"));
	outFields->push(HX_CSTRING("_scrollW"));
	outFields->push(HX_CSTRING("_scrollH"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_tileID"));
	outFields->push(HX_CSTRING("_tileInfo"));
	outFields->push(HX_CSTRING("_numTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(FlxBackdrop_obj,_ppoint),HX_CSTRING("_ppoint")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollW),HX_CSTRING("_scrollW")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollH),HX_CSTRING("_scrollH")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatX),HX_CSTRING("_repeatX")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatY),HX_CSTRING("_repeatY")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_tileID),HX_CSTRING("_tileID")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBackdrop_obj,_tileInfo),HX_CSTRING("_tileInfo")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_numTiles),HX_CSTRING("_numTiles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_ppoint"),
	HX_CSTRING("_scrollW"),
	HX_CSTRING("_scrollH"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_tileID"),
	HX_CSTRING("_tileInfo"),
	HX_CSTRING("_numTiles"),
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateFrameData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#endif

Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.display.FlxBackdrop"), hx::TCanCast< FlxBackdrop_obj> ,sStaticFields,sMemberFields,
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

void FlxBackdrop_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
