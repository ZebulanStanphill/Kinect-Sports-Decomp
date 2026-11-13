extern int fn_82FA5190();
extern int fn_82FB0C10();
extern int fn_82FB1A08();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FB0E40(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x98);
    fn_82FA5190(lbl_831BC768);
    *(unsigned int *)(param_1 + 0x98) = 0;
    *(unsigned int *)(param_1 + 0x9c) = 0;
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
  *(unsigned int *)(param_1 + 0x94) = param_4;
  iVar3 = fn_82FB1A08((unsigned int *)(param_1 + 0x98),param_2);
  if (iVar3 == 1) {
    uVar1 = param_2 & 0xffffffff;
    while (uVar1 != 0) {
      fn_82FB0C10(param_1,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 - 1;
      uVar1 = param_2;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

