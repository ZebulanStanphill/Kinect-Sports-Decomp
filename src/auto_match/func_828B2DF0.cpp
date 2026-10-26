// Initialize a timed message and copy its 42-byte payload.
// The system's 64-bit clock supplies the deadline base. The final flag chooses
// a delay of 500 or 2000 clock units.

#include <cstring>
struct Clock_828B2DF0 { virtual void vf00(); virtual void vf04(); virtual float vf08(); virtual __int64 vf0C(); };
extern "C" { Clock_828B2DF0 *fn_825089A0(); extern char lbl_82024D24[]; }
struct Message_828B2DF0 { void *vtable; int pad; int kind; int pad2; __int64 deadline; char payload[42]; };
extern "C" Message_828B2DF0 *fn_828B2DF0(Message_828B2DF0 *self, int kind, const void *payload, unsigned char fast) {
 self->kind = kind;
 self->vtable = lbl_82024D24;
 __int64 delay; if (fast) delay=500; else delay=2000;
 self->deadline = fn_825089A0()->vf0C() + delay;
 memcpy(self->payload, payload, 42);
 return self;
}
