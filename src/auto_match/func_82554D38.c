extern int fn_82522DF8();
extern int fn_82BFEB90();
extern int lbl_8326B370[];


int fn_82554D38(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar3 = fn_82522DF8(0x44);
  *(unsigned int *)(iVar3 + 8) = 0;
  uVar2 = lbl_8326B370[0x31];
  uVar1 = lbl_8326B370[0x30];
  *(unsigned int *)(iVar3 + 0x1c) = 0;
  *(unsigned int *)(iVar3 + 0x20) = 0;
  *(unsigned int *)(iVar3 + 0x28) = uVar2;
  *(unsigned int *)(iVar3 + 0x24) = uVar1;
  if (*(unsigned int *)(iVar3 + 0x18) != 0) {
    fn_82BFEB90(*(int *)(iVar3 + 0x18),iVar3 + 0x1c);
  }
  return iVar3;
}

