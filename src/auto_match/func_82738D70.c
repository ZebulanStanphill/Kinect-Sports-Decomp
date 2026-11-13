typedef struct Ref_82738D70 { int pad; long refs; } Ref_82738D70;
typedef struct Buf_82738D70 {
    char *data;
    unsigned int size;
    int p8;
    unsigned int tagged;   /* 0x0C */
} Buf_82738D70;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_827381E0(char *p, unsigned int n);

void fn_82738D70(Buf_82738D70 *self)
{
    Ref_82738D70 *r = (Ref_82738D70 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_827381E0(self->data, self->size);
    fn_8267BE38(self->data);
}
