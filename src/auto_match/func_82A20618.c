typedef struct { int d[6]; } CritSec_82A20618;
typedef struct {
    char pad0[0x10];
    CritSec_82A20618 cs;
    char pad28[0x34 - 0x28];
    int handle;
    char pad38[0xd0 - 0x38];
    unsigned int flags;
} Glob_82A20618;

extern Glob_82A20618 lbl_83219B90;
extern void RtlEnterCriticalSection(CritSec_82A20618 *cs);
extern void RtlLeaveCriticalSection(CritSec_82A20618 *cs);
extern void fn_82A1E810(int h);

void fn_82A20618(unsigned int bits)
{
    RtlEnterCriticalSection(&lbl_83219B90.cs);
    lbl_83219B90.flags |= bits;
    RtlLeaveCriticalSection(&lbl_83219B90.cs);
    fn_82A1E810(lbl_83219B90.handle);
}
