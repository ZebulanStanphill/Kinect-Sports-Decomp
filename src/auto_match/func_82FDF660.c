extern void *memset(void *, int, unsigned int);

typedef struct Obj_82FDF660 {
    int a;                    /* 0x000 */
    int b;                    /* 0x004 */
    int c;                    /* 0x008 */
    char buf0[0x100];         /* 0x00c */
    char buf1[0x100];         /* 0x10c */
    char buf2[0x80];          /* 0x20c */
    char buf3[0x80];          /* 0x28c */
    unsigned short s0;        /* 0x30c */
    unsigned short s1;        /* 0x30e */
    unsigned short s2;        /* 0x310 */
    unsigned short s3;        /* 0x312 */
} Obj_82FDF660;

Obj_82FDF660 *fn_82FDF660(Obj_82FDF660 *self)
{
    self->a = 0;
    self->b = 0;
    self->c = 0;
    self->s0 = 0;
    self->s1 = 0;
    self->s2 = 0;
    self->s3 = 0;
    memset(self->buf0, 0, sizeof(self->buf0));
    memset(self->buf1, 0, sizeof(self->buf1));
    memset(self->buf2, 0, sizeof(self->buf2));
    memset(self->buf3, 0, sizeof(self->buf3));
    return self;
}
