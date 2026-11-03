extern char lbl_8217C330[];
typedef struct Obj_8300CF30 { void *vt; int p4, p8; unsigned c, d; unsigned short e, f; int g[5]; } Obj_8300CF30;
void fn_8300CF30(Obj_8300CF30 *o, unsigned short n)
{
  int i;
  o->e = n;
  o->f = n;
  o->vt = lbl_8217C330;
  o->c = n * 0x32;
  o->d = n * 0x32;
  { int *q = o->g; q[0]=0;q[1]=0;q[2]=0;q[3]=0;q[4]=0; }
}
