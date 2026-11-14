typedef struct Obj_82E1CDF8 {
    char pad[0x18];
    unsigned char ready;    /* 0x18 */
    unsigned char *flags;   /* 0x1c */
    int *first;             /* 0x20 */
    int *second;            /* 0x24 */
} Obj_82E1CDF8;

extern int fn_82E1F690(void *value);

int fn_82E1CDF8(Obj_82E1CDF8 *self, int index, void *a, void *b, unsigned char flag)
{
    if (self->ready == 0)
        return 0x80004005;
    self->first[index] = fn_82E1F690(a);
    self->second[index] = fn_82E1F690(b);
    self->flags[index] = flag;
    return 0;
}
