extern int fn_82F681D0();
extern int fn_82F6F960();
extern unsigned int lbl_831BB648;
extern unsigned int lbl_831BB64C;


void fn_82F682B0(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar1 = fn_82F6F960();
  puVar3 = (unsigned int *)&lbl_831BB648;
  puVar4 = &lbl_831BB64C;
  if (iVar1 != 0) {
    puVar4 = (unsigned int *)(iVar1 + 0xc);
  }
  *puVar4 = (int)param_1;
  iVar1 = fn_82F6F960();
  if (iVar1 != 0) {
    puVar3 = (unsigned int *)(iVar1 + 8);
  }
  uVar2 = fn_82F681D0(param_1);
  *puVar3 = uVar2;
  return;
}

