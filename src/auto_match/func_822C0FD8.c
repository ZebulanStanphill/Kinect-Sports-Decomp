typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_54;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C13D0();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_82321818();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82552D10();
extern int fn_82560100();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_822C0FD8(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int *piVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int aiStack_a0;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [28];
  unsigned char auStack_54 [84];

  uVar1 = *param_2;
  if ((uVar1 < 3) || (uVar1 == 6)) {
    iVar5 = param_1 + 0x310;
  }
  else {
    iVar5 = param_1 + 0x3f8;
  }
  puVar2 = (unsigned int *)(param_1 + 0x80U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  if (param_3 == 0) {
    piVar4 = (int *)((param_5 * 0xd + param_4) * 4 + iVar5);
    if (piVar4 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar4 != 0;
    }
    if (bVar6) {
      stack_pair_90.first = 0;
      stack_pair_90.second = 0;
      uStack_88 = 0;
      fn_82230110(auStack_70,0xffffffff821acd0c);
      fn_82230110(auStack_54,0xffffffff821acd04);
      fn_822C1730(&stack_pair_90.first,auStack_70);
      fn_82230300(auStack_54,1,0);
      fn_82230300(auStack_70,1,0);
      fn_82552D10((unsigned __int64)*(unsigned int *)(param_1 + 0x7ec) + 0x84c,piVar4,auStack_80,&stack_pair_90.first);
      fn_822C18B8(&stack_pair_90.first);
    }
    fn_822C13D0(param_1,param_5,param_4,uVar1);
  }
  else {
    piVar4 = (int *)((param_4 + 0x34) * 4 + iVar5);
    if (piVar4 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar4 != 0;
    }
    if (bVar6) {
      aiStack_a0 = *piVar4;
      aiStack_a0 =
           fn_825354B8(&aiStack_a0,auStack_80,0,
                             *(unsigned int *)(*(int *)(param_1 + 0x7ec) + 0x84c),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(&aiStack_a0);
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      piVar4 = (int *)(iVar5 + 0xe0);
    }
    else {
      piVar4 = (int *)(iVar5 + 0xe4);
    }
    if (*piVar4 != 0) {
      fn_82321818(auStack_80,*(unsigned int *)(param_1 + 0x7dc));
      fn_82321818(&stack_pair_90.first,*(unsigned int *)(param_1 + 0x7e4));
      dVar7 = (double)ltcg_pool_0_0f;
      fn_82560100(dVar7,*(unsigned int *)(param_1 + 0x7ec),piVar4,auStack_80);
      fn_82560100(dVar7,*(unsigned int *)(param_1 + 0x7ec),piVar4,&stack_pair_90.first);
    }
  }
  return;
}
