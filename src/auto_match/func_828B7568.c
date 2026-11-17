typedef struct Shared_828B7568 {
    char *object;
    unsigned int references;
} Shared_828B7568;

extern float fn_828B9180(char *);
extern void fn_822315A0(unsigned int);
extern Shared_828B7568 *fn_828B6C80(Shared_828B7568 *, Shared_828B7568 *, Shared_828B7568 *, unsigned char);

static __forceinline unsigned char Before_828B7568(char *first, char *second)
{
    float left = fn_828B9180(first);
    float right = fn_828B9180(second);
    return left > right;
}

void fn_828B7568(Shared_828B7568 *first, Shared_828B7568 *last)
{
    struct {
        unsigned char predicate;
        unsigned int padding;
        Shared_828B7568 temporary;
    } local;

    Shared_828B7568 *next;
    Shared_828B7568 *hole;
    Shared_828B7568 *previous;
    char *object;
    unsigned int references;
    unsigned int old;
    if (first != last) {
        for (next = first + 1; next != last; ++next) {
            hole = next;
            object = 0;
            references = 0;
            if (&local.temporary != next) {
                unsigned int *reference = &next->references;
                references = *reference;
                *reference = 0;
                object = next->object;
                next->object = 0;
            }
            if (Before_828B7568(object, first->object)) {
                fn_828B6C80(first, next, next + 1, local.predicate);
                {
                    unsigned int *reference = &first->references;
                    old = *reference;
                    *reference = references;
                }
                first->object = object;
            } else {
                previous = next;
                while (Before_828B7568(object, (--previous)->object)) {
                    char *moved = 0;
                    unsigned int movedReferences = 0;
                    if (&local.temporary != previous) {
                        unsigned int *reference = &previous->references;
                        movedReferences = *reference;
                        *reference = 0;
                        moved = previous->object;
                        previous->object = 0;
                    }
                    {
                        unsigned int *reference = &hole->references;
                        old = *reference;
                        *reference = movedReferences;
                    }
                    hole->object = moved;
                    if (old != 0) {
                        fn_822315A0(old);
                    }
                    hole = previous;
                }
                {
                    unsigned int *reference = &hole->references;
                    old = *reference;
                    *reference = references;
                }
                hole->object = object;
            }
            if (old != 0) {
                fn_822315A0(old);
            }
        }
    }
}
