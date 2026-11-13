typedef struct Obj_826F5D70 {
    char pad0[0x50];
    int current;    /* 0x50 */
    int pad54;
    int next;       /* 0x58 */
} Obj_826F5D70;

/* Hands out the next id; optionally returns the previous current id. */
int fn_826F5D70(Obj_826F5D70 *self, int *previous)
{
    if (previous != 0)
        *previous = self->current;
    self->current = ++self->next;
    return self->current;
}
