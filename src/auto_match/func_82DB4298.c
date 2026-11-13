extern int fn_82CE5410();
extern int fn_82D83D30();
extern int fn_82D841E0();
extern int fn_82DB4458();
extern int fn_82DC82A8();


void fn_82DB4298(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  if (iVar2 == 0) {
    iVar2 = fn_82CE5410();
    iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x4c);
    *(unsigned short *)(iVar2 + 4) = 0x4c;
    uVar1 = fn_82DB4458();
    *(int *)(param_1 + 0x1c0) = (int)uVar1;
    lVar3 = uVar1 + 0xc;
    if ((uVar1 & 0xffffffff) == 0) {
      lVar3 = 0;
    }
    fn_82D841E0(param_1,lVar3);
    lVar3 = uVar1 + 8;
    if ((uVar1 & 0xffffffff) == 0) {
      lVar3 = 0;
    }
    fn_82D83D30(param_1,lVar3);
    fn_82DC82A8(uVar1 + 0x14,param_1);
  }
  else {
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  }
  return;
}

