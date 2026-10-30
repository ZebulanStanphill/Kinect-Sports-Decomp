extern unsigned char fn_827E3768(void *e);

typedef struct { void *pad; void **begin; void **end; } Vec;

void fn_827DA990(Vec *v, int id, void **out)
{
    void **it = v->begin;
    void **end = v->end;
    for (; it != end; it++) {
        void *e = *it;
        if (fn_827E3768(e) == id) {
            *out = e;
            return;
        }
    }
    *out = 0;
}
