typedef struct { char pad0[0xc]; int flags; char pad10[0x10]; } Stream_82F6AD40;
typedef struct { Stream_82F6AD40 s; char cs[0x1c]; } StreamEx_82F6AD40;
extern Stream_82F6AD40 lbl_831BB660[];
extern void _unlock(int n);
extern void RtlLeaveCriticalSection(void *cs);

void fn_82F6AD40(Stream_82F6AD40 *f)
{
    if (f >= &lbl_831BB660[0] && f <= &lbl_831BB660[19]) {
        f->flags &= ~0x8000;
        _unlock((int)(f - lbl_831BB660) + 0x10);
    } else {
        RtlLeaveCriticalSection(((StreamEx_82F6AD40 *)f)->cs);
    }
}
