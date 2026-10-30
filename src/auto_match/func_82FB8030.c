typedef int (*code)();
extern int fn_82FA5190(unsigned int, unsigned int);
extern int fn_82FB7F40();
extern unsigned int lbl_831BC768;

typedef struct VT_82FB8030 { void *s[1]; void (*f4)(void *); } VT_82FB8030;
typedef struct Elem_82FB8030 { int a; struct { VT_82FB8030 *vt; } *obj; } Elem_82FB8030;
typedef struct Obj_82FB8030 {
  int pad0; unsigned int b0; unsigned int b1; unsigned int b2;
  int pad1[3];
  Elem_82FB8030 *e0; Elem_82FB8030 *e1; unsigned int e2;
} Obj_82FB8030;

void fn_82FB8030(Obj_82FB8030 *param_1)
{
  Elem_82FB8030 *e;
  fn_82FB7F40();
  if (param_1->b0 != 0) {
    param_1->b1 = param_1->b0;
    fn_82FA5190(lbl_831BC768, param_1->b0);
    param_1->b0 = 0;
    param_1->b1 = 0;
    param_1->b2 = 0;
  }
  e = param_1->e0;
  if (e != param_1->e1) {
    do {
      e->obj->vt->f4(e->obj);
      e++;
    } while (e != param_1->e1);
  }
  if (param_1->e0 != 0) {
    param_1->e1 = param_1->e0;
    fn_82FA5190(lbl_831BC768, (unsigned int)param_1->e0);
    param_1->e0 = 0;
    param_1->e1 = 0;
    param_1->e2 = 0;
  }
}
