// Update the state and record the system clock when the state changes.
struct System_828E0DE0 { virtual void vf00(); virtual void vf04(); virtual float vf08(); };
extern "C" System_828E0DE0 *fn_825089A0();
struct State_828E0DE0 { int pad[3]; int state; float time; };
extern "C" void fn_828E0DE0(State_828E0DE0 *self, int state) {
 if (state != self->state) { self->time = fn_825089A0()->vf08(); self->state = state; }
}
