// Record the completion time once for an active operation. An operation in
// the alternate ready state is advanced with command five.
struct System_828E0E40 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
};
struct State_828E0E40 { int pad[3]; int active; float time; int pad14; void *operation; };
extern "C" {
System_828E0E40 *fn_825089A0();
unsigned char fn_828ACC40(void *);
unsigned char fn_828ACCE8(void *);
void fn_828AE818(void *, int);
void fn_828E0E40(State_828E0E40 *self) {
    if (fn_828ACC40(self->operation) != 0) {
        if (self->active != 0) {
            self->time = fn_825089A0()->vf08();
            self->active = 0;
            return;
        }
    } else {
        if (fn_828ACCE8(self->operation) != 0)
            fn_828AE818(self->operation, 5);
    }
}
}
