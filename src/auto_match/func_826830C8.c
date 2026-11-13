extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82682D30();
extern int fn_826961B0();
extern int fn_82696330();
extern void *fn_826B32D0();


void fn_826830C8(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  void *uVar1;
  unsigned char auStack_40 [16];
  
  iVar2 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))(*(int *)(param_1 + 0x68));
  uVar1 = fn_826B32D0(iVar2,*(unsigned int *)(*(int *)(iVar2 + 0x78) + 0x2a0),
                            *(int *)(iVar2 + 0x78) + 0x10,0,-1);
  fn_826961B0(auStack_40,uVar1);
  fn_82682D30(param_1,iVar2,auStack_40,param_2);
  fn_82696330(auStack_40);
  if (uVar1 != 0) {
    fn_826824B0(uVar1);
  }
  return;
}

