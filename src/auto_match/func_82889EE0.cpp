// Initialize four scalar members and two empty lists. Their sentinel nodes
// use allocation category 2 of the system allocator. Element_82889EE0 is a
// placeholder for the game's four-byte list value type.

namespace std {extern "C" __declspec(noreturn) void fn_82F622A8(const char *);}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"
struct Element_82889EE0 {int value;};
typedef Allocator_825089A0<Element_82889EE0,2> Allocator;
typedef std::list<Element_82889EE0,Allocator> List;
struct Object_82889EE0 {
 char flag; int a,b,c,d; List first,second;
 Object_82889EE0():flag(0),a(0),b(0),c(0),d(0) {}
};
extern "C" Object_82889EE0 *fn_82889EE0(Object_82889EE0 *self) {
 self->Object_82889EE0::Object_82889EE0();return self;
}
