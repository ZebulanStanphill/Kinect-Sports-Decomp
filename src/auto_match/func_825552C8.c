extern int fn_82BFEDC8(void *p);
extern void fn_82BFEDE8(void *p, int *out);

typedef struct {
    char pad[0x18];
    void *obj;
} Obj_825552C8;

int fn_825552C8(Obj_825552C8 *o)
{
    int state[4];

    if (o->obj != 0) {
        fn_82BFEDE8(o->obj, state);
        if (state[0] == 3) {
            return fn_82BFEDC8(o->obj) >= 0;
        }
    }
    return 0;
}
