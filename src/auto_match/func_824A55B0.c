typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
__vector4 __VMXGetReg(int);
typedef struct { int v[5]; } Block_824A55B0;
typedef struct Src_824A55B0 {
  int pad[18];
  Block_824A55B0 data;
} Src_824A55B0;
typedef struct Obj_824A55B0 {
  void *vt;
  int base[14];
  Block_824A55B0 data;
  __vector4 v50;
  float f60;
  int f64;
  int f68;
  int pad6c;
  int f70;
  int pad74[3];
} Obj_824A55B0;

extern void *fn_8265C9E0(unsigned);
extern void fn_82F53A20(void *, void *);
extern char lbl_821BF71C[];

Obj_824A55B0 *fn_824A55B0(Src_824A55B0 *src)
{
  Obj_824A55B0 *p = (Obj_824A55B0 *)fn_8265C9E0(0x80);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF71C;
    p->data = src->data;
    p->v50 = __VMXGetReg(77);
    p->f60 = 0.0f;
    p->f64 = 0;
    p->f70 = 0;
    p->f68 = 0;
    return p;
  }
  return 0;
}
