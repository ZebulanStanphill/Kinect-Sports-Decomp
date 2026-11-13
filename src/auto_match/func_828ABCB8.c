extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern int fn_828E9FF8(void *, int);

typedef struct Obj_828ABCB8 { char pad[8]; char base; char pad2[3]; int count; } Obj_828ABCB8;

void fn_828ABCB8(Obj_828ABCB8 *param_1, void *param_2, char *param_3)
{
  int n = param_1->count;
  int avail = fn_828E9DA8(param_2);
  int used = fn_828E9D90(param_2);
  int r;
  if (n <= avail - used) {
    r = fn_828E9FF8(param_2, n);
  }
  else {
    r = 0;
  }
  if (param_3 != 0) {
    *param_3 = param_1->base + r;
  }
}
