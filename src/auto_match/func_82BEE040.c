typedef struct { char pad[0x50]; unsigned int state; } Obj_82BEE040;
extern void fn_82BEDF90(Obj_82BEE040 *o);
extern void fn_82BED7B8(Obj_82BEE040 *o);

void fn_82BEE040(Obj_82BEE040 *o)
{
    switch (o->state) {
    case 0: fn_82BED7B8(o); break;
    case 1: fn_82BEDF90(o); break;
    }
}
