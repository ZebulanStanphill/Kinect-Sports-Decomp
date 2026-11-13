extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82F50D88();
extern int fn_82F50E10();
extern int fn_82F52188();
extern unsigned int lbl_821CA460;


unsigned __int64 fn_824CCE58(unsigned __int64 param_1,int param_2,char param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  iVar3 = fn_82F52188(auStack_50,*(unsigned int *)(param_2 + 0x20),1);
  uVar5 = *(unsigned int *)(param_2 + 0x20);
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  fn_82F50E10(auStack_60,uVar5);
  dVar4 = (double)lbl_821CA460;
  fn_82F50D88(dVar4,dVar4,dVar4,*(unsigned int *)(param_2 + 0x20));
  iVar3 = fn_82F52188(auStack_50,*(unsigned int *)(param_2 + 0x20),1);
  uVar5 = *(unsigned int *)(param_2 + 0x20);
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x90 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  fn_82F50D88(dVar4,dVar4,dVar4,uVar5);
  if (param_3 == '\0') {
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0x90 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
  }
  else {
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
  }
  puVar1 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return param_1;
}

