extern unsigned int *auStack_40;
extern int fn_822ABA88();
extern int fn_8230C220();
extern int fn_8236C6A0();
extern int fn_823CC298();
extern int fn_823CDBB0();
extern int fn_82508078();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


void fn_8230C750(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uStack_48 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28);
  uStack_44 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c);
  fn_8230C220((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 0xa18,&uStack_48);
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  iVar6 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),6);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(unsigned int *)(param_1 + 0x10);
  uStack_2c = *(unsigned int *)(iVar6 + 0x28);
  uStack_28 = *(unsigned int *)(iVar6 + 0x2c);
  puVar4 = (unsigned int *)(iVar6 + 0x80U & 0xfffffff0);
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  uStack_24 = 2;
  uStack_30 = 0;
  uStack_50 = 0;
  puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  uStack_4f = 0;
  fn_823CDBB0(uVar3,*(unsigned int *)(iVar2 + 0x28),*(unsigned int *)(iVar2 + 0x2c),auStack_40,
                    &uStack_50,1);
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 0x484) == 0) {
    if (*(int *)(iVar2 + 0x4c0) == 0) {
      fn_82508078(*(unsigned int *)(iVar2 + 0xa4),0xffffffff821af390,0);
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  fn_823CC298(*(unsigned int *)(iVar2 + 0x4b8),7);
  fn_8236C6A0(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0xc));
  return;
}

