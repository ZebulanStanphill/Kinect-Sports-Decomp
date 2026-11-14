typedef struct Owner_830394E8 {
    char pad0[0x6c];
    int value6c;            /* 0x6c */
    char pad70[4];
    int value74;            /* 0x74 */
} Owner_830394E8;

typedef struct Node_830394E8 {
    void *vtbl0;            /* 0x000 */
    void *vtbl4;            /* 0x004 */
    char pad8[4];
    void *vtblC;            /* 0x00c */
    char pad10[0x1c4];
    Owner_830394E8 *owner;  /* 0x1d4 */
    char pad1d8[0x10];
    unsigned char ready;    /* 0x1e8 */
    char pad1e9[3];
    int extra;              /* 0x1ec */
    int value6c;            /* 0x1f0 */
    int value74;            /* 0x1f4 */
} Node_830394E8;

extern char lbl_8217D2B8[];
extern char lbl_8217D2B0[];
extern char lbl_8217D264[];

extern Node_830394E8 *fn_83038550(Node_830394E8 *self, int a2, int a3, int a4, int a5, int a6, int a7,
                                  int a8, int a9, int a10, int a11, unsigned char a12);

Node_830394E8 *fn_830394E8(Node_830394E8 *self, int a2, int a3, int a4, int a5, int a6, int a7,
                           int a8, int a9, int a10, int a11, int extra)
{
    fn_83038550(self, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
    self->extra = extra;
    self->vtbl0 = lbl_8217D2B8;
    self->vtbl4 = lbl_8217D2B0;
    self->vtblC = lbl_8217D264;
    self->ready = 1;
    self->value6c = self->owner->value6c;
    self->value74 = self->owner->value74;
    return self;
}
