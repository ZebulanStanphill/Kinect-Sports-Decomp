extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int fStack_30;
extern int fn_824B1410();
extern int fn_824B1880();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_2c;
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_824B1290(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [8];
  unsigned char auStack_40 [16];
  float fStack_30;
  int iStack_2c;
  
  (**(int (***)())*param_2)(param_2,auStack_48,&uStack_4c);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_4c,&iStack_50);
  puVar1 = (unsigned int *)
           (*(int *)(*(int *)(param_1 + 0x3c) + 0x20) * 0x40 + *(int *)(iStack_50 + 0x40) &
           0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  fn_82F4EBC0(0);
  dVar6 = (double)fn_82F4ED08();
  iVar4 = *(int *)(param_1 + 0x3c);
  fStack_30 = (float)dVar6;
  iStack_2c = *(int *)(iStack_50 + 0x48);
  if (*(int *)(iVar4 + 0x14) != 0) {
    iVar5 = *(int *)(iVar4 + 0x14) + -1;
    if (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 0xc) >> 5 <= iVar5) {
      iVar5 = iVar5 - (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 5);
    }
    if (*(int *)(iVar5 * 0x20 + *(int *)(iVar4 + 0xc) + 0x14) == iStack_2c) goto LAB_824b137c;
  }
  fn_824B1880(iVar4 + 4,auStack_40);
LAB_824b137c:
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar3 = fn_824B1410(param_1);
  *(unsigned char *)(iVar4 + 0x1c) = uVar3;
  return;
}

