extern void fn_8267C498(void *);
extern void fn_8267C4F0(void *);
extern void fn_8269CEE0(void *, void *);
extern void fn_826FE670(void *, void *);
extern void *fn_82711A18(void *, void *, void *, void *, int);

typedef struct { int pad0; int count; } Rc_826FE738;
typedef struct { Rc_826FE738 *rc; int pad4; } Tmp_826FE738;
typedef struct Node_826FE738 Node_826FE738;
typedef struct {
  void *f0, *f4;
  unsigned char (*f8)(void *);
  void *pad[0x9c / 4 - 3];
  int (*f9c)(void *);
} VtN_826FE738;
struct Node_826FE738 { VtN_826FE738 *vt; char pad[0x1c]; Node_826FE738 *m20; };
typedef struct { void *f0, *f4, *f8; void *(*fc)(void *, int); } VtH_826FE738;
typedef struct {
  char pad0[8]; VtH_826FE738 *vt8;
  char pad0c[0xad8 - 0x0c]; char mad8[8]; unsigned short mae0;
  char padae2[0xb00 - 0xae2]; union { unsigned mb00; unsigned short hi; } u;
} Obj_826FE738;

void fn_826FE738(Obj_826FE738 *param_1, Node_826FE738 *param_2)
{
  void *uVar1;
  Tmp_826FE738 t;
  unsigned u;

  uVar1 = param_1->vt8->fc(&param_1->vt8, 0x1b);
  if (uVar1 != 0) {
    Rc_826FE738 *rc;
    fn_8269CEE0(&t, param_1->mad8);
    rc = t.rc;
    if (rc != 0) {
      rc->count = rc->count + 1;
      fn_8267C498(rc);
    }
    param_2 = (Node_826FE738 *)fn_82711A18(uVar1, param_1, rc, param_2, 0);
    if (rc != 0) {
      fn_8267C498(rc);
    }
  }
  if (param_2 == 0 || param_2->vt->f9c(param_2) != 4) {
    param_1->u.mb00 = param_1->u.mb00 | 0x10000;
  } else {
    param_1->u.mb00 = param_1->u.mb00 & 0xfffeffff;
  }
  param_1->mae0 = 0;
  fn_826FE670(param_1, param_2);
  if ((param_1->u.hi & 1) != 0) {
    Node_826FE738 *q = param_2;
    while (q != 0 && q->vt->f8(q) != 0) {
      q = q->m20;
    }
    u = param_1->u.mb00;
    if (q == 0) {
      u = u | 0x10000;
    } else {
      u = u & 0xfffeffff;
    }
    param_1->u.mb00 = u;
  }
  if (uVar1 != 0) {
    fn_8267C4F0(uVar1);
  }
}
