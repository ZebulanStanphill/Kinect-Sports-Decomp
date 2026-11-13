extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_823DBB58();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;


void fn_823CED90(int *param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  iVar3 = lbl_8218E8E8;
  iVar4 = param_2 * 0x84 + param_1[0x12f];
  *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
  param_1[0x409] = iVar3;
  param_1[0x360] = param_2;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x34c) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  param_1[0x3f0] = param_2;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x3f4) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  param_1[0x40a] = 0;
  fn_82359698(param_1,5);
  fn_8236B7E0(param_1,param_2,1);
  iVar4 = param_1[0x107];
  if ((((iVar4 == 2) || (iVar4 == 8)) || (iVar4 == 9)) || ((iVar4 == 6 || (iVar4 == 7)))) {
    if (param_1[0x130] != 0) goto LAB_823cee70;
    uVar5 = 0xffffffff821b60b4;
  }
  else {
    if (param_1[0x130] != 0) goto LAB_823cee70;
    uVar5 = 0xffffffff821b60c0;
  }
  fn_82508078(param_1[0x29],uVar5,0);
LAB_823cee70:
  uVar5 = 0x1c;
  piVar1 = *(int **)(param_2 * 4 + param_1[8]);
  if (piVar1[1] - *piVar1 >> 2 == 0) {
    uVar5 = 0x1d;
  }
  fn_823CC298(param_1[0x12e],uVar5);
  if (*(int *)(param_1[300] + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  iVar4 = (**(int (***)())(*param_1 + 200))(param_1);
  if (iVar4 == 0) {
    fn_823DBB58(param_1[300]);
  }
  fn_823D6088(param_1 + 0x27e);
  return;
}

