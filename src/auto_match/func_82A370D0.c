typedef unsigned long ULONG;
typedef int BOOL;
typedef void *PVOID;
typedef void *HANDLE;

typedef struct _RTL_HEAP_PARAMETERS {
    ULONG Length;
    ULONG SegmentReserve;
    ULONG SegmentCommit;
    ULONG DeCommitFreeBlockThreshold;
    ULONG DeCommitTotalFreeThreshold;
    ULONG MaximumAllocationSize;
    ULONG VirtualMemoryThreshold;
    ULONG InitialCommit;
    ULONG InitialReserve;
    PVOID CommitRoutine;
    ULONG Reserved[2];
} RTL_HEAP_PARAMETERS;

extern unsigned *__imp_XboxHardwareInfo;
extern HANDLE RtlCreateHeap(ULONG Flags, PVOID HeapBase, ULONG ReserveSize, ULONG CommitSize, PVOID Lock, RTL_HEAP_PARAMETERS *Parameters);
extern HANDLE lbl_8329EB44;

BOOL XapiInitDebugHeap(void)
{
    RTL_HEAP_PARAMETERS params;

    if ((*__imp_XboxHardwareInfo & 0x10) != 0) {
        {
            unsigned __int64 *q = (unsigned __int64 *)&params;
            int i;
            for (i = 0; i < 6; i++) {
                q[i] = 0;
            }
        }
        params.Length = sizeof(params);
        if (lbl_8329EB44 == 0) {
            lbl_8329EB44 = RtlCreateHeap(0xc1002, 0, 0x100000, 0x1000, 0, &params);
        }
    }
    return 0 != lbl_8329EB44;
}
