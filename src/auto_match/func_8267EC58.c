typedef struct Obj_8267EC58 {
    long refs;
    void *buf;
    int pad8[2];
    int member;   /* 0x10 */
} Obj_8267EC58;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826EA050(void *p);

static __forceinline void Delete_8267EC58(Obj_8267EC58 *o)
{
    if (o != 0) {
        fn_826EA050(&o->member);
        fn_8267BE38(o->buf);
        fn_8267BE38(o);
    }
}

void fn_8267EC58(Obj_8267EC58 *self)
{
    if (_InterlockedExchangeAdd(&self->refs, -1) - 1 == 0) {
        Delete_8267EC58(self);
    }
}
