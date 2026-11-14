typedef struct Block_82B43A00 {
    unsigned int count;
    unsigned int data[1];
} Block_82B43A00;

void fn_82B43A00(unsigned int *dst, unsigned int *src)
{
    Block_82B43A00 *d = (Block_82B43A00 *)*dst;
    unsigned int *p;
    unsigned int *end;
    unsigned int *s;

    if (!(~*dst & 1)) {
        *dst = *src | (unsigned int)d;
        return;
    }
    p = d->data;
    end = &d->data[d->count];
    s = ((Block_82B43A00 *)*src)->data;
    for (; p < end; p++, s++)
        *p |= *s;
}
