extern int fn_823864B8();
extern int fn_823866C0();
extern int fn_82386848();
extern int fn_82386910();
extern int fn_8265CA20();
extern unsigned int lbl_821B41FC;
extern unsigned int lbl_83276560;
extern unsigned int lbl_83276564;
extern unsigned int uRam8327655c;


void fn_82384A18(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *apuStack_40 [16];
  
  uVar3 = (unsigned __int64)uRam8327655c;
  *param_1 = &lbl_821B41FC;
  iVar2 = lbl_83276560;
  uRam8327655c = (unsigned int)(uVar3 - 1);
  if (uVar3 - 1 == 0) {
    if (lbl_83276560 != 0) {
      fn_82386848(apuStack_40,lbl_83276560,**(unsigned int **)(lbl_83276560 + 4));
      fn_8265CA20(*(unsigned int *)(iVar2 + 4));
      fn_8265CA20(iVar2);
    }
    iVar2 = lbl_83276564;
    lbl_83276560 = 0;
    if (lbl_83276564 != 0) {
      fn_82386910(apuStack_40,lbl_83276564,**(unsigned int **)(lbl_83276564 + 4));
      fn_8265CA20(*(unsigned int *)(iVar2 + 4));
      fn_8265CA20(iVar2);
    }
    lbl_83276564 = 0;
  }
  else {
    apuStack_40[0] = param_1;
    fn_823864B8(apuStack_40);
    apuStack_40[0] = param_1;
    fn_823866C0(apuStack_40);
  }
  puVar1 = (unsigned int *)param_1[0x7e8];
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    param_1[0x7e8] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x7e9];
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    param_1[0x7e9] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x7ea];
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    param_1[0x7ea] = 0;
  }
  return;
}

