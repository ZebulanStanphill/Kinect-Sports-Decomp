typedef struct Self_82BE5240 {
    int pad0;
    unsigned int value;     /* 0x04 */
    unsigned int current;   /* 0x08 */
} Self_82BE5240;

unsigned int fn_82BE5240(Self_82BE5240 *self, unsigned int value, int unused, ...)
{
    self->value = value;
    if (self->current != value)
        self->current = value;
    return value;
}
