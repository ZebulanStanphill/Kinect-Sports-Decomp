typedef struct Ctl_823A9A98 { void *vt; int a; int b; int sub[1]; } Ctl_823A9A98;
typedef struct Out_823A9A98 { int *sub; Ctl_823A9A98 *ctl; } Out_823A9A98;
extern int fn_823B3AE8(void *);
extern Ctl_823A9A98 *fn_8265C9E0(int);
extern char lbl_821B56C4[];

Out_823A9A98 *fn_823A9A98(Out_823A9A98 *out)
{
  Ctl_823A9A98 *p = fn_8265C9E0(0x1c);
  if (p != 0) {
    p->a = 1;
    p->vt = lbl_821B56C4;
    p->b = 1;
    if (p->sub != 0) fn_823B3AE8(p->sub);
  } else {
    p = 0;
  }
  out->ctl = p;
  out->sub = p->sub;
  return out;
}
