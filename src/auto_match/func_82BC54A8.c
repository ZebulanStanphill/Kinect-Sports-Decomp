extern void *fn_82B7BD28();
extern int fn_82B7BEB0();
extern void *fn_82BC4BC0();
extern int fn_82BC4CB0();
extern int fn_82BC51D8();

void fn_82BC54A8(int param_1)
{
  unsigned int uVar1;
  unsigned int *puVar2;
  void *obj;

  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x2c);
  *puVar2 = uVar1;
  if (puVar2 + 1 != 0) {
    obj = fn_82BC4BC0(puVar2 + 1,param_1);
  } else {
    obj = 0;
  }
  fn_82BC51D8(obj);
  if (obj != 0) {
    fn_82BC4CB0(obj);
    fn_82B7BEB0(*(unsigned int *)((char *)obj - 4),(char *)obj - 4);
  }
}
