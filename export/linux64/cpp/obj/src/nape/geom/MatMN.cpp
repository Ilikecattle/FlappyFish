#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace nape{
namespace geom{

Void MatMN_obj::__construct(int rows,int cols)
{
HX_STACK_FRAME("nape.geom.MatMN","new",0x580e1be7,"nape.geom.MatMN.new","nape/geom/MatMN.hx",179,0x8baed9c9)

HX_STACK_ARG(rows,"rows")

HX_STACK_ARG(cols,"cols")
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(248)
	if (((bool((rows <= (int)0)) || bool((cols <= (int)0))))){
		HX_STACK_LINE(249)
		HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN::dimensions cannot be < 1"));
	}
	HX_STACK_LINE(252)
	this->zpp_inner = ::zpp_nape::geom::ZPP_MatMN_obj::__new(rows,cols);
	HX_STACK_LINE(253)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//MatMN_obj::~MatMN_obj() { }

Dynamic MatMN_obj::__CreateEmpty() { return  new MatMN_obj; }
hx::ObjectPtr< MatMN_obj > MatMN_obj::__new(int rows,int cols)
{  hx::ObjectPtr< MatMN_obj > result = new MatMN_obj();
	result->__construct(rows,cols);
	return result;}

Dynamic MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatMN_obj > result = new MatMN_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int MatMN_obj::get_rows( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_rows",0xefad3bbb,"nape.geom.MatMN.get_rows","nape/geom/MatMN.hx",190,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->zpp_inner->m;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_rows,return )

int MatMN_obj::get_cols( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_cols",0xe5c2fed5,"nape.geom.MatMN.get_cols","nape/geom/MatMN.hx",198,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return this->zpp_inner->n;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_cols,return )

Float MatMN_obj::x( int row,int col){
	HX_STACK_FRAME("nape.geom.MatMN","x",0x4f2a8c3f,"nape.geom.MatMN.x","nape/geom/MatMN.hx",209,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_LINE(211)
	if (((bool((bool((bool((row < (int)0)) || bool((col < (int)0)))) || bool((row >= this->zpp_inner->m)))) || bool((col >= this->zpp_inner->n))))){
		HX_STACK_LINE(212)
		HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
	}
	HX_STACK_LINE(215)
	return this->zpp_inner->x->__get(((row * this->zpp_inner->n) + col));
}


HX_DEFINE_DYNAMIC_FUNC2(MatMN_obj,x,return )

Float MatMN_obj::setx( int row,int col,Float x){
	HX_STACK_FRAME("nape.geom.MatMN","setx",0xb7985d2f,"nape.geom.MatMN.setx","nape/geom/MatMN.hx",228,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(230)
	if (((bool((bool((bool((row < (int)0)) || bool((col < (int)0)))) || bool((row >= this->zpp_inner->m)))) || bool((col >= this->zpp_inner->n))))){
		HX_STACK_LINE(231)
		HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
	}
	HX_STACK_LINE(234)
	return this->zpp_inner->x[((row * this->zpp_inner->n) + col)] = x;
}


HX_DEFINE_DYNAMIC_FUNC3(MatMN_obj,setx,return )

::String MatMN_obj::toString( ){
	HX_STACK_FRAME("nape.geom.MatMN","toString",0x5cb25bc5,"nape.geom.MatMN.toString","nape/geom/MatMN.hx",258,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::String ret = HX_CSTRING("{ ");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while(((_g1 < _g))){
			HX_STACK_LINE(261)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			if ((!(fst))){
				HX_STACK_LINE(262)
				hx::AddEq(ret,HX_CSTRING("; "));
			}
			HX_STACK_LINE(263)
			fst = false;
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(264)
				int _g2 = this->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(264)
				while(((_g3 < _g2))){
					HX_STACK_LINE(264)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Float Block( int &i,::nape::geom::MatMN_obj *__this,int &j){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/MatMN.hx",264,0x8baed9c9)
							{
								HX_STACK_LINE(264)
								if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= __this->zpp_inner->m)))) || bool((j >= __this->zpp_inner->n))))){
									HX_STACK_LINE(264)
									HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
								}
								HX_STACK_LINE(264)
								return __this->zpp_inner->x->__get(((i * __this->zpp_inner->n) + j));
							}
							return null();
						}
					};
					HX_STACK_LINE(264)
					hx::AddEq(ret,(_Function_5_1::Block(i,this,j) + HX_CSTRING(" ")));
				}
			}
		}
	}
	HX_STACK_LINE(266)
	hx::AddEq(ret,HX_CSTRING("}"));
	HX_STACK_LINE(267)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,toString,return )

::nape::geom::MatMN MatMN_obj::transpose( ){
	HX_STACK_FRAME("nape.geom.MatMN","transpose",0xe3057b40,"nape.geom.MatMN.transpose","nape/geom/MatMN.hx",274,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner->n,this->zpp_inner->m);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while(((_g1 < _g))){
			HX_STACK_LINE(276)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(277)
				int _g2 = this->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(277)
				while(((_g3 < _g2))){
					HX_STACK_LINE(277)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(277)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= this->zpp_inner->m)))) || bool((j >= this->zpp_inner->n))))){
							HX_STACK_LINE(277)
							HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
						}
						HX_STACK_LINE(277)
						x = this->zpp_inner->x->__get(((i * this->zpp_inner->n) + j));
					}
					HX_STACK_LINE(277)
					if (((bool((bool((bool((j < (int)0)) || bool((i < (int)0)))) || bool((j >= ret->zpp_inner->m)))) || bool((i >= ret->zpp_inner->n))))){
						HX_STACK_LINE(277)
						HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
					}
					HX_STACK_LINE(277)
					ret->zpp_inner->x[((j * ret->zpp_inner->n) + i)] = x;
				}
			}
		}
	}
	HX_STACK_LINE(279)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,transpose,return )

::nape::geom::MatMN MatMN_obj::mul( ::nape::geom::MatMN matrix){
	HX_STACK_FRAME("nape.geom.MatMN","mul",0x580d678b,"nape.geom.MatMN.mul","nape/geom/MatMN.hx",294,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(295)
	::nape::geom::MatMN y = matrix;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(297)
	if (((this->zpp_inner->n != y->zpp_inner->m))){
		HX_STACK_LINE(298)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Matrix dimensions aren't compatible"));
	}
	HX_STACK_LINE(301)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner->m,y->zpp_inner->n);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		while(((_g1 < _g))){
			HX_STACK_LINE(302)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(303)
				int _g2 = y->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(303)
				while(((_g3 < _g2))){
					HX_STACK_LINE(303)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(304)
					Float v = 0.0;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(305)
						int _g4 = this->zpp_inner->n;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(305)
						while(((_g5 < _g4))){
							HX_STACK_LINE(305)
							int k = (_g5)++;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(305)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								if (((bool((bool((bool((i < (int)0)) || bool((k < (int)0)))) || bool((i >= this->zpp_inner->m)))) || bool((k >= this->zpp_inner->n))))){
									HX_STACK_LINE(305)
									HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
								}
								HX_STACK_LINE(305)
								_g6 = this->zpp_inner->x->__get(((i * this->zpp_inner->n) + k));
							}
							struct _Function_7_1{
								inline static Float Block( int &j,::nape::geom::MatMN &y,int &k){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/MatMN.hx",305,0x8baed9c9)
									{
										HX_STACK_LINE(305)
										if (((bool((bool((bool((k < (int)0)) || bool((j < (int)0)))) || bool((k >= y->zpp_inner->m)))) || bool((j >= y->zpp_inner->n))))){
											HX_STACK_LINE(305)
											HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
										}
										HX_STACK_LINE(305)
										return y->zpp_inner->x->__get(((k * y->zpp_inner->n) + j));
									}
									return null();
								}
							};
							HX_STACK_LINE(305)
							hx::AddEq(v,(_g6 * _Function_7_1::Block(j,y,k)));
						}
					}
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= ret->zpp_inner->m)))) || bool((j >= ret->zpp_inner->n))))){
							HX_STACK_LINE(306)
							HX_STACK_DO_THROW(HX_CSTRING("Error: MatMN indices out of range"));
						}
						HX_STACK_LINE(306)
						ret->zpp_inner->x[((i * ret->zpp_inner->n) + j)] = v;
					}
				}
			}
		}
	}
	HX_STACK_LINE(309)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(MatMN_obj,mul,return )


MatMN_obj::MatMN_obj()
{
}

void MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatMN);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic MatMN_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return get_rows(); }
		if (HX_FIELD_EQ(inName,"cols") ) { return get_cols(); }
		if (HX_FIELD_EQ(inName,"setx") ) { return setx_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return get_cols_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("cols"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MatMN*/ ,(int)offsetof(MatMN_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_rows"),
	HX_CSTRING("get_cols"),
	HX_CSTRING("x"),
	HX_CSTRING("setx"),
	HX_CSTRING("toString"),
	HX_CSTRING("transpose"),
	HX_CSTRING("mul"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#endif

Class MatMN_obj::__mClass;

void MatMN_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.MatMN"), hx::TCanCast< MatMN_obj> ,sStaticFields,sMemberFields,
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

void MatMN_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
