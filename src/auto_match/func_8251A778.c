typedef struct Obj_8251A778 Obj_8251A778;
typedef struct VT_8251A778 {
  void *s[11];
  void (*f2c)(Obj_8251A778 *, float);
} VT_8251A778;
struct Obj_8251A778 {
  VT_8251A778 *vt;
  char pad[0x4c];
  unsigned int f50;
  unsigned int f54;
  unsigned int f58;
  char f5c;
};

void fn_8251A778(Obj_8251A778 *param_1, float param_2)
{
  if (param_1->f54 != param_1->f50) {
    param_1->f5c = 1;
    param_1->vt->f2c(param_1, param_2);
    param_1->f5c = 0;
    param_1->f50 = param_1->f54;
  }
  param_1->vt->f2c(param_1, param_2);
  param_1->f58 = param_1->f50;
}
