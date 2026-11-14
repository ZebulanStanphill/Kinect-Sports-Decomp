typedef struct Key_828E6DF8 {
    int kind;
    int pad;
    int value;
} Key_828E6DF8;

static __forceinline unsigned char Less(const Key_828E6DF8 *a, const Key_828E6DF8 *b)
{
    if (a->kind != b->kind)
        return a->kind < b->kind;
    if (a->kind != 1)
        return 0;
    return a->value < b->value;
}

unsigned char fn_828E6DF8(void *self, const Key_828E6DF8 *a, const Key_828E6DF8 *b)
{
    if (Less(a, b))
        return 0;
    return !Less(b, a);
}
