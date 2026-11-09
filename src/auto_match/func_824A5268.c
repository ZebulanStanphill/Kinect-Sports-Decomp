typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
__vector4 __VMXGetReg(int);
typedef struct Src_824A5268 { char pad[0x48]; float f48; float f4c; } Src_824A5268;
typedef struct Obj_824A5268 { void *vt; char pad[0x38]; float f3c; float f40; int f44; int pad48[2]; __vector4 v50; } Obj_824A5268;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821BF6E4[];

Obj_824A5268 *fn_824A5268(Src_824A5268 *src)
{
  Obj_824A5268 *p = (Obj_824A5268 *)fn_8265C9E0(0x60);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF6E4;
    p->f3c = src->f48;
    p->f40 = src->f4c;
    p->f44 = 0;
    p->v50 = __VMXGetReg(77);
    return p;
  }
  return 0;
}
