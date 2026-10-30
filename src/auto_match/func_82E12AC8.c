typedef struct Obj_82E12AC8 Obj_82E12AC8;
typedef struct { void *s0, *s1, *s2; unsigned (*f0c)(Obj_82E12AC8 *); void *s4; } Vt_82E12AC8;
struct Obj_82E12AC8 { Vt_82E12AC8 *vt; };
typedef struct Self_82E12AC8 Self_82E12AC8;
typedef struct { void *s0, *s1, *s2, *s3; void (*f10)(Self_82E12AC8 *, int, unsigned); } SVt_82E12AC8;
struct Self_82E12AC8 { SVt_82E12AC8 *vt; };
extern Obj_82E12AC8 *lbl_8323FD9C;

void fn_82E12AC8(Self_82E12AC8 *p, int a)
{
  p->vt->f10(p, a, lbl_8323FD9C->vt->f0c(lbl_8323FD9C));
}
