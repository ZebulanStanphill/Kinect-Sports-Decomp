typedef struct {
    int pad;
    int a;
    char name[42];
} elem_828D5AA0;

typedef struct {
    int **cont;
    int unk;
    unsigned int idx;
} iter_828D5AA0;

extern elem_828D5AA0 *fn_828D4E10(iter_828D5AA0 *it);

iter_828D5AA0 *fn_828D5AA0(iter_828D5AA0 *ret, iter_828D5AA0 *first, iter_828D5AA0 *last,
                           iter_828D5AA0 *dest)
{
    int **c;
    int i;

    while (first->idx != last->idx) {
        elem_828D5AA0 *src = fn_828D4E10(first);
        elem_828D5AA0 *dst = fn_828D4E10(dest);
        dst->a = src->a;
        for (i = 0; i < 42; i++) {
            dst->name[i] = src->name[i];
        }
        dest->idx++;
        first->idx++;
    }
    c = dest->cont;
    ret->cont = 0;
    ret->unk = 0;
    if (c != 0 && *c != 0) {
        ret->cont = (int **)**c;
    }
    ret->idx = dest->idx;
    return ret;
}
