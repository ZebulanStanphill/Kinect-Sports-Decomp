extern void fn_8306C0C0(int a);
extern void fn_8306C170(int a, int b, int c);
extern void fn_8306C220(int a);

typedef struct Obj_82FA54B8 {
  int pad0;
  int pad4;
  int f8;
  int fc;
  int pad10[3];
  unsigned int flags;
} Obj_82FA54B8;

void fn_82FA54B8(Obj_82FA54B8 *param_1)
{
  switch (param_1->flags & 3) {
  case 3:
    fn_8306C220(param_1->fc);
    break;
  case 2:
    fn_8306C170(param_1->f8, 0, 0x8000);
    break;
  case 1:
    fn_8306C0C0(param_1->f8);
    break;
  }
  param_1->f8 = 0;
  param_1->fc = 0;
}
