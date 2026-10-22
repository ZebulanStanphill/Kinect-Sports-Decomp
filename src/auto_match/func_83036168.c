extern unsigned char fn_83035FF0(void *v, int n);

typedef struct Elem {
    int key;
    int val[5];
} Elem;

typedef struct Vec {
    Elem *begin;
    Elem *end;
    unsigned int cap;
} Vec;

Elem *fn_83036168(Vec *v)
{
    unsigned int n = v->end - v->begin;
    Elem *e;
    int i;

    if ((n < v->cap || fn_83035FF0(v, 2)) && n < v->cap) {
        e = v->end;
        if (e != 0) {
            for (i = 0; i < 5; i++)
                e->val[i] = 0;
        }
        e = v->end;
        v->end = e + 1;
        return e;
    }
    return 0;
}
