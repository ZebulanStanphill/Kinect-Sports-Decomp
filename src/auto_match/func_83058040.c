typedef unsigned int uint;

typedef struct Target_83058040 {
  char pad[0x24];
  float value;
} Target_83058040;

typedef struct Obj_83058040 {
  uint count;
  uint unk4;
  Target_83058040 *target;
  uint data[1];
} Obj_83058040;

extern int fn_8305B970(void *p, double d);
extern double fn_8305BE58(double d);

void fn_83058040(Obj_83058040 *param_1)
{
  int n;

  n = fn_8305B970(param_1->data, (double)param_1->count);
  param_1->target->value = (float)fn_8305BE58((double)n);
}
