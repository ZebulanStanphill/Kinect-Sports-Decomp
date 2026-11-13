extern int fn_82850FA8();
extern int fn_828510B8();
extern unsigned int lbl_821AAD20;


void fn_82851428(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    dVar4 = (double)lbl_821AAD20;
    do {
      iVar1 = *(int *)(param_1 + 0x17c);
      fn_82850FA8(param_1,param_2,uVar3,(unsigned __int64)*(unsigned int *)(iVar1 + iVar2) - 1,param_3);
      fn_828510B8(dVar4,param_1,param_2,uVar3,(unsigned __int64)*(unsigned int *)(iVar1 + iVar2) - 1);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x178));
  }
  return;
}

