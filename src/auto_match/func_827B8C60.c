extern int fn_827B78D8();
extern int fn_827B7978();
extern int fn_827B8AD0();


void fn_827B8C60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  piVar3 = *(int **)(param_4 + 8);
  if (*piVar3 == 0) {
    uVar5 = (param_2 & 0x7fffffff) << 1;
    if (uVar5 < *(unsigned short *)(param_4 + 0x24)) {
      if ((piVar3[4] == 0) && (piVar3[5] == 0)) {
        fn_827B78D8(param_1,param_4,param_2);
      }
      else if ((piVar3[5] == 0) &&
              ((*(short *)((int)piVar3 + 0x1e) == *(short *)(*(int *)(param_4 + 0x1c) + 4) &&
               (uVar5 < *(unsigned short *)(piVar3 + 7))))) {
        uVar2 = *(unsigned short *)(piVar3 + 6);
        uVar1 = *(unsigned short *)(param_4 + 0x22);
        if ((uVar1 == uVar2) !=
            ((unsigned int)uVar1 + (unsigned int)*(unsigned short *)(param_4 + 0x24) ==
            (unsigned int)uVar2 + (unsigned int)*(unsigned short *)(piVar3 + 7))) {
          fn_827B7978(param_1,param_4,uVar1 == uVar2,param_2);
        }
      }
    }
  }
  iVar4 = fn_827B8AD0(param_1,param_2,param_3,*(unsigned int *)(param_4 + 8));
  if (iVar4 == 0) {
    *(short *)(param_4 + 0x26) = *(short *)(param_4 + 0x26) + 1;
  }
  uVar2 = *(unsigned short *)(param_4 + 0x26);
  if (uVar2 < 0x11) {
    if ((uVar2 != 0) && (iVar4 != 0)) {
      *(unsigned short *)(param_4 + 0x26) = uVar2 - 1;
    }
  }
  else {
    *(unsigned int *)(*(int *)(param_4 + 0x14) + 0x18) = *(unsigned int *)(param_4 + 0x18);
    *(unsigned int *)(*(int *)(param_4 + 0x18) + 0x14) = *(unsigned int *)(param_4 + 0x14);
    *(unsigned short *)(param_4 + 0x20) = *(unsigned short *)(param_4 + 0x20) | 0x4000;
  }
  return;
}

