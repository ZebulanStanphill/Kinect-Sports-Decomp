typedef struct Seg { char *p; unsigned int len; } Seg;
typedef struct Q { Seg *first; Seg *last; int a, b; unsigned int idx; unsigned int off; } Q;

char *fn_83037B98(Q *q, unsigned int *len)
{
    Seg *s = &q->first[q->idx];
    unsigned int off = q->off;
    unsigned int n;
    if (off < s->len) {
        *len = s->len - off;
        return s->p + off;
    }
    n = q->idx + 1; q->off = 0; n = n < (unsigned int)(q->last - q->first) ? n : 0; q->idx = n;
    s = &q->first[n];
    *len = s->len;
    return s->p;
}
