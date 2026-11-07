typedef struct Elem_82FF3940 {
    unsigned int id;
    float value;
} Elem_82FF3940;

typedef struct Array_82FF3940 {
    Elem_82FF3940 *begin;
    Elem_82FF3940 *end;
    int capacity;
} Array_82FF3940;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, int size);
extern void fn_82FA5190(void *heap, void *p);

int fn_82FF3940(Array_82FF3940 *a, int extra)
{
    int capacity = extra + a->capacity;
    Elem_82FF3940 *p = (Elem_82FF3940 *)fn_82FA5060(lbl_831BC768, capacity * 8);
    int count;
    if (p == 0)
        return 0;
    count = a->end - a->begin;
    if (a->begin != 0) {
        unsigned int i;
        for (i = 0; i < count; i++) {
            Elem_82FF3940 *e = &p[i];
            if (e != 0) {
                e->id = -1;
                e->value = -1.0f;
            }
            *e = a->begin[i];
        }
        fn_82FA5190(lbl_831BC768, a->begin);
    }
    a->begin = p;
    a->capacity = capacity;
    a->end = p + count;
    return 1;
}
