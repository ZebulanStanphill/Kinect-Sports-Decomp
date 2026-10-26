// Advances the active state using elapsed system time and signals completion.
struct Clock_828B15B0 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828B15B0 *fn_825089A0();
struct Target_828B15B0 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual void vf0C(); virtual void vf10(int);
};
struct Owner_828B15B0 { int pad; int active; char pad2[0x44]; char *state; };
struct State_828B15B0 { int pad[2]; unsigned __int64 time; int pad2; Target_828B15B0 *target; Owner_828B15B0 *owner; };
extern "C" {
int fn_828B0ED0(void *, int, int);
bool fn_828B0528(Target_828B15B0 *);
void fn_828B1468(State_828B15B0 *, int);
void fn_828D9438(State_828B15B0 *, unsigned __int64);
void fn_828D8EF8(State_828B15B0 *, unsigned __int64);
void fn_828D94E0(State_828B15B0 *, unsigned __int64);
void fn_828D90D8(State_828B15B0 *, unsigned __int64);
void fn_828D9620(State_828B15B0 *, unsigned __int64);
void fn_828D9168(State_828B15B0 *, unsigned __int64);
void fn_828D97D8(State_828B15B0 *, unsigned __int64);
}
extern "C" int fn_828B15B0(State_828B15B0 *self)
{
    if (self->owner->active == 1) {
        unsigned __int64 elapsed = fn_825089A0()->vf0C() - self->time;
        if (fn_828B0ED0(self->owner->state + 0x38, 0, 0) != 0 &&
            fn_828B0ED0(self->owner->state + 0x38, 0, 0) != 7 &&
            !fn_828B0528(self->target)) fn_828B1468(self, 7);
        switch (fn_828B0ED0(self->owner->state + 0x38, 0, 0)) {
        case 0: fn_828D9438(self, elapsed); break;
        case 1: fn_828D8EF8(self, elapsed); break;
        case 2: fn_828D94E0(self, elapsed); break;
        case 3: fn_828D90D8(self, elapsed); break;
        case 4: fn_828D9620(self, elapsed); break;
        case 5: fn_828D9168(self, elapsed); break;
        case 6: fn_828D97D8(self, elapsed); break;
        }
        if (fn_828B0ED0(self->owner->state + 0x38, 0, 0) == 7) {
            self->target->vf10(0);
            return 1;
        }
    }
    return 0;
}
