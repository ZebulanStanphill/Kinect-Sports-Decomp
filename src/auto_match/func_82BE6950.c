extern int fn_82BE5C78();
extern int fn_82F68CC0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_831751D0;


int fn_82BE6950(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82BE5C78();
  uVar1 = uVar1 & 0xffff;
  if ((((uVar1 < 0x7d1) && (*(int *)(param_1 + 0x1c) != 0)) && (0 < *(int *)(param_1 + 0x28))) &&
     (((int)uVar1 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) &&
      (iVar2 = (*(int (**)())lbl_831751D0)(uVar1 + 1), iVar2 != 0)))) {
    fn_82F68CC0(iVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) + (unsigned __int64)*(unsigned int *)(param_1 + 0x1c),
                 uVar1);
    *(unsigned char *)(uVar1 + iVar2) = lbl_820E975C;
    *(unsigned int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

