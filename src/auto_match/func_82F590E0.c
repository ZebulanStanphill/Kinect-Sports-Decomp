typedef struct Obj_82F590E0 {
    void *vt;            /* 0x00 */
    unsigned char b4;    /* 0x04 */
    unsigned char b5;    /* 0x05 */
    unsigned char pad6[2];
    int w8;              /* 0x08 */
    int wc;              /* 0x0c */
    float f10;           /* 0x10 */
    float f14;           /* 0x14 */
    float f18;           /* 0x18 */
    float f1c;           /* 0x1c */
    float f20;           /* 0x20 */
    int w24;             /* 0x24 */
    unsigned char sub28[0x9c - 0x28]; /* 0x28 */
    unsigned char sub9c[4];           /* 0x9c */
} Obj_82F590E0;

extern int fn_82F5D620(void *p);
extern int fn_82F5DEC8(void *p);
extern char lbl_821B4200[];

Obj_82F590E0 *fn_82F590E0(Obj_82F590E0 *p)
{
    p->b4 = 0;
    p->vt = lbl_821B4200;
    p->f10 = 0.0f;
    p->b5 = 0;
    p->f14 = 0.0f;
    p->w8 = 0;
    p->f18 = 0.0f;
    p->wc = 0;
    p->f1c = 0.0f;
    p->w24 = 2;
    p->f20 = 0.0f;
    fn_82F5DEC8(p->sub28);
    fn_82F5D620(p->sub9c);
    return p;
}
