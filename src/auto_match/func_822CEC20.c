extern unsigned int *auStack_50;
extern int fn_822C72E0();
extern int fn_822D6D28();
extern int fn_82375CA8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8288B760();


unsigned __int64 fn_822CEC20(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar3;
  int iVar4;
  char cVar5;
  __int64 lVar2;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_50 [20];
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar3 = *(unsigned int *)(param_1 + 0x16c);
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 != 0) {
    if ((param_2 & 1) == 0) {
      uVar3 = (unsigned int)param_2 & 2;
      if ((-uVar3 & ~uVar3) >> 0x1f != *(unsigned int *)(param_1 + 0x2a4)) {
        fn_82375CA8(*(unsigned int *)(param_1 + 0x1c0),*(unsigned int *)(param_1 + 0x2c),0);
      }
    }
    *(unsigned int *)(param_1 + 0x354) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 4) == 0) {
        iVar4 = (int)param_4;
        if ((int)param_3 == 2) {
          if (iVar4 == 0) {
            uVar7 = 0xffffffff821ad324;
          }
          else {
            uVar7 = 0xffffffff821ad304;
          }
        }
        else if ((int)param_3 == 3) {
          if (iVar4 == 0) {
            uVar7 = 0xffffffff821ad35c;
          }
          else {
            uVar7 = 0xffffffff821ad33c;
          }
        }
        else if (iVar4 == 0) {
          uVar7 = 0xffffffff821ad234;
        }
        else {
          uVar7 = 0xffffffff821ad378;
        }
        if (iVar4 == 0) {
          auStack_50[0] = *(unsigned int *)(*(int *)(param_1 + 0x1c0) + 800);
          auStack_50[0] =
               fn_82535298(auStack_50,**(unsigned int **)(*(int *)(param_1 + 0x1c0) + 0x9b8),
                                 0xffffffff83296bc0,0xffffffff83296bd0);
          fn_82536288(auStack_50);
        }
        *(int *)(param_1 + 0x354) = iVar4;
      }
      else {
        uVar7 = 0xffffffff821ad250;
      }
    }
    else {
      uVar7 = 0xffffffff821ad244;
    }
    iVar4 = fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20),uVar7);
    if (iVar4 != 0) {
      uVar6 = 1;
      piVar1 = *(int **)(param_1 + 0x168);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x84);
      if ((((piVar1 != (int *)0x0) && (cVar5 = fn_8288B760(piVar1), cVar5 != '\0')) && (iVar4 != 0)
          ) && (piVar1[0x2f] != 0)) {
        lVar2 = (**(int (***)())(*piVar1 + 0x50))(piVar1);
        fn_822D6D28(lVar2 + 400,param_2,param_3,param_4 != 0);
      }
    }
  }
  iVar4 = (*(int *)(param_1 + 0x2c) * 2 + *(int *)(param_1 + 0x28)) * 0x88 +
          *(int *)(param_1 + 0x1c0) + 0xa14;
  *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
  return uVar6;
}

