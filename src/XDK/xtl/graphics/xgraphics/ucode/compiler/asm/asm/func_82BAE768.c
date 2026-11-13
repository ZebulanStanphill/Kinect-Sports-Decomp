extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_820540D0;
extern unsigned int lbl_820DF0C4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAE768(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (**(char **)(param_1 + 0x10) == '\0') {
    iVar3 = fn_82BA92B0(param_2);
    iVar4 = fn_82BC24F0(0x5a,*(unsigned int *)(param_1 + 0xc));
    uVar1 = *(unsigned int *)(iVar3 + 0x38);
    *(unsigned int *)(iVar4 + 0x50) = 0;
    uVar2 = lbl_820DF0C4;
    *(unsigned int *)(iVar4 + 0x38) = uVar1;
    dVar5 = (double)lbl_820540D0;
    *(unsigned int *)(iVar4 + 0x80) = uVar2;
    *(unsigned int *)(iVar4 + 0x34) = 3;
    fn_82BC34D8(dVar5,dVar5,dVar5,iVar4,*(unsigned int *)(param_1 + 0x10),1);
    fn_82BC5538(param_1,iVar4);
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  return;
}

