typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION *lbl_8323B46C;

typedef struct {
    int state;
    short count;
    unsigned short bits;
} Entry_82CEFA10;

void fn_82CEFA10(Entry_82CEFA10 *e)
{
    RTL_CRITICAL_SECTION *cs;
    if (e->state != -0x2f) {
        cs = lbl_8323B46C;
        RtlEnterCriticalSection(cs);
        e->bits >>= 1;
        if (--e->count == 0) {
            e->state = -0xf;
        }
        RtlLeaveCriticalSection(cs);
    }
}
