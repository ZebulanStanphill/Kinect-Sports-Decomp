typedef struct {
    char pad0[0x30];
    char sub30[0x54];
    unsigned char flag84;
} Obj_82D5BEA8;

extern void fn_82D74A38(Obj_82D5BEA8 *o);
extern void fn_82D6FD90(void *p);

void fn_82D5BEA8(Obj_82D5BEA8 *o)
{
    if (o->flag84 != 0) {
        fn_82D74A38(o);
        return;
    }
    fn_82D6FD90(o->sub30);
}
