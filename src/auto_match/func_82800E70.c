/* Sets the current value and re-evaluates the state through fn_82800C70 with a zero time step. */
typedef struct Obj_82800E70 { float value; float prev; float pad8; float speed; } Obj_82800E70;
extern void fn_82800C70(Obj_82800E70 *o, float t);
void fn_82800E70(Obj_82800E70 *o, float t)
{
    o->value = t;
    fn_82800C70(o, t + o->speed * 0.0f);
}
