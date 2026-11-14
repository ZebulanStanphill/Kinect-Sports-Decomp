typedef struct Set_82D01370 {
    unsigned int *data;
    int pad4;
    int count;
} Set_82D01370;

extern void fn_82D01190(Set_82D01370 *set);

void fn_82D01370(Set_82D01370 *a, Set_82D01370 *b)
{
    unsigned int *p;
    unsigned int *pEnd;
    unsigned int *q;
    unsigned int *qEnd;

    fn_82D01190(a);
    fn_82D01190(b);
    p = a->data;
    pEnd = p + a->count;
    q = b->data;
    qEnd = q + b->count;
    while (p < pEnd && q < qEnd) {
        if (*p == *q) {
            *p = 0;
            p++;
            q++;
        } else if (*p < *q) {
            p++;
        } else {
            q++;
        }
    }
}
