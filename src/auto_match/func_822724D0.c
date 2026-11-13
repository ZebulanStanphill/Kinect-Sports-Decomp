typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82271C18();
extern int fn_8228C2C8();
extern unsigned int ltcg_pool_0_0f;


unsigned int fn_822724D0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned int uVar4;
  int in_r0;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  uVar7 = *(unsigned int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0x98) != 0) {
    piVar6 = *(int **)(param_1 + 0x5c);
    *(unsigned int *)(param_1 + 0xd0) = 0;
    *(unsigned int *)(param_1 + 0xc0) = *(unsigned int *)(param_1 + 0xbc);
    *(unsigned int *)(param_1 + 0xc4) = (unsigned int)LZCOUNT(*(unsigned int *)(param_1 + 0xbc)) >> 5;
    uVar4 = ltcg_pool_0_0f;
    iVar5 = *piVar6;
    if (iVar5 != piVar6[1]) {
      do {
        iVar1 = *(int *)(iVar5 + 0x24);
        if (iVar1 != 0) {
          puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(unsigned int *)(iVar1 + 0x520) = uVar4;
          *(unsigned int *)(iVar1 + 0x548) = 0;
          *(unsigned int *)(iVar1 + 0x544) = 1;
          *(unsigned int *)(iVar1 + 0x534) = 0;
          puVar2 = (unsigned int *)(iVar1 + 0x510U & 0xfffffff0);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
        }
        iVar5 = iVar5 + 0x30;
      } while (iVar5 != piVar6[1]);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0xa8) + 4);
    if (*(int *)(param_1 + 0x110) != 0) {
      fn_8228C2C8(*(int *)(param_1 + 0x110),0xffffffff820e975c);
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      fn_8228C2C8(*(int *)(param_1 + 0x118),0xffffffff820e975c);
    }
    fn_82271C18(param_1,*(unsigned int *)(iVar5 + 0x2c),0,0);
  }
  piVar6 = *(int **)(*(int *)(param_1 + 0x4c) + 0xc);
  do {
    if (piVar6 == *(int **)(*(int *)(param_1 + 0x4c) + 0x10)) {
      bVar3 = false;
LAB_822725e0:
      if (!bVar3) {
        uVar7 = 0;
        *(unsigned int *)(param_1 + 0x50) = 0;
      }
      return uVar7;
    }
    if (*piVar6 == *(int *)(param_1 + 0x50)) {
      bVar3 = true;
      goto LAB_822725e0;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

