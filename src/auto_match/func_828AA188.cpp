#include <vector>
struct Element_828AA110 { unsigned __int64 a,b; };
template<> void std::vector<Element_828AA110>::_Reserve(size_type);
static __forceinline void Construct_828AA188(Element_828AA110 *p,const Element_828AA110 *v) {if(p) {p->a=v->a; p->b=v->b;}}
struct Vec_828AA188 : std::vector<Element_828AA110> {
__forceinline void Push(const Element_828AA110 *v) {
if(_Inside(v)) {size_type i=v-_Myfirst; if(_Mylast==_Myend) _Reserve(1); Construct_828AA188(_Mylast,&_Myfirst[i]);}
else {if(_Mylast==_Myend) _Reserve(1); Construct_828AA188(_Mylast,v);}
++_Mylast;
}
};
extern "C" void fn_828AA188(Vec_828AA188 *p,const Element_828AA110 *v) {p->Push(v);}
