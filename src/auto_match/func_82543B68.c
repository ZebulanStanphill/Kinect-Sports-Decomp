typedef struct Tables_82543B68 {
    char pad0[0x8060];
    unsigned char a[0x1000];   /* 0x8060 */
    unsigned char b[0x1000];   /* 0x9060 */
    unsigned char c[0x400];    /* 0xa060 */
    unsigned char d[0x400];    /* 0xa460 */
} Tables_82543B68;

extern void XMemSet(void *dst, int value, unsigned int size); /* memset */

void fn_82543B68(Tables_82543B68 *self)
{
    XMemSet(self->b, 0xff, sizeof(self->b));
    XMemSet(self->a, 0xff, sizeof(self->a));
    XMemSet(self->c, 0xfe, sizeof(self->c));
    XMemSet(self->d, 0xfe, sizeof(self->d));
}
