typedef struct Buf_82582FE0 {
    char pad[0x18];
    unsigned int f18;
    unsigned int f1c;
} Buf_82582FE0;

typedef struct Obj_82582FE0 {
    void *vt;
    char pad4[0x80];
    Buf_82582FE0 *buf84;        /* 0x84 */
    void *map88;                /* 0x88 */
    void *f8c;
    void *f90;
    void *f94;
    Buf_82582FE0 *buf98;        /* 0x98 */
    void *map9c;                /* 0x9c */
    unsigned int counta0;       /* 0xa0 */
    void *fa4;
    void *fa8;
    char padac[0xec - 0xac];
    void *fec;                  /* 0xec */
    char padf0[0x8];
    char ff8[0x16];             /* 0xf8 */
    unsigned char f10e;         /* 0x10e */
} Obj_82582FE0;

extern char lbl_821C6058[];
extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern void fn_8251FA58(void *);
extern void fn_8262FEC8(void *);
extern void fn_82552B50(void *, int);
extern void *fn_8262F8D8(void *, int, int, unsigned int, int, unsigned int, unsigned int, int, int);
extern void fn_8262FBD8(void *, unsigned int, int);
extern void *memset(void *, int, unsigned int);

void fn_82582FE0(Obj_82582FE0 *self)
{
    Buf_82582FE0 *b;

    self->vt = lbl_821C6058;
    if (self->fec != 0) {
        fn_8262FEC8(self->fec);
        self->fec = 0;
    }
    b = self->buf98;
    if (b != 0) {
        unsigned int v = b->f18 & 0xfffffffc;
        self->map9c = fn_8262F8D8(b, 10, 0, v, 0, v, b->f1c & 0x3fffffc, 0, 0x3000000);
        memset(self->map9c, 0, self->counta0 * 32);
        fn_8262FBD8(self->buf98, self->buf98->f18 & 0xfffffffc, 0);
        fn_8262FEC8(self->buf98);
        self->buf98 = 0;
        self->map9c = 0;
    }
    if (self->fa4 != 0) {
        fn_82545950(&self->fa4);
    }
    if (self->fa8 != 0) {
        fn_82545A90(&self->fa8);
    }
    if (self->f94 != 0) {
        fn_8251FA58(self->f94);
        self->f94 = 0;
    }
    b = self->buf84;
    if (b != 0) {
        unsigned int v = b->f18 & 0xfffffffc;
        self->map88 = fn_8262F8D8(b, 10, 0, v, 0, v, b->f1c & 0x3fffffc, 0, 0x3000000);
        fn_8262FBD8(self->buf84, self->buf84->f18 & 0xfffffffc, 0);
        fn_8262FEC8(self->buf84);
        self->buf84 = 0;
        self->map88 = 0;
    }
    if (self->f8c != 0) {
        fn_82545950(&self->f8c);
    }
    if (self->f90 != 0) {
        fn_82545A90(&self->f90);
    }
    if (self->f10e != 0) {
        fn_82552B50(self->ff8, 1);
    }
}
