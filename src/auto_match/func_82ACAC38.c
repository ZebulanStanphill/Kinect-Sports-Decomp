typedef struct Block_82ACAC38 {
    unsigned int count;
    unsigned int data[1];
} Block_82ACAC38;

void fn_82ACAC38(unsigned int *dst, unsigned int *src)
{
    Block_82ACAC38 *d = (Block_82ACAC38 *)*dst;
    unsigned int *p;
    unsigned int *end;
    unsigned int *s;
if (!(~*dst & 1)) { *dst = *src; return; }
    p = d->data; end = &d->data[d->count]; s = ((Block_82ACAC38 *)*src)->data;
    for (; p < end; p++, s++) *p = *s;
}
