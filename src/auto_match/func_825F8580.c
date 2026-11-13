extern int fn_82536008();
extern int fn_82536288();
extern int fn_825F84F0();
extern int fn_825F8A48();


unsigned __int64 fn_825F8580(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_2 + 0x18) * 4 + param_2 + -4) * 0x2c + param_1;
  uVar1 = *(unsigned char *)(iVar4 + 0x2a);
  uVar2 = *(unsigned char *)(iVar4 + 0x2b);
  fn_82536008(*(unsigned int *)(iVar4 + 8));
  fn_82536288(iVar4 + 8);
  iVar3 = (*(int *)(param_2 + 0x18) + -1) * 4;
  iVar4 = *(int *)(iVar3 + param_2);
  *(unsigned int *)(iVar3 + param_2) = 0xffffffff;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
  fn_825F84F0(iVar4 * 0x2c + param_1 + 4);
  fn_825F8A48(param_1,uVar1,uVar2);
  return 0xffffffffffffffff;
}

