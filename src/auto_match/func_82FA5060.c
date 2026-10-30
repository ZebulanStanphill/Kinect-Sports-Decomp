typedef struct Slot_82FA5060 { char pad[0x24]; char cs[0x1c]; int f40; unsigned int f44; int f48; int pad2; } Slot_82FA5060;
extern unsigned int fn_82FA64D8(int a, unsigned int n);
extern unsigned int fn_82FA6550(int a, int b, unsigned int n);
extern int fn_82FA6408();
extern Slot_82FA5060 *lbl_83264210;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

unsigned int fn_82FA5060(int idx, unsigned int n)
{
    unsigned int r;
    Slot_82FA5060 *s;
    if (n == 0) return 0;
    s = &lbl_83264210[idx];
    RtlEnterCriticalSection(s->cs);
    if (s->f44 != 0)
        r = fn_82FA6550(s->f40, s->f44, n);
    else
        r = fn_82FA64D8(s->f40, n);
    if (r != 0)
        { int k = fn_82FA6408() + 8; s->f48 += k; }

    RtlLeaveCriticalSection(s->cs);
    return r;
}
