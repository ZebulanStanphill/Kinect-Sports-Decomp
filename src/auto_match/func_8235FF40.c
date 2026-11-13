extern int fn_8235FDE8();
extern unsigned int ltcg_pool_0_0f;


void fn_8235FF40(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int uVar5;
  int *piVar6;
  int *piVar7;
  __int64 lVar8;
  
  piVar4 = (int *)(param_1 + 0x2c28);
  *(unsigned int *)(param_1 + 0x2c8c) = 0;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x2c98) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x2c90) = 0;
  *(unsigned int *)(param_1 + 0x2c94) = uVar1;
  *(unsigned int *)(param_1 + 0x2c88) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x2c24);
  lVar8 = 0x18;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0x16b4);
  piVar7 = (int *)(param_1 + 0xcb4);
  do {
    if (uVar5 < 0xd) {
      if (*piVar6 == 0) {
        *piVar4 = 0;
      }
      else {
        iVar2 = fn_8235FDE8(param_2,piVar6,0);
        *piVar4 = iVar2;
        *(unsigned int *)(iVar2 + 0x1d0) = 1;
      }
    }
    else {
      if (*piVar7 == 0) {
        return;
      }
      iVar2 = fn_8235FDE8(param_2,piVar7,0);
      *piVar4 = iVar2;
      *(unsigned int *)(iVar2 + 0x1d0) = 1;
      *(int *)(param_1 + 0x2c88) = *(int *)(param_1 + 0x2c88) + 1;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 0x1a;
    piVar7 = piVar7 + 1;
  } while (uVar5 < 0x18);
  return;
}

