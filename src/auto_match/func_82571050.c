typedef struct Entry_82571050 {
    char pad[0xd4];
    void *key;
    char rest[0x3f0 - 0xd8];
} Entry_82571050;

typedef struct Event_82571050 {
    int type, size;
    unsigned int value;
    int result;
} Event_82571050;

typedef struct Self_82571050 {
    void (**vt)();
    char pad[0x37c];
    char defaults[0x3d8];
    Entry_82571050 *begin, *end;
} Self_82571050;

extern void *XMemSet(void *, int, unsigned int);

static __forceinline Entry_82571050 *Find(Self_82571050 *self, void *key)
{
    Entry_82571050 *it = self->begin, *end = self->end;
    while (it < end) {
        if (key == it->key)
            return it;
        ++it;
    }
    return 0;
}

int fn_82571050(Self_82571050 *self, void *key, unsigned int value, char *object)
{
    int result;
    if (!object) {
        if (key) {
            Entry_82571050 *found = Find(self, key);
            if (found) {
                object = (char *)found + 0x2d0;
                goto ready;
            }
        }
        object = self->defaults;
    }
ready:
    if (object != self->defaults)
        result = *(int *)(object + 0xc4);
    else {
        result = *(int *)((char *)self + 0x444);
        if (result == -3) {
            Event_82571050 event;
            XMemSet(&event.value, 0, 8);
            event.value = value;
            event.type = 0x18;
            event.size = 0x10;
            event.result = 0;
            self->vt[3](self, &event);
            result = event.result;
        }
    }
    return result;
}
