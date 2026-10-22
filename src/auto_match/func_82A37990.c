typedef void *HANDLE;
typedef long LONG;
typedef char KPROCESSOR_MODE;
typedef unsigned char BOOLEAN;
typedef long NTSTATUS;
typedef struct { __int64 QuadPart; } LARGE_INTEGER;

typedef struct {
    unsigned char raw[0x1c];
} RTL_CRITICAL_SECTION;

NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, LARGE_INTEGER *Interval);
NTSTATUS NtSetEvent(HANDLE EventHandle, LONG *PreviousState);
NTSTATUS NtWaitForSingleObjectEx(HANDLE Handle, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, LARGE_INTEGER *Timeout);
NTSTATUS NtClose(HANDLE Handle);
void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct {
    int owner;
    int pad4[2];
    RTL_CRITICAL_SECTION cs;
    HANDLE event;
    int flag;
    int busy;
    int pad34[4];
    int res;
} obj_82A37990;

extern void fn_8265C990(int owner, int flags);

void fn_82A37990(obj_82A37990 *param_1, HANDLE thread)
{
    int owner = param_1->owner;
    LARGE_INTEGER t;

    if (param_1->event != 0) {
        RtlEnterCriticalSection(&param_1->cs);
        while (param_1->busy > 0) {
            t.QuadPart = -1000000;
            KeDelayExecutionThread(1, 0, &t);
        }
        NtSetEvent(param_1->event, 0);
        if (thread != 0) {
            t.QuadPart = -100000000;
            NtWaitForSingleObjectEx(thread, 1, 0, &t);
        }
        param_1->owner = 0;
        param_1->flag = 0;
        RtlLeaveCriticalSection(&param_1->cs);
        NtClose(param_1->event);
        param_1->event = 0;
    }
    if (param_1->res != 0) {
        fn_8265C990(owner, 0x24830000);
        param_1->res = 0;
    }
}
