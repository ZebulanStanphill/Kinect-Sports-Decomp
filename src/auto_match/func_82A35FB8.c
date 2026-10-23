typedef struct Src {
    int pad0[2];
    int a[6];       /* 0x08 */
    int pad20[2];
    int b[2];       /* 0x28 */
    int pad30[2];
    int c;          /* 0x38 */
    int len;        /* 0x3c */
    char name[1];   /* 0x40 */
} Src;
typedef struct Dst {
    int c;          /* 0x00 */
    int a[6];       /* 0x04 */
    int b[2];       /* 0x1c */
    int pad24[2];
    char name[0x104]; /* 0x2c */
    char flag;      /* 0x130 */
} Dst;
void *memcpy(void *d, const void *s, unsigned int n);
void fn_82A35FB8(Src *s, Dst *d)
{
    int *len = &s->len;
    d->c = s->c;
    d->a[0] = s->a[0];
    d->a[1] = s->a[1];
    d->a[2] = s->a[2];
    d->a[3] = s->a[3];
    d->a[4] = s->a[4];
    d->a[5] = s->a[5];
    d->b[0] = s->b[0];
    d->b[1] = s->b[1];
    memcpy(d->name, s->name, *len);
    d->name[*len] = 0;
    d->flag = 0;
}
