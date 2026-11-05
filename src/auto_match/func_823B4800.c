typedef struct Ctl_823B4800 { void *vt; int a; int b; int sub[1]; } Ctl_823B4800;
typedef struct Out_823B4800 { int *sub; Ctl_823B4800 *ctl; } Out_823B4800;
extern int fn_822D7FE0(void *);
extern Ctl_823B4800 *fn_8265C9E0(int);
extern char lbl_821B5BDC[];

Out_823B4800 *fn_823B4800(Out_823B4800 *out)
{
  Ctl_823B4800 *p = fn_8265C9E0(0x34);
  if (p != 0) {
    p->a = 1;
    p->vt = lbl_821B5BDC;
    p->b = 1;
    if (p->sub != 0) fn_822D7FE0(p->sub);
  } else {
    p = 0;
  }
  out->ctl = p;
  out->sub = p->sub;
  return out;
}
