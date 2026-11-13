typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82300178();
extern int fn_82300210();
extern int fn_823003A8();
extern int fn_82300480();
extern int fn_823005D0();
extern int fn_823006E0();
extern int fn_823008E8();
extern int fn_82300E58();
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_822FF9D0(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if (*(int *)(param_1 + 0x574) != *(int *)(param_1 + 0x578)) {
    *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x578);
    *(unsigned int *)(param_1 + 0x550) = 0;
    *(unsigned int *)(param_1 + 0x554) = 0;
    *(unsigned int *)(param_1 + 0x564) = 0;
    *(unsigned int *)(param_1 + 0x568) = 0xffffffff;
    uVar7 = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x56c) = 0;
    *(unsigned int *)(param_1 + 0x560) = uVar7;
    *(unsigned int *)(param_1 + 0x55c) = uVar7;
  }
  if (*(int *)(param_1 + 0x574) != 0) {
    iVar4 = *(int *)(param_1 + 0x550) * 0x160 + param_1;
    fn_823008E8(param_1,param_2,iVar4);
    uVar3 = *(int *)(param_1 + 0x550) + 1;
    *(unsigned int *)(param_1 + 0x550) = uVar3;
    if (2 < uVar3) {
      *(unsigned int *)(param_1 + 0x550) = 0;
    }
    uVar3 = *(int *)(param_1 + 0x554) + 1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    *(unsigned int *)(param_1 + 0x554) = uVar3;
    puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    lVar5 = 0x13;
    puVar1 = (unsigned int *)(in_r0 + param_1 + 0x500 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (unsigned int *)(in_r0 + param_1 + 0x4f0 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    do {
      iVar4 = iVar4 + 0x10;
      puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(auVar6, &_vt0, 16); }
      puVar2 = (unsigned int *)(in_r0 + param_1 + 0x4f0 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs45,auVar6); memcpy(in_vs32, &_vt1, 16); }
      puVar2 = (unsigned int *)(in_r0 + param_1 + 0x500 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82300E58(param_1 + 0x420,*(unsigned int *)(param_1 + 0x52c));
    fn_82300178(param_1);
    fn_82300210(param_1);
    iVar4 = *(int *)(param_1 + 0x56c);
    if (iVar4 == 1) {
      fn_82300480(param_1);
    }
    else if (iVar4 == 2) {
      fn_823005D0(param_1);
    }
    else if (iVar4 == 3) {
      fn_823006E0();
    }
    if (*(int *)(param_1 + 0x570) == 1) {
      fn_823003A8(param_1);
    }
  }
  return;
}

