typedef struct RTL_CRITICAL_SECTION_82FF5088 RTL_CRITICAL_SECTION_82FF5088;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int *fn_82FF5200(void *table, int key);
extern void fn_82FF4970(void *self, int key, int *entry);

void fn_82FF5088(char *self, int key)
{
    int *entry;

    RtlEnterCriticalSection(self + 0x88);
    entry = fn_82FF5200(self + 4, key);
    if (entry != 0) {
        *entry = *entry - 1;
        fn_82FF4970(self, key, entry);
    } else {
        RtlLeaveCriticalSection(self + 0x88);
    }
}
