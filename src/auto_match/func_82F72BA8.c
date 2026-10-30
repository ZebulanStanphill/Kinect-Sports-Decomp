typedef struct { void *p; unsigned char status; unsigned char x5; } Result;
typedef union { Result r; int w[2]; } ResultWords;
typedef struct { int count; ResultWords *items[10]; } Table;

void fn_82F72BA8(ResultWords *out, Table *t, int i)
{
    unsigned char st;
    if (i < 0 || i > 9) {
        st = 3;
    } else {
        if (t->count != -1 && i <= t->count) {
            int tmp[2];
            ResultWords *e = t->items[i];
            tmp[0] = e->w[0];
            tmp[1] = e->w[1];
            out->w[0] = tmp[0];
            out->w[1] = tmp[1];
            return;
        }
        st = 2;
    }
    out->r.status = st;
    out->r.p = 0;
    out->r.x5 = 0;
}
