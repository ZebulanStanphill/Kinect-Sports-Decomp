extern int fn_8251FA58(unsigned int);
extern int fn_82544F40();
extern int fn_82545810(void *);
extern int fn_8262FEC8(unsigned int);
extern int fn_8265CA20(void *);

typedef struct { int pad0; unsigned int f4; unsigned int f8; } Obj_82286E18B;

int *fn_82286E18(unsigned int *param_1, unsigned int param_2)
{
  Obj_82286E18B *p;

  if (*param_1 != 0) {
    fn_8251FA58(*param_1);
    *param_1 = 0;
  }
  p = (Obj_82286E18B *)param_1[0x2c];
  if (p != 0) {
    fn_82544F40();
    fn_82545810(p);
    if (p->f8 != 0) {
      fn_8262FEC8(p->f8);
      p->f8 = 0;
    }
    if (p->f4 != 0) {
      fn_8262FEC8(p->f4);
      p->f4 = 0;
    }
    fn_8265CA20(p);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return (int *)param_1;
}
