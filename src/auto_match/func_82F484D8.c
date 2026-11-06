struct Obj_82F484D8;
typedef struct Vt_82F484D8 {
  void *slots[20];
  int (*Check)(struct Obj_82F484D8 *);
} Vt_82F484D8;
typedef struct Obj_82F484D8 {
  Vt_82F484D8 *vt;
  int pad4[3];
  unsigned int f10;
  int pad14[2];
  int stride;
  int pad20;
  unsigned int count;
  int pad28[2];
  char sub[0x48 - 0x30];
  unsigned int limit;
} Obj_82F484D8;
extern int fn_82EE6048(void *, unsigned int, void *, int);

int fn_82F484D8(Obj_82F484D8 *param_1, unsigned int param_2, void *param_3)
{
  unsigned int off;

  if (param_1->vt->Check(param_1) == 0) {
    return 0x80004001;
  }
  if (param_1->f10 == 0) {
    return 0xc00d36b6;
  }
  if (param_2 >= param_1->count) {
    return 0xc00d36bf;
  }
  off = param_1->stride * param_2;
  if (param_1->limit < off + 8) {
    return 0xc00d3a9e;
  }
  return fn_82EE6048(param_1->sub, off, param_3, 4);
}
