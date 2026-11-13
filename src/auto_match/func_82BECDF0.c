extern unsigned int fn_82BEC810(char *);
extern void (*lbl_831751CC)(unsigned int);


unsigned __int64 fn_82BECDF0(int param_1,char *param_2)

{
  unsigned int iVar1;
  
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    lbl_831751CC(*(unsigned int *)(param_1 + 0x1c));
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = fn_82BEC810(param_2);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

