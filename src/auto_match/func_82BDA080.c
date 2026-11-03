typedef struct { int (*f[8])(void *); } VT_82BDA080;
typedef struct { VT_82BDA080 *vt; } Obj_82BDA080;
extern Obj_82BDA080 *fn_82BD9810(void *, int);

int fn_82BDA080(void *param_1, int *param_2, unsigned int param_3)
{
  int hr;
  unsigned int i;
  int *p;
  Obj_82BDA080 *o;

  i = 0;
  hr = 0x80070057;
  if (param_3 != 0) {
    p = param_2;
    do {
      o = fn_82BD9810(param_1, *p);
      if (o == 0) {
        return hr;
      }
      hr = (*(int (**)(Obj_82BDA080 *))((char *)o->vt + 8))(o);
      if (hr < 0) {
        return hr;
      }
      i++;
      p++;
    } while (i < param_3);
  }
  return hr;
}
