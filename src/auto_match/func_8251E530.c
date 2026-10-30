typedef struct {
    int unk0;
    char *end;
    char pad8[4];
    unsigned short size;
    char padE[2];
    unsigned short count;
} Arr_8251E530;

extern void *memmove(void *dst, const void *src, unsigned int n);

void fn_8251E530(Arr_8251E530 *a, char *p)
{
    char *last = a->end - a->size;
    if (p < last) {
        memmove(p, p + a->size, last - p);
    }
    a->count--;
    a->end -= a->size;
}
