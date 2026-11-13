extern int fn_82837D98();
extern int fn_82837DC0();
extern int fn_8284C7C0();
extern unsigned unsigned int iStack_20;
extern unsigned int uStack_1c;


void fn_8256B310(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int iStack_20;
  unsigned int uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(unsigned char *)(param_1 + 0x28) &= 0xf7;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  fn_8284C7C0(iVar2,&iStack_20);
  if (iStack_20 != 4) {
    fn_82837D98(iVar2,0,&uStack_1c);
    fn_82837DC0(iVar1,0,uStack_1c);
  }
  else {
    *(unsigned int *)(iVar1 + 0x34) = *(unsigned int *)(iVar2 + 0x34);
  }
  return;
}

