typedef struct {
    unsigned int *begin;
    unsigned int *end;
} Stack_827E3AA8;

typedef struct {
    char pad0[0x64];
    Stack_827E3AA8 stack;   /* 0x64 */
} Owner_827E3AA8;

static __forceinline unsigned int Size(const Stack_827E3AA8 *s) { return s->end - s->begin; }
static __forceinline unsigned int Back(const Stack_827E3AA8 *s) { return s->end[-1]; }
static __forceinline void PopBack(Stack_827E3AA8 *s) { if (s->begin != s->end) s->end--; }

unsigned int fn_827E3AA8(Owner_827E3AA8 *self)
{
    if (Size(&self->stack) > 0) {
        unsigned int top = Back(&self->stack);
        PopBack(&self->stack);
        return top;
    }
    return 0;
}
