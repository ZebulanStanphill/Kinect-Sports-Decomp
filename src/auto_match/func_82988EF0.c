extern int fn_82930318();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82980C18();
extern int fn_82983380();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_829885C0();


int fn_82988EF0(unsigned __int64 param_1,int *param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_2[1] != 0xe) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 4) != 0xe) {
    return 0;
  }
  iVar7 = param_3 + 0x30;
  uVar3 = fn_82930318(0x50);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82933088(uVar3,0,0x1c,0,0,1,iVar7);
  }
  if (iVar4 == 0) {
    return 0;
  }
  iVar5 = param_2[4];
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar5 == 0) {
LAB_82989190:
    uVar8 = 0xbcd;
    uVar9 = 0xffffffff8204e880;
    goto LAB_8298919c;
  }
  if (*(int *)(iVar5 + 4) == 8) {
    if (*(int **)(iVar5 + 0x10) != (int *)0x0) {
      iVar5 = (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))();
      *(int *)(iVar4 + 0x10) = iVar5;
      goto joined_r0x82989080;
    }
  }
  else {
    if (*(int *)(iVar5 + 4) != 9) goto LAB_82989190;
    if (*(int *)(iVar5 + 0x10) == 1) {
      uVar3 = fn_82930318(0x28);
      if ((uVar3 & 0xffffffff) == 0) goto LAB_82989074;
      uVar2 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x24) & 0x200;
LAB_82989058:
      uVar10 = 1;
      uVar8 = 0;
LAB_82989060:
      iVar5 = fn_82931D88(uVar3,uVar8,*(unsigned int *)(iVar5 + 0x14),0,1,uVar10,uVar2);
    }
    else {
      if (*(int *)(iVar5 + 0x10) == 2) {
        uVar3 = fn_82930318(0x28);
        if ((uVar3 & 0xffffffff) != 0) {
          uVar8 = 1;
          uVar10 = *(unsigned int *)(iVar5 + 0x20);
          uVar2 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x24) & 0x200;
          goto LAB_82989060;
        }
      }
      else {
        if ((*(unsigned int *)(iVar5 + 0x24) & 0x200000) == 0) goto LAB_82989190;
        uVar3 = fn_82930318(0x28);
        if ((uVar3 & 0xffffffff) != 0) {
          uVar2 = ((unsigned __int64)*(unsigned int *)(iVar5 + 0x24) & 0x3ffe00) << 0x20 |
                  (unsigned __int64)*(unsigned int *)(iVar5 + 0x24) & 0x200200;
          goto LAB_82989058;
        }
      }
LAB_82989074:
      iVar5 = 0;
    }
    *(int *)(iVar4 + 0x10) = iVar5;
joined_r0x82989080:
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 9)) && (*(int *)(iVar1 + 0x10) == 0)) {
    iVar5 = (**(int (***)())(*param_2 + 4))(param_2);
    *(int *)(iVar4 + 0x20) = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
    uVar3 = fn_82930318(0x28);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_82931D88(uVar3,0,6,0,1,1,0);
    }
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = fn_829846B0(param_1,iVar5,iVar1,0);
    if (iVar6 == 0) {
      fn_82984B00(param_1,iVar7,*(unsigned int *)(param_3 + 0x38),iVar5,iVar1,0);
      return 0;
    }
    *(unsigned int *)(iVar5 + 0x24) = *(unsigned int *)(iVar5 + 0x24) | 0x400000;
    iVar7 = fn_829885C0(param_1,iVar5,param_3,0,0);
    *(int *)(iVar4 + 0x24) = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
    fn_82983380(param_1,iVar4);
    return iVar4;
  }
  uVar8 = 0xbeb;
  uVar9 = 0xffffffff8204e890;
LAB_8298919c:
  fn_82980C18(param_1,iVar7,uVar8,uVar9);
  return 0;
}

