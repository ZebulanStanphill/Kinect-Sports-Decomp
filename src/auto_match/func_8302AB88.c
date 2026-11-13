typedef struct Obj_8302AB88 {
    char pad0[0x14];
    int count;              /* 0x14 */
    char pad18[0x20 - 0x18];
    float time;             /* 0x20 */
    char pad24[0x28 - 0x24];
    int start;              /* 0x28 */
    int current;            /* 0x2c */
    char pad30[0x34 - 0x30];
    int pending;            /* 0x34 */
    unsigned char flags;    /* 0x38 */
    unsigned char done;     /* 0x39 */
} Obj_8302AB88;

void fn_8302AB88(Obj_8302AB88 *self)
{
    { int *c = &self->current; *c = self->start; }
    self->time = 0.0f;
    self->done = 0;
    self->count = 0;
    self->pending = 0;
    self->flags &= 0x3f;
}
