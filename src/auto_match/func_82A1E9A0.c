typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
} LIST_ENTRY;

typedef void (*XTHREAD_NOTIFY_PROC)(int fCreate);

typedef struct _XTHREAD_NOTIFICATION {
    LIST_ENTRY Link;
    XTHREAD_NOTIFY_PROC pfnNotifyRoutine;
} XTHREAD_NOTIFICATION;

extern RTL_CRITICAL_SECTION lbl_8315D2A8;
extern LIST_ENTRY lbl_8315D2C4;

void XapiCallThreadNotifyRoutines(int fCreate)
{
    LIST_ENTRY *entry;
    XTHREAD_NOTIFICATION *n;

    RtlEnterCriticalSection(&lbl_8315D2A8);
    entry = lbl_8315D2C4.Flink;
    while (entry != &lbl_8315D2C4) {
        n = (XTHREAD_NOTIFICATION *)entry;
        entry = entry->Flink;
        n->pfnNotifyRoutine(fCreate);
    }
    RtlLeaveCriticalSection(&lbl_8315D2A8);
}
