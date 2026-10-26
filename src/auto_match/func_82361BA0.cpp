// Allocate a shared transform object through the system with category one.
// Initialize both reference counts, the control-block and object vtables, a
// zero position, and an identity rotation. The layout names are placeholders.

#include <new>
#include "game/Allocator_825089A0.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" { __vector4 __VMXGetReg(int); extern const __vector4 lbl_82196750; extern char lbl_821B903C[], lbl_821B5EBC[]; }
struct Object_82361BA0 {
 void *vtable; int state; __vector4 position, rotation;
 __forceinline Object_82361BA0() { vtable=lbl_821B5EBC; position=__VMXGetReg(77); state=0; rotation=lbl_82196750; }
};
struct Block_82361BA0 { void *vtable; int uses, weaks, pad; Object_82361BA0 object; };
struct Shared_82361BA0 { Object_82361BA0 *ptr; Block_82361BA0 *rep; };
extern "C" Shared_82361BA0 *fn_82361BA0(Shared_82361BA0 *self) {
 Block_82361BA0 *p=(Block_82361BA0 *)fn_825089A0()->vf24(0x48, 1);
 if (p) { p->uses=1; p->vtable=lbl_821B903C; p->weaks=1; ::new ((void *)&p->object) Object_82361BA0; }
 self->rep=p; self->ptr=&p->object; return self;
}
