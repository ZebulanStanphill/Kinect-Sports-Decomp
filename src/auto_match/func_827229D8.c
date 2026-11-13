typedef struct Ref_827229D8 { int pad; long refs; } Ref_827229D8;
typedef struct Sub_827229D8 { int flag; void *data; } Sub_827229D8;
typedef struct Obj_827229D8 {
    void *vtbl;
    char pad4[0xc];
    Sub_827229D8 sub;
    char pad18[0x30];
    unsigned int tagged48;
    unsigned int tagged4c;
} Obj_827229D8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_82687270(void *p);
extern char lbl_82010C70[];
extern char lbl_8200BD80[];

void fn_827229D8(Obj_827229D8 *self)
{
    Ref_827229D8 *r;
    Sub_827229D8 *sub;

    self->vtbl = lbl_82010C70;
    r = (Ref_827229D8 *)(self->tagged4c & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_827229D8 *)(self->tagged48 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    sub = &self->sub;
    if (!sub->flag && sub->data)
        fn_82687270(sub->data);
    self->vtbl = lbl_8200BD80;
}
