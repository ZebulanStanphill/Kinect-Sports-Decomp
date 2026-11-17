extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern long _InterlockedExchangeAdd(long *value, long add);
extern int fn_82686758(void *map, void *key);
extern void fn_8267FB90(void *self);

typedef struct Entry_826874B8 {
    unsigned int state;    /* +0x0 */
    void *value;           /* +0x4 */
    unsigned char pad8[8]; /* +0x8 */
} Entry_826874B8;

void fn_826874B8(char *self, char *value)
{
    char *lock = *(char **)(self + 8) + 0xc;
    char *map;
    int index;
    Entry_826874B8 *entry;

    RtlEnterCriticalSection(lock);
    _InterlockedExchangeAdd((long *)(value + 4), 1);
    *(char **)(self + 0x10) = value;
    *(int *)(self + 0xc) = 1;
    map = *(char **)(self + 8) + 0x28;
    index = fn_82686758(map, self + 0x14);
    entry = index >= 0 ? *(Entry_826874B8 **)map + index + 1 : 0;
    if (entry) {
        entry->value = value;
        entry->state = 0;
        *(void **)(value + 8) = *(void **)(self + 8);
        fn_8267FB90(self + 0x20);
    }
    RtlLeaveCriticalSection(lock);
}
