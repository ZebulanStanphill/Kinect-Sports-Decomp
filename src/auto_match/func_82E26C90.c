extern unsigned int lbl_83187510;
extern unsigned int lbl_83187518;


unsigned __int64 fn_82E26C90(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  __int64 lVar6;
  
  iVar2 = 0;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  if ((((0x27 < param_2) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 4)) && (iVar1 != 5)) &&
     ((iVar1 != 2 && (iVar1 != 1)))) {
    if ((iVar1 != 0) && ((iVar1 != 3 && (iVar1 != 0x4d415243)))) {
      if (param_4 != (unsigned int *)0x0) {
        piVar4 = &lbl_83187510;
        lVar6 = 0x39;
        do {
          if (*piVar4 == *(int *)(param_1 + 0x10)) {
            *param_4 = 1;
          }
          piVar4 = piVar4 + 9;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *(unsigned int *)(param_1 + 0x10);
LAB_82e26d34:
      *param_3 = uVar5;
      return 0;
    }
    uVar3 = 0;
    piVar4 = &lbl_83187518;
    do {
      if (((*piVar4 != -1) && (iVar1 == *piVar4)) &&
         (trapWord(6,(unsigned __int64)(unsigned int)piVar4[3],0),
         (unsigned __int64)*(unsigned short *)(param_1 + 0xe) ==
         (unsigned __int64)(unsigned int)piVar4[1] / (unsigned __int64)(unsigned int)piVar4[3])) {
        if ((iVar1 == 3) && (param_2 < 0x34)) {
          return 0xffffffff80070057;
        }
        if (param_4 != (unsigned int *)0x0) {
          *param_4 = 1;
        }
        uVar5 = (&lbl_83187510)[iVar2 * 9];
        goto LAB_82e26d34;
      }
      uVar3 = uVar3 + 0x24;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 9;
    } while ((uVar3 & 0xffffffff) != 0x804);
  }
  return 0xffffffff80070057;
}

