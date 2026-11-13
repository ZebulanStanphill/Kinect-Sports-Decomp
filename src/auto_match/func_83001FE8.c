typedef struct Obj_83001FE8 {
  void *vt; float f[12];
} Obj_83001FE8;
typedef struct Host_83001FE8 { char pad[0x68]; Obj_83001FE8 *o; } Host_83001FE8;
extern Obj_83001FE8 *fn_82FA5060(void *, int);
extern void *lbl_831BC768;
extern char lbl_8217D040[];

static __forceinline Obj_83001FE8 *Obj_ctor(Obj_83001FE8 *p)
{
  p->vt = lbl_8217D040;
  p->f[0] = 0.0f;
  p->f[1] = 0.0f;
  p->f[2] = 0.0f;
  p->f[3] = 0.0f;
  p->f[4] = 0.0f;
  p->f[5] = 0.0f;
  p->f[6] = 0.0f;
  p->f[7] = 0.0f;
  p->f[8] = 0.0f;
  p->f[9] = 0.0f;
  p->f[10] = 0.0f;
  p->f[11] = 0.0f;
  return p;
}

unsigned char fn_83001FE8(Host_83001FE8 *h)
{
  if (h->o == 0) {
    Obj_83001FE8 *p = fn_82FA5060(lbl_831BC768, 0x34);
    h->o = p != 0 ? Obj_ctor(p) : 0;
  }
  return h->o != 0;
}
