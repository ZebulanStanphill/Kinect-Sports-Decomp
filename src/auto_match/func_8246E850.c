typedef unsigned char bool;
extern unsigned int *auStack_10f8;
extern unsigned int *auStack_1128;
extern unsigned int *auStack_1130;
extern unsigned int *auStack_8f8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_8226D6A0();
extern int fn_8226FDB8();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8246F718();
extern int fn_8246F9F0();
extern unsigned int iStack_111c;
extern unsigned int iStack_1120;
extern unsigned int iStack_1124;
extern unsigned int iStack_112c;
extern unsigned int lbl_832766D4;
extern unsigned int uStack_10fc;
extern unsigned int uStack_1100;
extern unsigned int uStack_1108;
extern unsigned int uStack_1114;
extern unsigned int uStack_1118;


void fn_8246E850(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  unsigned int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  unsigned int uVar4;
  unsigned int *puVar5;
  char *pcVar7;
  unsigned int *puVar8;
  int iVar9;
  int iVar10;
  unsigned char auStack_1130 [1];
  int iStack_112c;
  unsigned char auStack_1128 [4];
  int iStack_1124;
  struct { int first; int second; } stack_pair_1120;

  unsigned int uStack_1118;
  unsigned int uStack_1114;
  unsigned int uStack_1108;
  unsigned int uStack_1100;
  unsigned int uStack_10fc;
  unsigned char auStack_10f8 [2048];
  unsigned char auStack_8f8 [2048];
  char acStack_f8 [128];
  char acStack_78 [120];
  
  fn_8226D2A8(&stack_pair_1120.first);
  iVar3 = fn_8226FDB8(*(unsigned int *)(param_1 + 0x308),1);
  if (iVar3 != 0) {
    fn_8226D6A0(*(unsigned int *)(param_1 + 0x308));
  }
  fn_82356F98(auStack_1130);
  puVar8 = (unsigned int *)(param_1 + 0x310);
  fn_823F2E20(puVar8,auStack_1130);
  if (iStack_112c != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_1130);
  fn_823F2E20((int *)(param_1 + 0x300),auStack_1130);
  if (iStack_112c != 0) {
    fn_822315A0();
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uStack_1114 = 1;
  uStack_10fc = 1;
  stack_pair_1120.first = 0;
  iVar9 = 0;
  if ((iVar3 != 0) && (cVar6 = fn_8223AAC0(iVar3), cVar6 != '\0')) {
    stack_pair_1120.first = iVar2;
    iVar9 = iVar3;
  }
  bVar1 = stack_pair_1120.second != 0;
  stack_pair_1120.second = iVar9;
  if (bVar1) {
    fn_822315A0();
  }
  uStack_1118 = *(unsigned int *)(*param_2 + 0x130);
  uStack_1108 = 0;
  if (param_5 == 0) {
    acStack_f8[0] = '\0';
  }
  else {
    pcVar7 = acStack_f8;
    do {
      if (acStack_78 <= pcVar7) break;
      cVar6 = pcVar7[param_5 - (int)acStack_f8];
      *pcVar7 = cVar6;
      pcVar7 = pcVar7 + 1;
    } while (cVar6 != '\0');
    if (pcVar7 == acStack_78) {
      pcVar7[-1] = '\0';
    }
  }
  uStack_1100 = param_6;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_3,auStack_10f8,0x400);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_4,auStack_8f8,0x400);
  }
  uVar4 = fn_8226D388(&stack_pair_1120.first);
  *(unsigned int *)(param_1 + 0x308) = uVar4;
  iVar3 = param_2[1];
  iVar2 = *param_2;
  iVar9 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    cVar6 = fn_8223AAC0(iVar3);
    if (cVar6 != '\0') {
      iVar9 = iVar2;
      iVar10 = iVar3;
    }
  }
  iVar3 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x304) = iVar10;
  *(int *)(param_1 + 0x300) = iVar9;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  puVar5 = (unsigned int *)fn_82365BD8(auStack_1128,param_2);
  uVar4 = puVar5[1];
  puVar5[1] = *(unsigned int *)(param_1 + 0x314);
  *(unsigned int *)(param_1 + 0x314) = uVar4;
  uVar4 = *puVar5;
  *puVar5 = *puVar8;
  *puVar8 = uVar4;
  if (iStack_1124 != 0) {
    fn_822315A0();
  }
  iVar3 = param_1 + 0x9c;
  *(unsigned int *)(lbl_832766D4 + 0x30c) = 0;
  bVar1 = *(int *)(param_1 + 0x420) == 0;
  *(unsigned int *)(param_1 + 0x420) = (unsigned int)bVar1;
  if (!bVar1) {
    iVar3 = param_1 + 0xa0;
  }
  fn_8246F9F0(param_1,iVar3);
  if (stack_pair_1120.second != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

