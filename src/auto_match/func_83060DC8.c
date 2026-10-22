typedef struct {
    int *key;
    int x;
} Elem;

typedef struct Vec {
    int pad0;
    Elem *begin;
    Elem *end;
    int padc[2];
    unsigned char valid;
} Vec;

extern Vec *fn_83060438(void);

int fn_83060DC8(Vec *v, int idx)
{
    int n;
    int i;
    int count;
    int key;

    if (!v->valid) {
        v = fn_83060438();
    }
    count = 0;
    i = 0;
    n = v->end - v->begin;
    while (i < n) {
        key = *v->begin[i].key;
        if (count == idx) {
            return key;
        }
        i++;
        while (i < n && *v->begin[i].key == key) {
            i++;
        }
        count++;
    }
    return -1;
}
