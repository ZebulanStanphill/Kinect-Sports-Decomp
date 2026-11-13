extern unsigned int *auStack_30;
extern int fn_82A49B60();
extern int fn_82A77548();
extern int fn_82A77D58();
extern int fn_82A77FA8();
extern int fn_82A77E00();


unsigned __int64 fn_82A78740(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30;

  uVar3 = 0;
  auStack_30 = 0;
  uVar2 = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x214);
  }
  else {
    do {
      if ((*(int *)(param_1 + 0xb8) == 0) && (fn_82A77D58(param_1), *(int *)(param_1 + 0xb8) == 0)
         ) {
        if ((uVar3 & 0xffffffff) == 0) {
          uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x214);
          uVar3 = uVar2;
        }
        fn_82A49B60(uVar3,param_2,*(unsigned int *)(param_1 + 0x78));
        break;
      }
      if (*(int *)(param_1 + 0xc0) == 0) {
        lVar1 = fn_82A77FA8(param_1,param_2,&auStack_30);
      }
      else {
        lVar1 = fn_82A77E00();
      }
      if (uVar2 == 0) {
        uVar2 = (unsigned __int64)auStack_30;
      }
      uVar3 = lVar1 + (unsigned __int64)auStack_30;
      param_2 = param_2 - lVar1;
      auStack_30 = (unsigned int)uVar3;
    } while (param_2 != 0);
  }
  fn_82A77548(param_1);
  return uVar2;
}
