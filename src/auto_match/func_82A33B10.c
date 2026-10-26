typedef unsigned long ULONG;
typedef void *PVOID;
typedef void *HANDLE;
typedef int BOOL;

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

typedef struct _LDR_DATA_TABLE_ENTRY {
    char pad[0x58];
    PVOID XexHeaderBase;
} LDR_DATA_TABLE_ENTRY;

extern LDR_DATA_TABLE_ENTRY **__imp_XexExecutableModuleHandle;
extern PVOID RtlImageXexHeaderField(PVOID XexHeaderBase, ULONG Key);
extern HANDLE RtlCreateHeap(ULONG Flags, PVOID HeapBase, ULONG ReserveSize, ULONG CommitSize, PVOID Lock, RTL_HEAP_PARAMETERS *Parameters);
extern void XapiInitDebugHeap(void);
extern void *memset(void *, int, unsigned int);
extern HANDLE XapiProcessHeap;

BOOL XapiInitHeap(void)
{
    ULONG size = 0x100000;
    ULONG *p;
    RTL_HEAP_PARAMETERS params;

    LDR_DATA_TABLE_ENTRY *mod = *__imp_XexExecutableModuleHandle;
    if (mod != 0) {
        p = (ULONG *)RtlImageXexHeaderField(mod->XexHeaderBase, 0x20401);
        if (p != 0) {
            size = *p;
            if (size == 0) {
                return 1;
            }
        }
    }
    {
        unsigned __int64 *q = (unsigned __int64 *)&params;
        int i;
        for (i = 0; i < 6; i++) {
            q[i] = 0;
        }
    }
    params.Length = sizeof(params);
    if (XapiProcessHeap == 0) {
        XapiProcessHeap = RtlCreateHeap(2, 0, size, 0x1000, 0, &params);
    }
    XapiInitDebugHeap();
    return 0 != XapiProcessHeap;
}
