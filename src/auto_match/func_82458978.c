extern void fn_82359BB0(void *);
extern void fn_82815130(void *);

typedef struct Pair_82458978 {
    unsigned int a[4];      /* +0x00 */
    unsigned int b[4];      /* +0x10 */
} Pair_82458978;

typedef struct Inner_82458978 {
    unsigned int pad0[2];
    Pair_82458978 pair;     /* +0x08 */
    unsigned int pad28[(0xe0 - 0x28) / 4];
    unsigned int c[4];      /* +0xe0 */
    unsigned int d[4];      /* +0xf0 */
    unsigned int e[4];      /* +0x100 */
} Inner_82458978;

typedef struct Owner_82458978 {
    unsigned int pad[3];
    Inner_82458978 inner;   /* +0xc */
} Owner_82458978;

void fn_82458978(Owner_82458978 *self)
{
    Inner_82458978 *inner = &self->inner;
    Pair_82458978 *pair;

    fn_82359BB0(inner->e);
    fn_82359BB0(inner->d);
    fn_82359BB0(inner->c);
    pair = &inner->pair;
    fn_82815130(pair->b);
    fn_82815130(pair->a);
}
