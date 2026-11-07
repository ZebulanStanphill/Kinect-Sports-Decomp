typedef struct Vt_82D50D08 Vt_82D50D08;

typedef struct Obj_82D50D08 {
    Vt_82D50D08 *vt;
} Obj_82D50D08;

struct Vt_82D50D08 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void *slot4;
    void *slot5;
    void *slot6;
    void (*f1c)(Obj_82D50D08 *self, void *buf, float f, int y);
};

typedef struct Owner_82D50D08 {
    int pad0[5];
    Obj_82D50D08 *obj;      /* 0x14 */
    int pad18[6];
    unsigned char sub[4];   /* 0x30 */
} Owner_82D50D08;

typedef struct Buf_82D50D08 {
    int v[16];
} Buf_82D50D08;

extern int fn_82CE6768(void *buf, int x, void *src);

void fn_82D50D08(Owner_82D50D08 *p, int x, float f, int y)
{
    Buf_82D50D08 buf;
    Obj_82D50D08 *o;

    fn_82CE6768(&buf, x, p->sub);
    o = p->obj;
    o->vt->f1c(o, &buf, f, y);
}
