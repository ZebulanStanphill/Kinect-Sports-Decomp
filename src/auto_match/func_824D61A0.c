typedef struct { char pad0[0x160]; float time; } Obj_824D61A0;
extern int fn_824CCFC8(Obj_824D61A0 *o);
extern void fn_824CEC28(Obj_824D61A0 *o);
extern void fn_824CCAE8(Obj_824D61A0 *o, float dt);

void fn_824D61A0(Obj_824D61A0 *o, float dt)
{
    o->time = fn_824CCFC8(o) ? o->time + dt : 0.0f;
    fn_824CEC28(o);
    fn_824CCAE8(o, dt);
}
