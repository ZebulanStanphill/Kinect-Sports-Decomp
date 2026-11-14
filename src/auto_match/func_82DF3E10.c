typedef struct Timer_82DF3E10 Timer_82DF3E10;
typedef struct Timer_82DF3E10_vt {
    void *slots[9];
    void (*expire)(Timer_82DF3E10 *self);
} Timer_82DF3E10_vt;

struct Timer_82DF3E10 {
    Timer_82DF3E10_vt *vt;
    char pad4[0x20];
    float period;
    float remaining;
};

void fn_82DF3E10(Timer_82DF3E10 *self)
{
    if (self->remaining > 0.0f) {
        return;
    }
    self->remaining = self->period;
    self->vt->expire(self);
}
