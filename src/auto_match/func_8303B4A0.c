extern void fn_8265CA20(void *p);
extern char lbl_8216C628[];
extern char lbl_8217D040[];
typedef struct { void *vt; void *vt2; int x8; } O;
O *fn_8303B4A0(O *p, unsigned int flags)
{
  p->vt2 = lbl_8216C628;
  p->vt = lbl_8217D040;
  p->x8 = 0;
  if ((flags & 1) != 0) { fn_8265CA20(p); } return p;
}
