extern int fn_82586CB0();
extern int fn_82586F28();
extern int fn_8265BF48();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


unsigned int fn_82586B60(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uStack_20;
  unsigned int iStack_1c;
  
  iVar1 = fn_82586CB0();
  uStack_20 = fn_8265BF48(param_1,0);
  fn_82586F28(&iStack_1c,iVar1,&uStack_20);
  uVar2 = 0;
  if (iStack_1c != *(int *)(iVar1 + 4)) {
    uVar2 = *(unsigned int *)(iStack_1c + 0xc);
  }
  return uVar2;
}

