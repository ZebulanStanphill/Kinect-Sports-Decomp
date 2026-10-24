typedef struct {
    int id;
    float val;
} Entry;

typedef struct {
    Entry *begin;
    Entry *end;
    unsigned int cap;
} Vec;

extern unsigned char fn_82FF3940(Vec *v, int grow);

Entry *fn_82FF3C50(Vec *v)
{
    unsigned int n;
    Entry *e;

    n = v->end - v->begin;
    if ((n < v->cap || fn_82FF3940(v, 0x20)) && n < v->cap) {
        e = v->end;
        if (e != 0) {
            e->id = -1;
            e->val = -1.0f;
        }
        return v->end++;
    }
    return 0;
}
