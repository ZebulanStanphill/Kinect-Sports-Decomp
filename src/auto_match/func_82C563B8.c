typedef struct Pool_82C563B8 {
    unsigned int begin;
    unsigned int end;
    void *used;
    int lock;
} Pool_82C563B8;

typedef struct Obj_82C563B8 {
    char pad0[0x34];
    Pool_82C563B8 pool;
} Obj_82C563B8;

extern void fn_82C44F48(Pool_82C563B8 *p, void *x);
extern void fn_82C53970(void *x);
void fn_82C563B8(Obj_82C563B8 *self, void *x)
{
    if (self->pool.used != 0) {
        fn_82C44F48(&self->pool, x);
    } else {
        fn_82C53970(x);
    }
}
