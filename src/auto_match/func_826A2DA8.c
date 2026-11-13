extern int fn_8267B890();
extern int fn_82695DA0();
extern int fn_827A9810();


void fn_826A2DA8(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  fn_827A9810((int *)(param_1 + 0x34),*(unsigned int *)(param_3 + 0x38));
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + *(int *)(param_3 + 0x34)) != 0) {
        uVar1 = fn_8267B890(param_2,0x10,0);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82695DA0(uVar1,*(unsigned int *)(iVar4 + *(int *)(param_3 + 0x34)));
        }
        *(unsigned int *)(*(int *)(param_1 + 0x34) + iVar4) = uVar2;
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 != 0);
  }
  return;
}

