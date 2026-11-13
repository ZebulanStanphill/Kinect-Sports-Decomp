extern unsigned int *auStack_50;
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82932548();
extern int fn_82933088();
extern int fn_82933578();
extern int fn_829814B0();
extern int fn_82983380();
extern int fn_829873C0();


int fn_82988378(int param_1,int param_2,unsigned int param_3)

{
  char cVar1;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar2;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned int auStack_50 [20];
  
  auStack_50[0] = 0;
  cVar1 = '\0';
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) != 3) {
    return 0;
  }
  param_2 = param_2 + 0x10;
  uVar5 = param_3;
  if ((param_3 == 0) &&
     (iVar4 = fn_829873C0(param_1,1,param_2,0,0,*(unsigned int *)(param_1 + 0x14),
                            *(int *)(param_1 + 0x54) != 0,auStack_50), uVar5 = auStack_50[0],
     iVar4 != 0)) {
    if (*(int *)(param_1 + 0x54) != 0) {
      return 0;
    }
    iVar4 = fn_82930318(0x58);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82932548();
    }
    if (uVar5 == 0) {
      return 0;
    }
    cVar1 = '\x01';
    *(unsigned int *)(uVar5 + 0x14) = 1;
    *(unsigned int *)(uVar5 + 0x28) = 0;
    *(unsigned int *)(uVar5 + 0x2c) = 0x202;
    uVar2 = fn_82930318(0x28);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82931D88(uVar2,0,5,0,1,1,0x200200);
    }
    *(int *)(uVar5 + 0x30) = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  uVar2 = fn_82930318(0x50);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82933088(uVar2,0,0,0,0,1,param_2);
  }
  if (iVar4 != 0) {
    if (*(int **)(uVar5 + 0x34) == (int *)0x0) {
      uVar2 = fn_82930318(0x40);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_82933578(uVar2,cVar1 + '\x06',*(unsigned int *)(uVar5 + 0x10),
                             *(unsigned int *)(uVar5 + 0x14),param_2);
      }
      *(int *)(iVar4 + 0x20) = iVar6;
    }
    else {
      iVar6 = (**(int (***)())(**(int **)(uVar5 + 0x34) + 4))();
      *(int *)(iVar4 + 0x20) = iVar6;
    }
    if (iVar6 != 0) {
      uVar3 = fn_82930458(*(unsigned int *)(uVar5 + 0x30));
      *(int *)(iVar4 + 0x10) = (int)uVar3;
      if (param_3 != 0) {
        fn_829814B0(param_1,uVar3,0);
      }
      uVar2 = fn_82930318(0x14);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_829304E0(uVar2,*(unsigned int *)(iVar4 + 0x20),0,0xffffffff8204e390);
      }
      if (iVar6 != 0) {
        *(int *)(iVar4 + 0x20) = iVar6;
        fn_82983380(param_1,iVar4);
        return iVar4;
      }
    }
  }
  return 0;
}

