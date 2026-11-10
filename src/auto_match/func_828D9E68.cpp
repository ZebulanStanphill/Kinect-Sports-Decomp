#include <vector>
struct Element_828D9BF0 {int data[3];};
template <> void std::vector<Element_828D9BF0>::_Reserve(unsigned int);
struct ReserveAccess_828D9E68 : std::vector<Element_828D9BF0> {using std::vector<Element_828D9BF0>::_Reserve;};
typedef Element_828D9BF0 Elem_828D9E68;
typedef struct {Elem_828D9E68 *first,*last,*end;} Vec_828D9E68;
static __forceinline unsigned char Inside(Vec_828D9E68 *v,Elem_828D9E68 *x) {return x<v->last && v->first<=x;}
static __forceinline void Construct(Elem_828D9E68 *p,Elem_828D9E68 *x) {if(p) *p=*x;}
extern "C" void fn_828D9E68(Vec_828D9E68 *v,Elem_828D9E68 *x) {
 if(Inside(v,x)) {
  int idx=x-v->first;
  if(v->last==v->end) ((ReserveAccess_828D9E68 *)v)->_Reserve(1);
  Construct(v->last,&v->first[idx]);
 } else {
  if(v->last==v->end) ((ReserveAccess_828D9E68 *)v)->_Reserve(1);
  Construct(v->last,x);
 }
 ++v->last;
}
