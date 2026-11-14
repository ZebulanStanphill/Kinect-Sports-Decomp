typedef struct Owner_827A2950 {
    char pad0[0x8];
    void *target;          /* 0x8 */
} Owner_827A2950;

typedef struct Range_827A2950 {
    char pad0[0x8];
    Owner_827A2950 *owner;  /* 0x8 */
    int active;             /* 0xc */
    char pad10[0x68 - 0x10];
    unsigned short flags;   /* 0x68 */
} Range_827A2950;

extern void fn_827A2850(Range_827A2950 *self, unsigned int first, unsigned int last);
extern void fn_82797D20(void *target, unsigned int first, unsigned int count);

void fn_827A2950(Range_827A2950 *self, unsigned int first, unsigned int last)
{
    unsigned int t;
    unsigned int count;

    if (self->active == 0)
        return;
    if (last < first) {
        t = last;
        last = first;
        first = t;
    }
    fn_827A2850(self, first, last);
    if ((self->flags & 1) == 0) {
        count = last - first;
        if (last < first)
            count = 0;
        fn_82797D20(self->owner->target, first, count);
    }
}
