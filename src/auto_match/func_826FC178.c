typedef struct Node_826FC178 {
    void *vtable; /* 0x0 */
    int refCount; /* 0x4 */
} Node_826FC178;

typedef struct Locked_826FC178 {
    Node_826FC178 *object; /* 0x0 */
    int pad04;
} Locked_826FC178;

typedef struct Object_826FC178 {
    void *first;  /* 0x0 */
    void *second; /* 0x4 */
    char pad08[0x18];
    unsigned char flags; /* 0x20 */
} Object_826FC178;

extern void fn_8267C498(void *object);
extern Locked_826FC178 *fn_8269CEE0(void *out, void *weak);

/* Both weak references are locked into a temporary, copied into a counted
   pointer and the temporary released again. The original reads the
   temporary from its stack slot, which this compiler only does when it sees
   the callee (link-time code generation). */
unsigned char fn_826FC178(Object_826FC178 *self)
{
    Node_826FC178 *first;
    Node_826FC178 *second;
    unsigned char result;

    {
        Locked_826FC178 locked;

        fn_8269CEE0(&locked, &self->first);
        first = locked.object;
        if (first != 0) {
            first->refCount = first->refCount + 1;
            fn_8267C498(first);
        }
    }
    {
        Locked_826FC178 locked;

        fn_8269CEE0(&locked, &self->second);
        second = locked.object;
        if (second != 0) {
            second->refCount = second->refCount + 1;
            fn_8267C498(second);
        }
    }
    result = (first == second && (first != 0 || (self->flags & 0x80) != 0) &&
              (second != 0 || (self->flags & 0x40) != 0))
                 ? 0
                 : 1;
    if (second != 0) {
        fn_8267C498(second);
    }
    if (first != 0) {
        fn_8267C498(first);
    }
    return result;
}
