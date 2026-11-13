extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E0DF70();
extern int fn_82E162A8();


unsigned __int64 fn_82E0B220(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(unsigned int *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(unsigned int *)(param_1 + 0x18),0);
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x14);
    iVar5 = fn_82CE5410();
    param_3 = fn_82CE52E0(*(unsigned int *)(iVar5 + 0x10),
                                ((unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0xfffffff)
                                << 4);
    fn_82E0DF70(*(unsigned int *)(param_1 + 0x18),param_3);
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14) * 0x30;
  iVar5 = (**(int (***)())(*param_2 + 0x10))(param_2,param_3,iVar8);
  if (iVar5 == iVar8) {
    *(int *)(param_1 + 0x20) = (int)param_3;
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x14);
    iVar5 = fn_82CE5410();
    if ((int)(*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) < (int)uVar1) {
      uVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) << 1;
      if ((int)uVar7 <= (int)uVar1) {
        uVar7 = (unsigned __int64)uVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),(int *)(param_1 + 0x24),uVar7,4);
    }
    uVar7 = (unsigned __int64)uVar1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
    if (0 < (__int64)uVar7) {
      puVar6 = (unsigned int *)(*(unsigned int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x24) + -4);
      uVar3 = uVar7 & 0xffffffff;
      while (uVar3 != 0) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
        uVar3 = uVar7;
      }
    }
    *(unsigned int *)(param_1 + 0x28) = uVar1;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) < 4) {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x14);
      uVar7 = (unsigned __int64)uVar1;
      if (0 < (int)uVar1) {
        puVar6 = (unsigned int *)(*(int *)(param_1 + 0x20) + -0xc);
        do {
          puVar2 = puVar6 + 0xd;
          puVar6[0xe] = *puVar2;
          puVar6 = puVar6 + 0xc;
          *puVar6 = *puVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

