extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern unsigned int lbl_831751D0;


void fn_82BE5DC0(int param_1,int *param_2,unsigned short *param_3)

{
  unsigned __int64 uVar1;
  unsigned short uVar4;
  int iVar2;
  unsigned int uVar3;
  int *piVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  
  if (param_3 != (unsigned short *)0x0) {
    puVar6 = param_3;
    piVar5 = param_2;
    uVar4 = fn_82BE5C78();
    *puVar6 = uVar4;
    if (uVar4 == 0) {
      *piVar5 = 0;
    }
    else if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
            ((int)(unsigned int)uVar4 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20))) {
      iVar2 = (*(int (**)())lbl_831751D0)((unsigned __int64)uVar4 << 2);
      *param_2 = iVar2;
      if ((iVar2 != 0) && (*param_3 != 0)) {
        uVar7 = 0;
        do {
          uVar3 = fn_82BE5CC0(param_1);
          uVar1 = uVar7 & 0xffffffff;
          uVar7 = uVar7 + 1 & 0xffff;
          *(unsigned int *)((int)(uVar1 << 2) + *param_2) = uVar3;
        } while (uVar7 < *param_3);
      }
    }
  }
  return;
}

