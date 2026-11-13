typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_18;
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern int fn_82F4EFF8();
extern unsigned int ltcg_pool_0_0f;


void fn_82462E98(int param_1)

{
  bool bVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  bool bVar5;
  int in_r0;
  int iVar7;
  char cVar8;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float afStack_20 [2];
  float fStack_18;
  
  iVar7 = fn_82F4EBC0(0);
  if (iVar7 != 0) {
    fn_82F4EBC0(0);
    cVar8 = fn_82F4EFF8();
    if (cVar8 == '\0') {
      iVar7 = *(int *)(param_1 + 0x248);
      if (iVar7 == 0) {
        return;
      }
      bVar1 = *(int *)(iVar7 + 0x48) == 9;
      *(unsigned int *)(iVar7 + 0x4c) = 9;
      uVar10 = ltcg_pool_0_0f;
    }
    else {
      uVar6 = fn_82F4EBC0(0);
      fn_82F4EEC0(afStack_20,uVar6);
      fVar2 = *(float *)(param_1 + 0x1d0);
      bVar1 = false;
      bVar5 = false;
      puVar3 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar9 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar9;
      puVar4[3] = uVar11;
      uVar10 = ltcg_pool_0_0f;
      if (afStack_20[0] <= fVar2) {
        if (*(float *)(param_1 + 0x1c0) <= afStack_20[0]) {
          bVar1 = true;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 != 0) {
            *(unsigned int *)(iVar7 + 0x4c) = 4;
            if (*(int *)(iVar7 + 0x48) != 4) {
              *(unsigned int *)(iVar7 + 0x80) = uVar10;
            }
            *(unsigned int *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
          }
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 != 0) {
          *(unsigned int *)(iVar7 + 0x4c) = 3;
          if (*(int *)(iVar7 + 0x48) != 3) {
            *(unsigned int *)(iVar7 + 0x80) = uVar10;
          }
          *(unsigned int *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
        }
        bVar5 = true;
      }
      if (fStack_18 <= *(float *)(param_1 + 0x1d8)) {
        if (*(float *)(param_1 + 0x1c8) <= fStack_18) {
          return;
        }
        if (bVar1) {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 == 0) {
            return;
          }
          uVar9 = 1;
          bVar1 = *(int *)(iVar7 + 0x48) == 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 == 0) {
            return;
          }
          if (bVar5) {
            uVar9 = 5;
            bVar1 = *(int *)(iVar7 + 0x48) == 5;
          }
          else {
            uVar9 = 6;
            bVar1 = *(int *)(iVar7 + 0x48) == 6;
          }
        }
      }
      else if (bVar1) {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 == 0) {
          return;
        }
        uVar9 = 2;
        bVar1 = *(int *)(iVar7 + 0x48) == 2;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 == 0) {
          return;
        }
        if (bVar5) {
          uVar9 = 7;
          bVar1 = *(int *)(iVar7 + 0x48) == 7;
        }
        else {
          uVar9 = 8;
          bVar1 = *(int *)(iVar7 + 0x48) == 8;
        }
      }
      *(unsigned int *)(iVar7 + 0x4c) = uVar9;
    }
    if (!bVar1) {
      *(unsigned int *)(iVar7 + 0x80) = uVar10;
    }
    *(unsigned int *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
  }
  return;
}

