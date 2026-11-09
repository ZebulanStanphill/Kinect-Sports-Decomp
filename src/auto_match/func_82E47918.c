typedef struct {
    int v[4];
} Key_82E47918;

typedef struct {
    Key_82E47918 key;
    int value[4];
} Elem_82E47918;

typedef struct {
    int pad0[1];
    int lock[7];
    Elem_82E47918 *data;
    unsigned int capacity;
    unsigned int count;
} Map_82E47918;

extern void fn_82E50330(void *p);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_82E47870(Map_82E47918 *m, Key_82E47918 *key);
extern int fn_82E477A0(Map_82E47918 *m, unsigned int newCapacity);

void *fn_82E47918(Map_82E47918 *m, Key_82E47918 *key)
{
    void *r;

    RtlEnterCriticalSection(m->lock);
    r = fn_82E47870(m, key);
    if (r != 0) {
        fn_82E50330(r);
    } else if (m->count == m->capacity && fn_82E477A0(m, m->capacity + 4) < 0) {
        r = 0;
    } else {
        m->data[m->count].key = *key;
        r = m->data[m->count++].value;
    }
    RtlLeaveCriticalSection(m->lock);
    return r;
}
