extern void fn_828ABF58(void *obj, unsigned char a, int b, int c);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821AD588[];

struct CB { void *vt; int uses; int weak; int obj[6]; };

void **fn_82329EC0(void **param_1, unsigned char *a, int *b, int *c)
{
  struct CB *cb = (struct CB *)fn_8265C9E0(0x24);
  if (cb) {
    cb->uses = 1;
    cb->vt = lbl_821AD588;
    cb->weak = 1;
    if (cb->obj) {
      fn_828ABF58(cb->obj, *a, *b, *c);
    }
  } else {
    cb = 0;
  }
  param_1[1] = cb;
  param_1[0] = cb->obj;
  return param_1;
}
