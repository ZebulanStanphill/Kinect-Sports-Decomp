extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


unsigned __int64 fn_82BF86C0(int param_1,int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int *puVar6;
  
  if ((((param_2 != (int *)0x0) && (param_3 != 0)) && (3 < param_3)) &&
     (((*param_2 == 0 && (7 < param_3)) && ((param_2[1] == param_3 && (0x2f < param_3)))))) {
    *(int *)(param_1 + 8) = param_2[2];
    uVar3 = fn_82BA02A8(*(unsigned __int64 *)(param_2 + 3));
    *(unsigned __int64 *)(param_1 + 0x10) = uVar3;
    *(int *)(param_1 + 0x18) = param_2[5];
    *(int *)(param_1 + 0x1c) = param_2[6];
    *(int *)(param_1 + 0x20) = param_2[7];
    *(int *)(param_1 + 0x24) = param_2[8];
    *(int *)(param_1 + 0x28) = param_2[9];
    if (*(int *)(param_1 + 0x2c) != 0) {
      (*(int (**)())lbl_831751CC)();
    }
    uVar1 = param_2[10];
    piVar5 = param_2 + 0xb;
    if (uVar1 <= (int)param_2 + (param_3 - (int)piVar5) + -4) {
      uVar4 = (*(int (**)())lbl_831751D0)(uVar1 + 1);
      *(int *)(param_1 + 0x2c) = (int)uVar4;
      if ((uVar4 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar4,piVar5,uVar1);
        *(unsigned char *)(*(int *)(param_1 + 0x2c) + uVar1) = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          (*(int (**)())lbl_831751CC)();
        }
        uVar2 = *(unsigned int *)(uVar1 + (int)piVar5);
        puVar6 = (unsigned int *)(uVar1 + (int)piVar5) + 1;
        if (uVar2 <= (int)param_2 + (param_3 - (int)puVar6)) {
          uVar4 = (*(int (**)())lbl_831751D0)(uVar2 + 1);
          *(int *)(param_1 + 0x30) = (int)uVar4;
          if ((uVar4 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar4,puVar6,uVar2);
            *(unsigned char *)(uVar2 + *(int *)(param_1 + 0x30)) = 0;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

