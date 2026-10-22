extern void fn_822FB670(void *, int, int, int, int, int);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821AD588[];

struct CB { void *vt; int uses; int weak; int obj[0x1f]; };

void **fn_822EA970(void **param_1, int a, int b, int c, int d, int *e)
{
  struct CB *cb = (struct CB *)fn_8265C9E0(0x88);
  if (cb) {
    cb->uses = 1;
    cb->vt = lbl_821AD588;
    cb->weak = 1;
    if (cb->obj) {
      fn_822FB670(cb->obj, a, b, c, d, *e);
    }
  } else {
    cb = 0;
  }
  param_1[1] = cb;
  param_1[0] = cb->obj;
  return param_1;
}
