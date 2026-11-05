typedef struct Obj_830069B8 {
  void *vt; float f1, f2, f3, f4;
  int z5, z6, z7, z8, z9, za, zb, zc, zd;
} Obj_830069B8;
typedef struct Host_830069B8 { char pad[0x20]; Obj_830069B8 *o; char pad2[0x19]; unsigned char flags; } Host_830069B8;
extern Obj_830069B8 *fn_82FA5060(void *, int);
extern void *lbl_831BC768;
extern char lbl_8217C054[];

static __forceinline Obj_830069B8 *Obj_ctor(Obj_830069B8 *p)
{
  p->z5 = 0;
  p->vt = lbl_8217C054;
  p->f1 = 0.0f;
  p->z6 = 0;
  p->f2 = 0.0f;
  p->z7 = 0;
  p->f3 = 0.0f;
  p->z8 = 0;
  p->f4 = 0.0f;
  p->z9 = 0;
  p->za = 0;
  p->zb = 0;
  p->zc = 0;
  p->zd = 0;
  return p;
}

unsigned char fn_830069B8(Host_830069B8 *h)
{
  if (h->o == 0 && (h->flags & 2) == 0) {
    Obj_830069B8 *p = fn_82FA5060(lbl_831BC768, 0x38);
    h->o = p != 0 ? Obj_ctor(p) : 0;
  }
  return h->o != 0;
}
