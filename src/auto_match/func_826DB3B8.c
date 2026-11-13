typedef struct Ref_826DB3B8 { int pad; long refs; } Ref_826DB3B8;
typedef struct Buf_826DB3B8 {
    char *data;
    unsigned int size;
    int p8;
    unsigned int tagged;   /* 0x0C */
} Buf_826DB3B8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826D85F0(char *p, unsigned int n);

void fn_826DB3B8(Buf_826DB3B8 *self)
{
    Ref_826DB3B8 *r = (Ref_826DB3B8 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_826D85F0(self->data, self->size);
    fn_8267BE38(self->data);
}
