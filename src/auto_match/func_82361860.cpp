// Lazily create the shared payload before forwarding it to the listener.
#include <new>
#include "game/Allocator_825089A0.h"
struct Payload_82361860;
extern "C" void fn_823BE8C8(Payload_82361860 *);
struct Payload_82361860 { char data[0x1a8]; Payload_82361860() { fn_823BE8C8(this); } };
extern "C" void *lbl_821B903C[];
extern "C" void fn_822315A0(void *);
struct Block_82361860 { void **vtable; int uses, weaks, pad; Payload_82361860 value; };
struct Shared_82361860 { Payload_82361860 *ptr; Block_82361860 *rep; };
struct Listener_82361860 { virtual void v0(); virtual void v4(); virtual void v8(); virtual void vc(); virtual void v10(); virtual void send(void *, Payload_82361860 *); };
struct State_82361860 { int pad[2]; Listener_82361860 *listener; };
extern "C" void fn_82361860(State_82361860 *self, void *arg, Shared_82361860 *shared) {
 Payload_82361860 *value;
 if (shared) {
  if (!shared->ptr) {
   Block_82361860 *p = (Block_82361860 *)fn_825089A0()->vf24(0x1b8, 1);
   if (p) { p->uses = 1; p->vtable = lbl_821B903C; p->weaks = 1; ::new ((void *)&p->value) Payload_82361860; }
   Block_82361860 *old = shared->rep;
   shared->rep = p; shared->ptr = &p->value;
   if (old) fn_822315A0(old);
  }
  value = shared->ptr;
 } else value = 0;
 self->listener->send(arg, value);
}
