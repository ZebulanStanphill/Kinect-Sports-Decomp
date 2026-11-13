extern int *fn_82B7BD28(int, int);
extern char lbl_820DB490[];

typedef struct {
  void *vt;
  int a4;
  int a8;
  int ac;
  int a10;
} Obj_82B7CAE0;

Obj_82B7CAE0 *fn_82B7CAE0(int p1, int p2, char *ctx)
{
  int heap = *(int *)(ctx + 0x5a8);
  int *raw = fn_82B7BD28(heap, 0x18);
  Obj_82B7CAE0 *o = (Obj_82B7CAE0 *)(raw + 1);
  Obj_82B7CAE0 *res;
  raw[0] = heap;
  if (o != 0) {
    o->a4 = p1;
    o->a8 = p2;
    o->a10 = (int)ctx;
    o->vt = lbl_820DB490;
    res = o;
  } else {
    res = 0;
  }
  return res;
}
