#define true 1
extern unsigned int *auStack_30;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_82F63108();
extern unsigned int lbl_821B37B4;
extern unsigned int uStack_60;


void fn_82372938(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uStack_60;
  unsigned int *apuStack_5c [3];
  unsigned char **ppuStack_50;
  unsigned int *puStack_4c;
  unsigned char ***pppuStack_40;
  unsigned char auStack_30 [24];
  
  iVar4 = *(int *)(param_1 + 0x204);
  if (iVar4 == 0) {
    return;
  }
  uStack_60 = 0;
  if (iVar4 == 1) {
    uStack_60 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x1e0);
    iVar4 = *(int *)(*(int *)(param_1 + 0x260) + 0x1d8);
  }
  else {
    if (iVar4 != 2) goto LAB_8237299c;
    uStack_60 = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x21c);
    iVar4 = *(int *)(*(int *)(param_1 + 0x260) + 0x270);
  }
  if (iVar4 != 0) {
    return;
  }
LAB_8237299c:
  puStack_4c = &uStack_60;
  pppuStack_40 = &ppuStack_50;
  ppuStack_50 = &lbl_821B37B4;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
  iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
  iVar3 = fn_822C5B18(auStack_30,&ppuStack_50);
  puVar2 = *(unsigned int **)(iVar4 + 4);
  apuStack_5c[0] = (unsigned int *)*puVar2;
  while( true ) {
    if (apuStack_5c[0] == puVar2) {
      fn_82359C18(iVar3);
      fn_82359C18(&ppuStack_50);
      return;
    }
    piVar1 = *(int **)(iVar3 + 0x10);
    if (piVar1 == (int *)0x0) break;
    (**(int (***)())(*piVar1 + 4))(piVar1,apuStack_5c[0][4]);
    fn_82381BC0(apuStack_5c);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

