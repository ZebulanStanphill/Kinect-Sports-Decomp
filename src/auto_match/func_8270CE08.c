typedef unsigned int undefined4;
typedef int (*code)();

extern int fn_8270C708(int param_1);

typedef struct Vtbl_8270CE08 {
  int pad[0x48 / 4];
  void (*f48)(void *self);
} Vtbl_8270CE08;

typedef struct Obj_8270CE08 {
  Vtbl_8270CE08 *vt;
} Obj_8270CE08;

typedef struct Self_8270CE08 {
  int pad0;
  int pad4;
  Obj_8270CE08 *obj;
  int padC;
  int state;
} Self_8270CE08;

void fn_8270CE08(Self_8270CE08 *param_1)
{
  switch (param_1->state) {
  case 2:
    fn_8270C708((int)param_1);
    break;
  case 1:
    param_1->state = 0;
    break;
  }
  param_1->obj->vt->f48(param_1->obj);
}
