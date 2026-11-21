typedef struct Table_82BC06D0 Table_82BC06D0;

typedef struct Iter_82BC06D0 {
    Table_82BC06D0 *table; /* 0x0 */
    unsigned int bucket;   /* 0x4 */
    void *node;            /* 0x8 */
    int index;             /* 0xc */
} Iter_82BC06D0;

extern void fn_82BC0618(Iter_82BC06D0 *self);

void fn_82BC06D0(Iter_82BC06D0 *self, Table_82BC06D0 *table)
{
    self->table = table;
    self->bucket = -1;
    self->index = -1;
    fn_82BC0618(self);
}
