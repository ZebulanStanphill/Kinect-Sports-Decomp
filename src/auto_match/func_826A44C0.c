typedef struct Ref_826A44C0 { int pad; long refs; } Ref_826A44C0;
typedef struct S_826A44C0 {
    void *vt;              /* 0x00 */
    int pad4[3];
    void *vt10;            /* 0x10 */
    int pad14[8];
    void *f34;             /* 0x34 */
    int pad38[2];
    unsigned int tagged;   /* 0x40 */
} S_826A44C0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern char lbl_82006EBC[];
extern char lbl_82006E68[];
extern void fn_826A2CB0(S_826A44C0 *s, int a);
extern void fn_8267BE38(void *p);
extern void fn_826C1AD8(S_826A44C0 *s);

void fn_826A44C0(S_826A44C0 *s)
{
    Ref_826A44C0 *r;

    s->vt = lbl_82006EBC;
    s->vt10 = lbl_82006E68;
    fn_826A2CB0(s, 0);
    r = (Ref_826A44C0 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_8267BE38(s->f34);
    fn_826C1AD8(s);
}
