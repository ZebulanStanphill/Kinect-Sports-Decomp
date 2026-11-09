typedef struct Obj_824A6F50 Obj_824A6F50;
typedef struct VTable_824A6F50 { void *pad[9]; void (*method)(Obj_824A6F50 *); } VTable_824A6F50;
struct Obj_824A6F50 { VTable_824A6F50 *vt; int pad[14]; struct State_824A6F50 *state; };
struct State_824A6F50 { int pad[15]; int active; };
extern void fn_824A7028(Obj_824A6F50 *);
extern void fn_824A6B70(Obj_824A6F50 *);
void fn_824A6F50(Obj_824A6F50 *self)
{
    if (self->state->active != 0) {
        fn_824A7028(self);
        fn_824A6B70(self);
    } else {
        self->vt->method(self);
    }
}
