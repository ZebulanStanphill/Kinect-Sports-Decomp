// Advance the controller state when its service readiness or timeout changes.
struct System_828E1D08 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
};
struct Owner_828E1D08 { int pad[3]; int state; float time; int pad14; void *service; };
extern "C" {
System_828E1D08 *fn_825089A0();
unsigned char fn_828ACCE8(void *);
unsigned char fn_828865A0(Owner_828E1D08 *);
void *fn_828D45F8(Owner_828E1D08 *);
void *fn_828D47D0(void *, int, int);
unsigned char fn_8289AB78(void *);
void fn_828E09C8(void *);
void fn_828E0390(Owner_828E1D08 *, int);
void fn_828E0DE0(Owner_828E1D08 *, int);
extern float lbl_82027070;
static unsigned char timedOut(Owner_828E1D08 *self) { float deadline=self->time+lbl_82027070; return fn_825089A0()->vf08()>deadline; }
static void setState(Owner_828E1D08 *self, int state) { self->time=fn_825089A0()->vf08(); self->state=state; }
void fn_828E1D08(Owner_828E1D08 *self) {
    if (!fn_828ACCE8(self->service)) {
        if (fn_828865A0(self)) fn_828E09C8(fn_828D45F8(self));
        if (self->state == 0) return;
        setState(self,0);
    } else {
        void *service;
        if (fn_828865A0(self) && (service = fn_828D45F8(self), fn_828D47D0(service, 3, 0))) {
            service = fn_828D45F8(self);
            if (fn_828D47D0(service, 4, 0)) {
                if (fn_8289AB78(fn_828D45F8(self))) {
                    fn_828E0390(self, 2);
                    return;
                }
                if (!timedOut(self)) return;
            }
            else {
                fn_828E09C8(fn_828D45F8(self));
                fn_828E0DE0(self, 7);
                return;
            }
            fn_828E09C8(fn_828D45F8(self));
            fn_828E0DE0(self, 7);
            return;
        }
        if (fn_828865A0(self)) fn_828E09C8(fn_828D45F8(self));
        if (self->state == 7) return;
        setState(self,7);
    }
}
}
