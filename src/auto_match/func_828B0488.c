extern int fn_8289F160();
extern unsigned int uStack_20;


unsigned int fn_828B0488(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uStack_20;
  int aiStack_1c [3];
  
  uStack_20 = *(unsigned int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  fn_8289F160(aiStack_1c,iVar1 + 0x21c,&uStack_20);
  uVar2 = 0;
  if (aiStack_1c[0] != *(int *)(iVar1 + 0x220)) {
    uVar2 = *(unsigned int *)(aiStack_1c[0] + 0x10);
  }
  return uVar2;
}

