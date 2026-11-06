typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION *lbl_8323B46C;

typedef struct {
    int state;
    short count;
    unsigned short level;
} Obj_82CEFA90;

void fn_82CEFA90(Obj_82CEFA90 *o)
{
    RTL_CRITICAL_SECTION *cs;
    if (o->state != -0x2f) {
        cs = lbl_8323B46C;
        RtlEnterCriticalSection(cs);
        o->level >>= 1;
        if (--o->count == 0) {
            o->state = -0xf;
        }
        RtlLeaveCriticalSection(cs);
    }
}
