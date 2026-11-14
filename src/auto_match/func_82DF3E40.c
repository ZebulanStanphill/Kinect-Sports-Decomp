typedef struct Timer_82DF3E40 Timer_82DF3E40;
typedef struct Timer_82DF3E40_vt {
    void *slots[10];
    void (*update)(Timer_82DF3E40 *self, float dt);
} Timer_82DF3E40_vt;

struct Timer_82DF3E40 {
    Timer_82DF3E40_vt *vt;
    char pad4[0x24];
    float remaining;
};

void fn_82DF3E40(Timer_82DF3E40 *self, float dt)
{
    if (self->remaining > 0.0f) {
        self->remaining -= dt;
    }
    self->vt->update(self, dt);
}
