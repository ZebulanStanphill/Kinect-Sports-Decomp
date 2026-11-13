typedef unsigned char bool;
extern int fn_82BF6E50();
extern int fn_82F68CC0();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


unsigned __int64 fn_82BF6EE8(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    if ((*(int *)(param_1 + 8) == 0) || (*(unsigned int *)(param_1 + 0x10) == 0)) {
      uVar2 = fn_82BF6E50(param_1);
      return uVar2;
    }
    uVar5 = param_2;
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_82bf6f60:
      lVar3 = (*(int (**)())lbl_831751D0)(uVar5);
      if (lVar3 != 0) {
        fn_82F68CC0(lVar3,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
        (*(int (**)())lbl_831751CC)(*(unsigned int *)(param_1 + 8));
        *(int *)(param_1 + 8) = (int)lVar3;
        *(int *)(param_1 + 0x10) = (int)uVar5;
        return 1;
      }
    }
    else if (*(int *)(param_1 + 0x18) == 1) {
      uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffffff) << 1;
      do {
        if ((param_2 & 0xffffffff) <= uVar5) goto LAB_82bf6f60;
        uVar4 = (uVar5 & 0x7fffffff) << 1;
        bVar1 = uVar5 <= uVar4;
        uVar5 = uVar4;
      } while (bVar1);
    }
  }
  return 0;
}

