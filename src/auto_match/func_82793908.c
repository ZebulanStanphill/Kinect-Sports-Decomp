typedef struct { int *data; int count; } Vec;
typedef struct { Vec *v; int idx; } It;
extern void fn_82791070(It *, int, int, int *);
extern unsigned fn_82793650(int, int);
int fn_82793908(int param_1, int *param_2, int *param_3, int param_4)
{
  int out;
  It it;
  int uVar1;
  unsigned val;
  unsigned iVar4;
  unsigned char bVar3;
  fn_82791070(&it, param_1, param_4, &out);
  iVar4 = 0;
  uVar1 = 0;
  bVar3 = (it.v == 0 || it.idx < 0 || it.idx >= it.v->count);
  if (!bVar3) {
    int e = it.v->data[it.idx];
    val = fn_82793650(e, out);
    iVar4 = *(int *)(e + 0xc);
    uVar1 = 1;
    if (val != 0) goto L;
  }
  val = *(int *)(param_1 + 0x1c);
L:
  if (iVar4 == 0) iVar4 = *(int *)(param_1 + 0x18);
  if (param_2 != 0) *param_2 = val;
  if (param_3 != 0) *param_3 = iVar4;
  return uVar1;
}
