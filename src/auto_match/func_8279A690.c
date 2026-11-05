extern void *fn_8267BED0(void *, int, int *);
extern void fn_8267C498(void *);
extern void *fn_827A2F48(void *, void *);

typedef struct { char pad[0x114]; int m114; } Obj_8279A690;

int fn_8279A690(Obj_8279A690 *param_1)
{
  void *p;
  int v;
  int size;

  if (param_1->m114 == 0) {
    size = 0x144;
    p = fn_8267BED0(param_1, 0x70, &size);
    if (p != 0) {
      v = (int)fn_827A2F48(p, param_1);
    } else {
      v = 0;
    }
    if ((void *)param_1->m114 != 0) {
      fn_8267C498((void *)param_1->m114);
    }
    param_1->m114 = v;
  }
  return param_1->m114;
}
