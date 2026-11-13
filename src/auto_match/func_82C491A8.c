extern int fn_82F68CC0();
extern unsigned int iStack_8c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


unsigned __int64 fn_82C491A8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  struct { unsigned int first; int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;

  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6070);
    if (*(int *)(iVar1 + 0x2c8) == 0) {
      if ((*(unsigned int *)(param_1 + 0x5614) & 2) == 0) {
        uVar2 = -(unsigned __int64)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff9;
      }
      else {
        stack_pair_90.first = *(unsigned int *)(param_1 + 0x5610);
        uStack_84 = 1;
        uStack_88 = *(unsigned int *)(param_1 + 0xb148);
        stack_pair_90.second = param_1;
        fn_82F68CC0(&uStack_80,param_2,0x5c);
        uStack_7c = *(unsigned int *)(param_1 + 0x5628);
        uStack_78 = *(unsigned int *)(param_1 + 0x562c);
        uStack_80 = (unsigned int)(*(int *)(param_1 + 0x5580) != 0);
        uVar2 = (**(int (***)())(iVar1 + 0xc0))(&stack_pair_90.first);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
