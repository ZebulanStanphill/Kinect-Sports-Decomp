typedef struct { char pad0[0x60]; float time; } Timer_824E13F0;
typedef struct { char pad0[0xfc]; Timer_824E13F0 *timer; } Obj_824E13F0;
extern int fn_824CCFC8(Obj_824E13F0 *o);
extern void fn_824CEC28(Obj_824E13F0 *o);
extern void fn_824CCAE8(Obj_824E13F0 *o, float dt);

void fn_824E13F0(Obj_824E13F0 *o, float dt)
{
    fn_824CEC28(o);
    fn_824CCAE8(o, dt);
    if (fn_824CCFC8(o) != 0) {
        o->timer->time = dt + o->timer->time;
    } else {
        o->timer->time = 0.0f;
    }
}
