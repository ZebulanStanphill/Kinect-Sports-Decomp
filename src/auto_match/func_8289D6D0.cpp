// Constructs a state object with nested initialized data, an empty
// list, and a tree. The placeholder types describe the observed layout; the
// list elements occupy 24 bytes, and its sentinel uses allocation category 1.
// The tree constructor retains the configured specialization for the shared
// Element_82899700 placeholder. The wrapper preserves the fn_ entry point.
// The larger inlining limit reproduces the game's link-time inlining.

#include <list>
#include <set>
#include "game/Allocator_825089A0.h"
extern "C" { extern char lbl_82023BA4[], lbl_82197140[]; }
struct Element_82899700 {
    int data[4];
};
typedef Allocator_825089A0<Element_82899700,1> TreeAllocator;
typedef std::_Tree_val<std::_Tset_traits<Element_82899700,std::less<Element_82899700>,TreeAllocator,false> > TreeVal;
template<> TreeVal::_Tree_val(const key_compare &, allocator_type);
struct Element_8289D6D0 {
    int data[6];
};
typedef std::list<Element_8289D6D0,Allocator_825089A0<Element_8289D6D0,1> > List;
struct Data_8289D6D0 {
    int a0,a1,a2,a3,a4,a5;
    bool a;
    int b;
    bool c;
    int d,e;
    List list;
    __forceinline Data_8289D6D0() : a0(0),a1(0),a2(0),a3(0),a4(0),a5(0),a(false),b(0),c(false),d(0),e(0) {}
};
struct Base_8289D6D0 {
    void *name;
    int input;
    Data_8289D6D0 data;
    __forceinline Base_8289D6D0(int n) : name(lbl_82197140),input(n) {}
};
struct State_8289D6D0 {
    void *vtable;
    Base_8289D6D0 base;
    TreeVal tree;
    __forceinline State_8289D6D0(int n) : vtable(lbl_82023BA4),base(n),tree(TreeVal::key_compare(),TreeAllocator()) {}
};
extern "C" State_8289D6D0 *fn_8289D6D0(State_8289D6D0 *self,int n) { self->State_8289D6D0::State_8289D6D0(n);
    return self; }
