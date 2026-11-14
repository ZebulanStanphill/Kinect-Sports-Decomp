typedef struct Obj_82CFA878 {
    char pad0[0x10];
    int base;               /* 0x10 */
    int pad14;
    int limit;              /* 0x18 */
    int current;            /* 0x1c */
    int requested;          /* 0x20 */
} Obj_82CFA878;

int fn_82CFA878(Obj_82CFA878 *self, int value)
{
    self->requested = value;
    self->current = self->base;
    return value > self->limit;
}
