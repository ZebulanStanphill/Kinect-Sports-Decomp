extern int fn_82CE5410();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134CD4;


unsigned int * fn_82D39B70(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = param_1 + -4;
  *param_1 = &lbl_82134CD4;
  *puVar1 = &lbl_8212FC60;
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 8))
              (*(int **)(iVar2 + 0x10),puVar1,*(unsigned short *)(param_1 + -3));
  }
  return puVar1;
}

