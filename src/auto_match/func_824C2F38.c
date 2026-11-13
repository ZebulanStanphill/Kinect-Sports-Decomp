extern int fn_82250A18();
extern int fn_8229E090();
extern int fn_8265C9E0();
extern unsigned int lbl_821C084C;
extern unsigned int lbl_832975B0;


unsigned int * fn_824C2F38(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  iVar2 = lbl_832975B0;
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = *(unsigned int *)(param_2 + 4);
    *puVar1 = &lbl_821C084C;
    if (iVar2 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(int *)(iVar2 + 0x58) != 0) {
      fn_8229E090(*(int *)(iVar2 + 0x58),0,1);
      *(unsigned int *)(iVar2 + 0x58) = 0;
    }
  }
  *param_1 = puVar1;
  return param_1;
}

