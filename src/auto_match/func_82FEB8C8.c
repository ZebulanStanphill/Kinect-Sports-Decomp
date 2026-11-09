// Kinect Sports retail 4D5308C9, function 0x82FEB8C8 (96 bytes).
// Calls fn_82FF3080 inside the lbl_8326434C critical section and returns its float result.
typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern float fn_82FF3080(int p);
extern char lbl_8326434C[];

float fn_82FEB8C8(int p)
{
    float r;
    RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)lbl_8326434C);
    r = fn_82FF3080(p);
    RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)lbl_8326434C);
    return r;
}
