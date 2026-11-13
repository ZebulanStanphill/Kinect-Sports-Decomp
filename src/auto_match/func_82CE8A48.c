extern int fn_82CE86F0();
extern int fn_82CE8758();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CFBB08();


void fn_82CE8A48(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = fn_82CE86F0(param_1,param_3);
  if (param_4 == 0) {
    fn_82CE98C8();
  }
  else {
    fn_82CE9810((uVar3 + (uVar3 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_2 + 0x2c);
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x88)) {
    iVar2 = (int)((uVar3 + 0x11 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar2 + (int)param_2);
    if (sVar1 != 0) {
      *(short *)(iVar2 + (int)param_2) = sVar1 + -1;
      fn_82CFBB08(*(unsigned int *)((int)((uVar3 + 0x1e & 0xffffffff) << 2) + param_1),1);
      return;
    }
  }
  fn_82CE8758(param_1,param_2);
  return;
}

