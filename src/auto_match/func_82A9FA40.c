extern void fn_82AAFB78(void);
extern int fn_82AB0E98(void *p);

typedef struct {
    int a;
    int b;
    int c;
} Obj_82A9FA40;

int fn_82A9FA40(Obj_82A9FA40 *o)
{
    o->c = 0;
    o->a = 0;
    o->b = 0;
    if (fn_82AB0E98(o) == 0) {
        fn_82AAFB78();
        return 0;
    }
    return 0x8007000e;
}
