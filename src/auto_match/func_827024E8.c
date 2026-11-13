extern int fn_8267BE38();
extern int fn_826FA538();
extern unsigned int lbl_82007120;
extern unsigned int lbl_8200C90C;


void fn_827024E8(unsigned int *param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  *param_1 = &lbl_8200C90C;
  if ((*(unsigned char *)(param_1 + 1) & 0x80) != 0) {
    piVar1 = *(int **)((int)param_1 + 5);
    if (piVar1 != (int *)0x0) {
      uVar2 = (unsigned __int64)(unsigned int)piVar1[1];
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + *piVar1) != 0) {
            fn_826FA538(*(int *)(iVar3 + *piVar1),1);
          }
          uVar2 = uVar2 - 1;
          iVar3 = iVar3 + 4;
        } while (uVar2 != 0);
      }
      fn_8267BE38(*piVar1);
      fn_8267BE38(piVar1);
    }
  }
  *param_1 = &lbl_82007120;
  return;
}

