typedef struct Ref_826E9F10 { int pad; long refs; } Ref_826E9F10;
typedef struct S_826E9F10 {
    void *vt;              /* 0x00 */
    int p4;
    unsigned int tagged;   /* 0x08 */
    unsigned char active;  /* 0x0c */
} S_826E9F10;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern char lbl_8200D790[];
extern void fn_8267BE38(void *p);
extern void fn_826E9DE8(S_826E9F10 *s);
extern void fn_8267C488(void *p);

void fn_826E9F10(S_826E9F10 *s)
{
    Ref_826E9F10 *r;

    s->vt = lbl_8200D790;
    if (s->active != 0) {
        fn_826E9DE8(s);
    }
    r = (Ref_826E9F10 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_8267C488(s);
}
