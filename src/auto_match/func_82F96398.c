typedef struct Pair_82F96398 {
    unsigned int first;
    unsigned int second;
} Pair_82F96398;

typedef struct Obj_82F96398 {
    unsigned int a;          /* 0x00 */
    unsigned int b;          /* 0x04 */
    unsigned int c;          /* 0x08 */
    Pair_82F96398 d;         /* 0x0c */
    unsigned char flag;      /* 0x14 */
    unsigned char done;      /* 0x15 */
} Obj_82F96398;

Obj_82F96398 *fn_82F96398(Obj_82F96398 *self, unsigned int a, unsigned int b, unsigned int c,
                          const Pair_82F96398 *d, unsigned char flag)
{
    self->a = a;
    self->b = b;
    self->c = c;
    self->d = *d;
    self->flag = flag;
    self->done = 0;
    return self;
}
