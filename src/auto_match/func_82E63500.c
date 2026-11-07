typedef struct Key_82E63500 {
    int v[4];
} Key_82E63500;

typedef struct Elem_82E63500 {
    Key_82E63500 key;
    int value[4];
} Elem_82E63500;

typedef struct Map_82E63500 {
    int pad0;
    int lock[15];
    Elem_82E63500 *data;     /* 0x40 */
    unsigned int capacity;   /* 0x44 */
    unsigned int count;      /* 0x48 */
} Map_82E63500;

extern void fn_82E50330(void *p);
extern void fn_82E50F00(void *lock, int n);
extern void fn_82E51028(void *lock, int n);
extern void *fn_82E52428(Map_82E63500 *m, Key_82E63500 *key);
extern int fn_82E63428(Map_82E63500 *m, unsigned int newCapacity);

void *fn_82E63500(Map_82E63500 *m, Key_82E63500 *key)
{
    void *r;

    fn_82E50F00(m->lock, 1);
    r = fn_82E52428(m, key);
    if (r != 0) {
        fn_82E50330(r);
    } else if (m->count == m->capacity && fn_82E63428(m, m->capacity + 4) < 0) {
        r = 0;
    } else {
        m->data[m->count].key = *key;
        r = m->data[m->count++].value;
    }
    fn_82E51028(m->lock, 1);
    return r;
}
