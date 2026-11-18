typedef struct State_82ACD9F0 {
    char pad0[0x3c];
    unsigned int current; /* 0x3c */
    char pad40[8];
    unsigned char active; /* 0x48 */
} State_82ACD9F0;

typedef struct Node_82ACD9F0 {
    char pad0[0x1c];
    unsigned int value; /* 0x1c */
    char pad20[8];
    unsigned int previous; /* 0x28 */
} Node_82ACD9F0;

extern int fn_82ACD3D8(State_82ACD9F0 *);
extern void fn_82ACC5D8(State_82ACD9F0 *, unsigned int, unsigned int);
extern unsigned int fn_82ACD310(State_82ACD9F0 *, unsigned int, unsigned int);

int fn_82ACD9F0(State_82ACD9F0 *self)
{
    unsigned int *slot = &self->current;
    unsigned int original = *slot;
    unsigned int current = original;
    int result;
    if (current != 0) {
        do {
            result = fn_82ACD3D8(self);
            current = *slot;
            if (result != 0) {
                goto unwind;
            }
        } while (current != 0);
    }
    return 1;
unwind:
    if (current != original) {
        unsigned int destroy = result != 2;
        do {
            unsigned int previous = ((Node_82ACD9F0 *)(*slot & ~1u))->previous;
            previous = (previous & 1) ? 0 : previous;
            fn_82ACC5D8(self, *slot, destroy);
            *slot = previous;
        } while (self->current != original);
    }
    if (result == 2) {
        unsigned int value;
        value = ((Node_82ACD9F0 *)self->current)->value;
        if (fn_82ACD310(self, value, self->current) == self->current) {
            self->active = 0;
        }
    }
    return 0;
}
