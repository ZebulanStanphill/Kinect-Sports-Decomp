extern void fn_822EB058(void *);

typedef struct Block_822F8250 {
    unsigned int a[4];
    unsigned int b[4];
    unsigned int c[4];
    unsigned int d[4];
} Block_822F8250;

typedef struct Owner_822F8250 {
    unsigned int pad[3];
    Block_822F8250 block; /* +0xc */
} Owner_822F8250;

void fn_822F8250(Owner_822F8250 *self)
{
    Block_822F8250 *block = &self->block;
    fn_822EB058(block->d);
    fn_822EB058(block->c);
    fn_822EB058(block->b);
    fn_822EB058(block->a);
}
