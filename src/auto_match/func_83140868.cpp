// Releases the global buffer and resets its three pointer fields.
#include <new>
#include "game/Allocator_825089A0.h"
struct Buffer_83140868 { void *first, *last, *end; };
extern "C" Buffer_83140868 lbl_83213E6C;
extern "C" void fn_83140868() {
 void *p = lbl_83213E6C.first;
 if (p) fn_825089A0()->vf28(p);
 lbl_83213E6C.first=0; lbl_83213E6C.last=0; lbl_83213E6C.end=0;
}
