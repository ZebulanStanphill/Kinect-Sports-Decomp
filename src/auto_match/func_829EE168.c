typedef struct Arr {
    char pad[0x18];
    unsigned int *data;
    int count;
    int cap;
} Arr;
extern int fn_829EE088(Arr *a, int count, int cap, int f);
extern void *memcpy(void *d, const void *s, unsigned int n);

Arr *fn_829EE168(Arr *a, Arr *b)
{
    if (b == a) return a;
    if (fn_829EE088(a, b->count, b->cap, 0) < 0) return a;
    memcpy(a->data, b->data, a->count * 4);
    return a;
}
