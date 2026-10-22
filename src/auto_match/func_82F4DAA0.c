typedef struct {
    char pad0[0x1c];
} RTL_CRITICAL_SECTION;

typedef struct {
    char pad0[0x2de4];
    unsigned int refs;
    char pad2de8[0x4];
    RTL_CRITICAL_SECTION lock;
} Global;

extern Global *lbl_8326183C;

extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

int fn_82F4DAA0(int param_1, int *param_2)
{
    Global *g;

    if (param_2 == 0) {
        RtlEnterCriticalSection(&lbl_8326183C->lock);
        g = lbl_8326183C;
        if (g->refs != 0) {
            g->refs--;
        }
        RtlLeaveCriticalSection(&g->lock);
        return 0;
    }
    if (*param_2 == 1) {
        RtlEnterCriticalSection(&lbl_8326183C->lock);
        g = lbl_8326183C;
        if (g->refs != 0) {
            g->refs--;
        }
        RtlLeaveCriticalSection(&g->lock);
    }
    return 1;
}
