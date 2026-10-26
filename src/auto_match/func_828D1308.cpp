// Restore the object's destructor vtable and destroy its vector member.
// Element_828D1308 stands in for the game's trivial element type. The
// vector releases its storage through the system allocator.

#include <vector>
#include "game/Allocator_825089A0.h"
extern "C" void *lbl_820267A4[];
struct Element_828D1308 {int value;};
typedef std::vector<Element_828D1308,Allocator_825089A0<Element_828D1308,1> > Vector;
struct Object_828D1308 {void **vt; int pad[2]; Vector vector;};
extern "C" void fn_828D1308(Object_828D1308 *self) {self->vt=lbl_820267A4; self->vector.~Vector();}
