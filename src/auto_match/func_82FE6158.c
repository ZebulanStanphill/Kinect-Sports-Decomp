typedef struct { int v[3]; } Data_82FE6158;
typedef struct { void *vt; Data_82FE6158 d; } Obj_82FE6158;
extern char lbl_8217BA9C[];

Obj_82FE6158 *fn_82FE6158(Obj_82FE6158 *p, Obj_82FE6158 *q)
{
  p->vt = lbl_8217BA9C;
  p->d = q->d;
  return p;
}
