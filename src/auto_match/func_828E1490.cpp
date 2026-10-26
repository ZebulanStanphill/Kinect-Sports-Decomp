// Updates the transition flags and records the system time when entering
// state six. The structure names describe only the fields used here.
struct System_828E1490 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
};
struct State_828E1490 {
    char pad00[0xc]; int state; float time; int pad14; void *source;
    char pad1c[0xc]; unsigned char ready;
};
extern "C" {
System_828E1490 *fn_825089A0();
void *fn_828D45F8(State_828E1490 *);
void *fn_828D47D0(void *, int, int);
bool fn_828ACCE8(void *);
bool fn_828ACC40(void *);
void fn_828E0DE0(State_828E1490 *, int);
}
static __forceinline void *lookup(State_828E1490 *self, int kind) {
void *context = fn_828D45F8(self); return fn_828D47D0(context, kind, 0);
}
extern "C" void fn_828E1490(State_828E1490 *self)
{
    if (lookup(self, 3)) {
        if (lookup(self, 4)) self->ready = 1;
    }
    if (fn_828ACCE8(self->source)) {
        if (self->state != 6) {
            self->time = fn_825089A0()->vf08();
            self->state = 6;
            return;
        }
    } else if (fn_828ACC40(self->source)) fn_828E0DE0(self, 0);
}
