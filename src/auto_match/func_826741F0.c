typedef struct {
    void *ptr;
    void *rep;
} SharedPtr;

static void swap_ptr(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

static void SharedPtr_move(SharedPtr *self, SharedPtr *other)
{
    self->ptr = 0;
    self->rep = 0;
    if (self != other) {
        swap_ptr(&self->rep, &other->rep);
        swap_ptr(&self->ptr, &other->ptr);
    }
}

SharedPtr *fn_826741F0(SharedPtr *first, SharedPtr *last, SharedPtr *dest)
{
    for (; first != last; first++, dest++) {
        if (dest != 0) {
            SharedPtr_move(dest, first);
        }
    }
    return dest;
}
