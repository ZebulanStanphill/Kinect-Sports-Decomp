extern void *memset(void *dst, int value, unsigned int size);

typedef struct Part_82A8BA40 {
    unsigned char data[0x34];
} Part_82A8BA40;

typedef struct Pair_82A8BA40 {
    Part_82A8BA40 first;
    Part_82A8BA40 second;
} Pair_82A8BA40;

typedef struct Obj_82A8BA40 {
    int f0;
    int f4;
    Pair_82A8BA40 pairs[3];   /* +0x8 */
} Obj_82A8BA40;

Obj_82A8BA40 *fn_82A8BA40(Obj_82A8BA40 *self)
{
    Pair_82A8BA40 *p;
    int i;

    self->f0 = 0;
    self->f4 = 0;
    p = self->pairs;
    i = 2;
    do {
        memset(&p->first, 0, sizeof(p->first));
        memset(&p->second, 0, sizeof(p->second));
        p++;
        i--;
    } while (i >= 0);
    return self;
}
