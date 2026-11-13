extern int fn_82930318();
extern int fn_82933088();
extern int fn_8297FC70();
extern int fn_82980C18();
extern int fn_829814B0();
extern int fn_82981598();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_82983380();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_829873C0();


int fn_829885C0(int param_1,int *param_2,int *param_3,int param_4,unsigned __int64 param_5)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  int *apiStack_60 [24];
  
  apiStack_60[0] = (int *)0x0;
  if ((param_2 != (int *)0x0) && (param_2[1] == 3)) {
    fn_829873C0(param_1,0,param_2 + 4,0,0,*(unsigned int *)(param_1 + 0x14),1,apiStack_60);
    param_2 = apiStack_60[0];
  }
  piVar9 = (int *)(param_1 + 0x28);
  if (param_4 == 0) {
    iVar3 = 0;
    if (param_3 != (int *)0x0) {
      if (param_3[1] != 0xe) {
        return 0;
      }
      iVar3 = param_3[4];
      piVar9 = param_3 + 0xc;
    }
    iVar4 = fn_829846B0(param_1,param_2,iVar3,param_5);
    if (iVar4 == 0) {
      fn_82984B00(param_1,piVar9,0,param_2,iVar3,param_5);
      return 0;
    }
    iVar4 = fn_82981598(param_1,param_2);
    if (iVar4 == 0) {
      iVar3 = fn_82981598(param_1,iVar3);
      uVar1 = 0;
      if (iVar3 == 0) goto LAB_82988718;
    }
    uVar1 = 1;
  }
  else {
    if (((param_2 == (int *)0x0) || (param_2[1] != 9)) ||
       (iVar3 = fn_82981668(param_1,param_2), iVar3 == 0)) {
      uVar7 = 0xbdd;
      uVar8 = 0xffffffff8204e7d4;
      goto LAB_829888ac;
    }
    if ((param_3 != (int *)0x0) && (param_3[1] != 1)) {
      return 0;
    }
    uVar1 = fn_82981598(param_1,param_2);
  }
LAB_82988718:
  uVar2 = fn_8297FC70(param_1,param_3);
  uVar2 = uVar2 | uVar1;
  iVar3 = (int)uVar2;
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82933088(uVar1,0,0,0,0,1,piVar9);
  }
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    iVar5 = (**(int (***)())(*param_2 + 4))(param_2);
    *(int *)(iVar4 + 0x10) = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (param_3 != (int *)0x0) {
    iVar5 = (**(int (***)())(*param_3 + 4))(param_3);
    *(int *)(iVar4 + 0x20) = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (param_4 != 0) {
    for (iVar5 = *(int *)(iVar4 + 0x20); iVar3 = (int)uVar2, iVar5 != 0;
        iVar5 = *(int *)(iVar5 + 0xc)) {
      iVar6 = *(int *)(iVar5 + 8);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0xe)) {
        iVar6 = fn_82981668(param_1,*(unsigned int *)(iVar6 + 0x10));
        if (iVar6 == 0) {
          uVar7 = 0xbc9;
          uVar8 = 0xffffffff8204e7a0;
          goto LAB_829888ac;
        }
        if (iVar3 == 0) {
          uVar2 = fn_82981598(param_1,*(unsigned int *)(*(int *)(iVar5 + 8) + 0x10));
        }
      }
    }
  }
  if (iVar3 != 0) {
    fn_829814B0(param_1,*(unsigned int *)(iVar4 + 0x10),1);
  }
  if (param_4 != 0) {
    iVar5 = 0;
    for (iVar3 = *(int *)(iVar4 + 0x20); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar6 = *(int *)(iVar3 + 8);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0xe)) {
        iVar6 = fn_82981738(param_1,*(unsigned int *)(iVar6 + 0x10));
        iVar5 = iVar6 + iVar5;
      }
    }
    iVar3 = fn_82981738(param_1,*(unsigned int *)(iVar4 + 0x10));
    if (iVar5 != iVar3) {
      uVar7 = 0xbc6;
      uVar8 = 0xffffffff8204e764;
LAB_829888ac:
      fn_82980C18(param_1,piVar9,uVar7,uVar8);
      return 0;
    }
  }
  fn_82983380(param_1,iVar4);
  return iVar4;
}

