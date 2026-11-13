extern unsigned int *auStack_40;
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF848();
extern int fn_826DFA28();
extern int fn_826E7998();
extern int fn_826F4A18();


void fn_826DFFC0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  unsigned int uVar4;
  unsigned int iVar6;
  unsigned int uVar7;
  unsigned int auStack_40;
  
  uVar5 = fn_826A6A38();
  iVar6 = *(int *)(param_1 + 0x314);
  if (iVar6 == 0) {
    iVar6 = param_1 + 0x28;
  }
  fn_826A9280(param_1 + 0x14,"  GFx_DefineBitsJpeg2Loader: charid = %d pos = 0x%x\n",uVar5 & 0xffff,
                    ((unsigned __int64)*(unsigned int *)(iVar6 + 0x34) - (unsigned __int64)*(unsigned int *)(iVar6 + 0x30)) +
                    (unsigned __int64)*(unsigned int *)(iVar6 + 0x2c));
  uVar7 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar1 == (int *)0x0) {
    fn_826DFA28(param_1 + 0x14,"Error: Jpeg system is not installed - can't load jpeg image data\n");
  }
  else {
    iVar6 = *(int *)(param_1 + 0x314);
    if (iVar6 == 0) {
      iVar6 = param_1 + 0x28;
    }
    fn_826E7998(iVar6);
    *(unsigned char *)(iVar6 + 0x38) = 1;
    iVar2 = *piVar1;
    uVar3 = *(unsigned int *)(iVar6 + 0x10);
    uVar4 = fn_826DF848(param_1);
    uVar7 = (*(int (**)())(iVar2 + 0xc))(piVar1,uVar3,uVar4);
  }
  auStack_40 = uVar5 & 0xffff;
  fn_826F4A18(param_1,&auStack_40,uVar7);
  if ((uVar7 & 0xffffffff) != 0) {
    fn_8267C498(uVar7);
  }
  return;
}

