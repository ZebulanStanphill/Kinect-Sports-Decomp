extern int fn_82BE5C78();
extern int fn_82F68CC0();
extern unsigned int lbl_831751D0;


void fn_82BE5E88(int param_1,unsigned int *param_2,unsigned short *param_3)

{
  unsigned short uVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned short *puVar4;
  
  if (param_3 != (unsigned short *)0x0) {
    puVar4 = param_3;
    puVar3 = param_2;
    uVar2 = fn_82BE5C78();
    *puVar4 = uVar2;
    if (uVar2 == 0) {
      *puVar3 = 0;
    }
    else if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
            ((int)(unsigned int)uVar2 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20))) {
      uVar1 = (*(int (**)())lbl_831751D0)();
      *param_2 = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) +
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x1c),*param_3);
        *(unsigned int *)(param_1 + 0x20) = (unsigned int)*param_3 + *(int *)(param_1 + 0x20);
      }
    }
  }
  return;
}

