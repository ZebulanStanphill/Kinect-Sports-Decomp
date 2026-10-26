// Advances a timed activation counter and notifies the current context when
// its next interval has elapsed. State_828AEDA8 describes the observed fields;
// SystemClock_828AEDA8 exposes the system object's time method at slot 0x08.
// Both are placeholders for game types whose names have not been recovered.

struct SystemClock_828AEDA8 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" SystemClock_828AEDA8 *fn_825089A0();
extern "C" {
    int fn_82897BD0(void *);
    bool fn_82882300();
    int fn_828A1B60(void *);
    void fn_828823E0(int, int);
    extern float lbl_8200D8C4;
}
struct State_828AEDA8 {
    char pad[0x50];
    void *context;
    char pad2[0x5f];
    bool active;
    unsigned count;
    float last;
};
extern "C" void fn_828AEDA8(State_828AEDA8 *self) {
    float now=fn_825089A0()->vf08();
    bool ready=false;
    unsigned next=self->count+1;
    if (now-self->last >= (float)next * lbl_8200D8C4 && self->count < 5) {
        ready=true;
        self->count=next;
    }
    if (ready) {
        self->last=now;
        self->active=true;
        if (fn_82897BD0(self)!=-1 && !fn_82882300()) {
            int value=fn_828A1B60(self->context);
            fn_828823E0(fn_82897BD0(self),value);
        }
    }
}
