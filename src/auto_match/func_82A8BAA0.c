extern void *memset(void *dst, int value, unsigned int size);

typedef struct Part_82A8BAA0 {
    unsigned char data[0x34];
} Part_82A8BAA0;

typedef struct Triple_82A8BAA0 {
    Part_82A8BAA0 first;
    Part_82A8BAA0 second;
    Part_82A8BAA0 third;
} Triple_82A8BAA0;

typedef struct Obj_82A8BAA0 {
    int f0;
    int f4;
    Triple_82A8BAA0 entries[0x48];   /* +0x8 */
} Obj_82A8BAA0;

Obj_82A8BAA0 *fn_82A8BAA0(Obj_82A8BAA0 *self)
{
    Triple_82A8BAA0 *p;
    int i;

    self->f0 = 0;
    self->f4 = 0;
    p = self->entries;
    i = 0x47;
    do {
        memset(&p->first, 0, sizeof(p->first));
        memset(&p->second, 0, sizeof(p->second));
        memset(&p->third, 0, sizeof(p->third));
        p++;
        i--;
    } while (i >= 0);
    return self;
}
