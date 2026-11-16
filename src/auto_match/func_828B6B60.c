typedef struct Pointer_828B6B60 {
    void *object;    /* 0x00 */
    void *reference; /* 0x04 */
} Pointer_828B6B60;

extern float fn_828B9180(void *);
extern void fn_822315A0(void *);

static __forceinline unsigned char Greater(Pointer_828B6B60 *left, Pointer_828B6B60 *right)
{
    void *object = right->object;
    float first = fn_828B9180(left->object);
    return first > fn_828B9180(object);
}

static __forceinline void Move(Pointer_828B6B60 *destination, Pointer_828B6B60 *source)
{
    Pointer_828B6B60 temporary;
    void *object = 0;
    void *reference = 0;
    void *old;
    if (&temporary != source) {
        void **slot = &source->reference;
        reference = *slot;
        *slot = 0;
        object = source->object;
        source->object = 0;
    }
    old = destination->reference;
    destination->reference = reference;
    destination->object = object;
    if (old != 0) {
        fn_822315A0(old);
    }
}

void fn_828B6B60(Pointer_828B6B60 *first, int hole, int top, Pointer_828B6B60 *value)
{
    int parent = (hole - 1) / 2;
    Pointer_828B6B60 *destination;
    while (top < hole) {
        if (!Greater(first + parent, value)) {
            break;
        }
        Move(first + hole, first + parent);
        hole = parent;
        parent = (parent - 1) / 2;
    }
    destination = first + hole;
    Move(destination, value);
}
