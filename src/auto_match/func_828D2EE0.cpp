// Return the signed difference between the system clock and the stored time.
// Clock_828D2EE0 describes the clock slots used by this function; the stored
// timestamp is a 64-bit value at offset 0x10.

struct Clock_828D2EE0 { virtual void vf00(); virtual void vf04(); virtual float vf08(); virtual __int64 vf0C(); };
extern "C" Clock_828D2EE0 *fn_825089A0();
struct Timer_828D2EE0 { int pad[4]; __int64 deadline; };
extern "C" __int64 fn_828D2EE0(Timer_828D2EE0 *self) {
 return fn_825089A0()->vf0C() - self->deadline;
}
