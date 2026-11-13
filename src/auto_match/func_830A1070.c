extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_30;
extern int fn_830A5FF8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;


void fn_830A1070(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  float fStack_30;
  unsigned int uStack_2c;
  
  if ((*(char *)(param_1 + 2) != '\0') &&
     (fStack_30 = *(float *)(param_1 + 4), lbl_821AAD20 < fStack_30)) {
    bVar1 = *(unsigned char *)(param_1 + 3);
    uStack_2c = *(unsigned int *)(param_2 + 0x4c);
    puVar3 = (unsigned int *)(param_3 + 0x30U & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar3 = (unsigned int *)((unsigned int)bVar1 * 0x10 + param_4 & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    fn_830A5FF8(auStack_50,param_2,param_5);
    return;
  }
  iVar2 = *param_5;
  *(unsigned char *)(iVar2 + 3) = 3;
  *(unsigned char *)(iVar2 + 4) = 1;
  *param_5 = iVar2 + 0x10;
  return;
}

