typedef unsigned __int64 U64_;
struct Obj_82E42C88;
typedef struct VT_82E42C88 { void *pad[6]; U64_ (*f18)(struct Obj_82E42C88 *); } VT_82E42C88;
typedef struct Obj_82E42C88 { VT_82E42C88 *vt; } Obj_82E42C88;
typedef struct Ctx_82E42C88 {
  Obj_82E42C88 *obj[1];
} Ctx_82E42C88;
extern int fn_82E3C5F8(void *a, unsigned int i, unsigned short **out);

int fn_82E42C88(char *param_1, U64_ *param_2)
{
  U64_ m;
  unsigned int i;
  unsigned short *e;
  U64_ v;
  unsigned int n;

  if (param_2 == 0) {
    return 0x80070057;
  }
  m = (U64_)-1;
  i = 0;
  n = *(unsigned int *)(param_1 + 0x2ac);
  if (n > 0) {
    do {
      Obj_82E42C88 *o;
      fn_82E3C5F8(param_1 + 0x26c, i, &e);
      o = ((Obj_82E42C88 **)param_1)[*e + 0x1b];
      v = o->vt->f18(o);
      if (v < m) {
        m = v;
      }
      i++;
    } while (i < *(unsigned int *)(param_1 + 0x2ac));
  }
  *param_2 = m;
  return 0;
}
