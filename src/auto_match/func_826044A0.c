typedef unsigned char bool;
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_826035B0();
extern int fn_82CE6010();
extern int fn_82D82E28();
extern int fn_82D85148();
extern int fn_82D89BD8();
extern int fn_82D8BBA0();
extern int fn_82D8BBE8();
extern int fn_82D8BC78();
extern int fn_82D8CD68();
extern unsigned int lbl_82193CC0;


bool fn_826044A0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [48];
  unsigned char auStack_40 [64];
  
  iVar3 = param_1 + 0x20;
  iVar5 = param_1 + 0xa0;
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_82CE6010(auStack_b0,iVar5);
  puVar2 = (unsigned int *)(param_1 + 0x130U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_826035B0((double)lbl_82193CC0,auStack_b0,auStack_100);
  fn_82D8CD68(*(unsigned int *)(param_1 + 0x140),auStack_d0);
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_82CE6010(auStack_70,iVar5);
  iVar1 = *(int *)(*(int *)(param_1 + 0x140) + 0xd4);
  if (*(int *)(param_1 + 0x10c) == 0) {
LAB_82604564:
    if (*(int *)(param_1 + 0x110) != 0) {
      fn_82D8BBE8(*(unsigned int *)(param_1 + 0x18),iVar5);
      goto LAB_8260458c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x110) == 0) {
      puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar6 = *(unsigned int *)(param_1 + 0x18);
      puVar4 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      fn_82D8BBA0(uVar6,auStack_e0);
      goto LAB_8260458c;
    }
    if (*(int *)(param_1 + 0x10c) == 0) goto LAB_82604564;
  }
  fn_82D8BC78(*(unsigned int *)(param_1 + 0x18),auStack_70);
LAB_8260458c:
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar6 = *(unsigned int *)(param_1 + 0x18);
    puVar2 = (unsigned int *)(param_1 + 0xb0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_8240DEC0(uVar6,auStack_f0);
    uVar6 = *(unsigned int *)(param_1 + 0x18);
    puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_822E83E0(uVar6,auStack_110);
  }
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x140) + 8) != 0) {
      fn_82D82E28();
    }
    *(unsigned int *)(param_1 + 0x114) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x2c) = *(unsigned int *)(param_1 + 0x11c);
    fn_82D85148(*(unsigned int *)(*(int *)(param_1 + 0x18) + 8),*(int *)(param_1 + 0x18),0,1);
    fn_82D89BD8(*(unsigned int *)(param_1 + 0x18));
  }
  return iVar1 != 0;
}

