typedef struct {
    unsigned int code;
    unsigned int value;
} Counter_82A2AB78;

typedef struct {
    void *data;
    int size;
} Notification_82A2AB78;

typedef struct {
    void *slots[6];
    int (*notify)(int code, void *data);
} DebugMonitor_82A2AB78;

extern DebugMonitor_82A2AB78 **__imp_KeDebugMonitorData;

void fn_82A2AB78(unsigned int id, float value)
{
    Counter_82A2AB78 counter;
    Notification_82A2AB78 note;
    DebugMonitor_82A2AB78 *monitor;

    counter.code = id | 0x2200000;
    counter.value = *(unsigned int *)&value;
    note.data = &counter;
    note.size = 2;
    monitor = *__imp_KeDebugMonitorData;
    if (monitor != 0) {
        monitor->notify(0x43, &note);
    }
}
