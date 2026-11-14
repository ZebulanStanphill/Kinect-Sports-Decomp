extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void XMemSet(void *dst, int value, unsigned int size);

typedef struct {
    unsigned char pad0[0xd0];
    unsigned int flags;
} Item_82BD5740;

typedef struct {
    unsigned char pad0[0x50];
    Item_82BD5740 *items[4];
    unsigned char pad60[0x90];
    unsigned char lock[0x2c];
    int needsUpdate;
} Manager_82BD5740;

typedef struct {
    unsigned __int64 value;
} Key_82BD5740;

extern void *fn_82BD4D50(Manager_82BD5740 *self, Key_82BD5740 key);
extern int fn_82BDA170(void *entry, unsigned __int64 id, void *a, void *b, void *c, unsigned char flag);

int fn_82BD5740(Manager_82BD5740 *self, unsigned __int64 id, void *a, void *b, void *c)
{
    Key_82BD5740 key;
    void *entry;
    int hr;
    unsigned int i;
    RtlEnterCriticalSection(self->lock);
    XMemSet(&key, 0, sizeof(key));
    entry = fn_82BD4D50(self, key);
    if (entry == 0) {
        hr = 0x80004005;
    } else {
        hr = fn_82BDA170(entry, id, a, b, c, 0);
        if (hr >= 0 && (id & 0xfbdf00ddeadbeef0ULL) != 0xfbdf00ddeadbeef0ULL) {
            for (i = 0; i < 4; i++) {
                Item_82BD5740 *item = self->items[i];
                if (item != 0 && (item->flags & 0xf0000) == 0x10000) {
                    self->needsUpdate = 1;
                    break;
                }
            }
        }
    }
    RtlLeaveCriticalSection(self->lock);
    return hr;
}
