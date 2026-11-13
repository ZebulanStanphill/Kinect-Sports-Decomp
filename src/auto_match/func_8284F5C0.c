extern int fn_8284E5C0();
extern int fn_82A1DDC0();


void fn_8284F5C0(int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,__int64 param_5)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  iVar1 = (int)param_4;
  lVar5 = param_5;
  uVar3 = fn_8284E5C0(param_1,*(unsigned int *)(iVar1 + 0x30),*(unsigned int *)(iVar1 + 0x2c));
  fn_82A1DDC0(lVar5,param_4,uVar3);
  iVar2 = (int)param_5;
  *(unsigned int *)(iVar2 + 4) = param_2;
  iVar6 = 0;
  *(int *)(iVar2 + 8) = (int)(param_5 + 0x40);
  lVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 8) * 0xc + (unsigned __int64)*(unsigned int *)(param_1 + 0x10)) * 0x14 +
          param_5 + 0x40;
  *(int *)(iVar2 + 0x28) = (int)lVar5;
  uVar7 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x2c) & 0x3fffffff) * 4 + lVar5 + 0xf & 0xfffffff0;
  if (0 < (int)*(unsigned int *)(iVar1 + 0x2c)) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + *(int *)(iVar1 + 0x28)) != 0) {
        *(int *)(iVar8 + *(int *)(iVar2 + 0x28)) = (int)uVar7;
        uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x30) + iVar8);
        lVar5 = fn_8284E5C0(uVar4,0,0);
        uVar7 = lVar5 + uVar7;
        fn_8284F5C0(uVar4,*(unsigned int *)(iVar8 + param_3),0,
                      *(unsigned int *)(iVar8 + *(int *)(iVar1 + 0x28)),
                      *(unsigned int *)(iVar8 + *(int *)(iVar2 + 0x28)));
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < *(int *)(iVar1 + 0x2c));
  }
  return;
}

