extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005C14;
extern unsigned int lbl_82005C20;

typedef struct Rep_82689650 {
    int pad;   /* 0x0 */
    int count; /* 0x4 */
} Rep_82689650;

typedef struct Sub_82689650 {
    int count;        /* 0x4 */
    unsigned int *vt; /* 0x8 */
    int unk_c;        /* 0xc */
} Sub_82689650;

typedef struct Obj_82689650 {
    unsigned int *vt;   /* 0x0 */
    Sub_82689650 sub;   /* 0x4 */
    int unk_10;         /* 0x10 */
    Rep_82689650 *rep;  /* 0x14 */
    int arg2;           /* 0x18 */
    int arg3;           /* 0x1c */
    unsigned char flag; /* 0x20 */
} Obj_82689650;

void fn_82689650(Obj_82689650 *self, Rep_82689650 *rep, int arg2, int arg3, unsigned char flag)
{
    Sub_82689650 *sub = &self->sub;
    self->sub.count = 1;
    sub->vt = &lbl_82005BB4;
    {
        int *pUnk_c = &self->sub.unk_c;
        *pUnk_c = 0;
    }
    self->vt = &lbl_82005C20;
    self->sub.vt = &lbl_82005C14;
    if (rep != 0) {
        rep->count++;
    }
    self->rep = rep;
    self->arg2 = arg2;
    self->arg3 = arg3;
    self->flag = flag;
    self->unk_10 = 1;
}
