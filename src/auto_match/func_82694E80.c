extern int fn_8268AF70();
extern int fn_8268C210();
extern int fn_82693E40();
extern int fn_82693FE8();
extern unsigned int lbl_82196582;


unsigned int * fn_82694E80(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  
  param_1[1] = param_2;
  *param_1 = 0;
  param_1[7] = 0;
  fn_8268C210(param_1 + 8);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = fn_82693E40(param_1);
  piVar3 = param_1 + 6;
  param_1[6] = iVar1;
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = 1;
    *(unsigned int *)(*piVar3 + 0x10) = 0;
    uVar2 = fn_8268AF70(0xffffffff82196582,0,0x1505);
    *(unsigned int *)(*piVar3 + 0xc) = uVar2 & 0xffffff | 0xc0000000;
    *(unsigned char **)*piVar3 = &lbl_82196582;
    *(int *)(*piVar3 + 4) = *piVar3;
  }
  fn_82693FE8(param_1,param_1,piVar3,*(unsigned int *)(*piVar3 + 0xc));
  return param_1;
}

