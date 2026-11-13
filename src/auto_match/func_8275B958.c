extern int fn_8267B890();
extern int fn_826A6A38();
extern int fn_826F33F0();
extern int fn_82759498();
extern int fn_827597E0();
extern int fn_8275B020();
extern unsigned int lbl_8200D4C0;
extern unsigned int stack0x00000000;


void fn_8275B958(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  int iVar1;
  unsigned char *pbVar2;
  unsigned int uVar6;
  unsigned char abStack_50 [80];
  
  uVar3 = fn_826A6A38(param_2);
  *(unsigned short *)(param_1 + 4) = uVar3;
  uVar4 = 0;
  if ((int)param_3 == 0x53) {
    uVar4 = fn_826A6A38(param_2);
    *(unsigned short *)(param_1 + 0x10) = uVar4;
    if ((uVar4 & 0x20) != 0) {
      uVar5 = fn_826A6A38(param_2);
      *(float *)(param_1 + 0x14) = (float)uVar5 * lbl_8200D4C0;
    }
  }
  if ((uVar4 & 8) == 0) {
    fn_826F33F0(param_2,param_1 + 8,param_3);
    return;
  }
  fn_827597E0(&stack0x00000000 + -0x50);
  iVar1 = fn_8267B890(*(unsigned int *)(*(int *)(param_2 + 0x20) + 0x1c),0x28,0);
  if (iVar1 == 0) {
    pbVar2 = (unsigned char *)0x0;
  }
  else {
    pbVar2 = (unsigned char *)fn_827597E0();
  }
  *(unsigned char **)(param_1 + 0xc) = pbVar2;
  if (pbVar2 == (unsigned char *)0x0) {
    pbVar2 = &stack0x00000000 + -0x50;
  }
  fn_8275B020(pbVar2,param_2,param_3);
  if (*pbVar2 == 0) {
    uVar6 = *(unsigned int *)(pbVar2 + 4);
  }
  else {
    if ((((*pbVar2 & 0x10) == 0) || (iVar1 = *(int *)(pbVar2 + 4), iVar1 == 0)) ||
       (*(short *)(iVar1 + 10) == 0)) goto LAB_8275ba68;
    uVar6 = *(unsigned int *)(*(int *)(iVar1 + 0xc) + 4);
  }
  *(unsigned int *)(param_1 + 8) = uVar6;
LAB_8275ba68:
  fn_82759498(&stack0x00000000 + -0x50);
  return;
}

