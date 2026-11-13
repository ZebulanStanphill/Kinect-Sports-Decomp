typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_28;
extern int fn_8225F160();
extern int fn_8249ABC0();
extern int fn_8249E5D8();
extern int fn_825200A8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832765BC;
extern V16 vectorSubtractFloatingPoint();


void fn_8249E0C8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar12;
  unsigned int uVar13;
  float afStack_30 [2];
  float fStack_28;
  
  if (*(int *)(param_1 + 0xc4) < 2) {
    iVar5 = fn_8249ABC0();
    if (((*(int *)(iVar5 + 8) != 2) && (*(int *)(iVar5 + 8) != 1)) || (*(int *)(iVar5 + 0x88) != 0))
    {
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar10 = (unsigned int)(*(float *)(param_1 + 0xbc) < *(float *)(param_1 + 0xb8));
        *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x20) = uVar10;
        *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = (unsigned int)LZCOUNT(uVar10) >> 5;
      }
      fn_8249ABC0();
      if (*(int *)(param_1 + 0x14) == 0) {
LAB_8249e178:
        bVar3 = false;
      }
      else {
        iVar5 = fn_825200A8(0xffffffff8326597c);
        bVar3 = true;
        if (iVar5 == 0) goto LAB_8249e178;
      }
      iVar5 = *(int *)(param_1 + 0x24);
      iVar6 = fn_8225F160();
      if ((*(int *)(iVar6 + 8) == 2) || (iVar6 = fn_8225F160(), *(int *)(iVar6 + 0x40) == 2))
      {
        if (iVar5 == 0 && !bVar3) {
LAB_8249e3f4:
          if (*(int *)(param_1 + 0x18) == 0) {
            return;
          }
          uVar7 = 4;
LAB_8249e404:
          fn_8249E5D8(param_1,uVar7);
          return;
        }
        iVar5 = *(int *)(param_1 + 0xd0);
        if (-1 < iVar5) {
LAB_8249e1b8:
          *(int *)(*(int *)(param_1 + 0xc) + 0x20) = iVar5;
          *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = (unsigned int)LZCOUNT(iVar5) >> 5;
          *(unsigned int *)(param_1 + 0xec) = 3;
          return;
        }
        iVar5 = fn_8249E5D8(param_1,2);
        if (iVar5 != 0) {
          return;
        }
        iVar5 = fn_8225F160();
        if (((*(int *)(iVar5 + 0x44) != 2) || (*(int *)(iVar5 + 0x48) != 1)) ||
           (*(int *)(iVar5 + 0x4c) != 1)) {
          if (lbl_832765BC != 0) {
            if (((*(int *)(param_1 + 0x14) == 0) ||
                (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0xd54) + 0x14) == 0)) ||
               (*(int *)(*(int *)(lbl_832765BC + 0x28) + 4) != 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              *(unsigned int *)(param_1 + 0xe4) = (unsigned int)(*(int *)(lbl_832765BC + 0x68) != 0);
            }
            fVar4 = ltcg_pool_0_0f;
            if (!bVar3) {
              return;
            }
            iVar5 = *(int *)(param_1 + 0xe4);
            puVar1 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            vectorSubtractFloatingPoint(in_vs45,in_vs32);
            puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            puVar2[2] = uVar12;
            puVar2[3] = uVar13;
            if (fVar4 <= afStack_30[0]) {
              if ((fVar4 < afStack_30[0]) || (uVar10 = 0, fVar4 < fStack_28)) {
                uVar10 = 1;
              }
            }
            else {
              uVar10 = 0;
            }
            uVar9 = (unsigned int)LZCOUNT(uVar10) >> 5;
            uVar8 = uVar10;
            if ((unsigned int)LZCOUNT(iVar5 + -1) >> 5 != 0) {
              uVar8 = uVar9;
              uVar9 = uVar10;
            }
            *(unsigned int *)(*(int *)(param_1 + 4) + 0x20) = uVar8;
            *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = uVar9;
            goto LAB_8249e254;
          }
          iVar6 = *(int *)(param_1 + 0xd4);
          if (((iVar6 != 0) || (iVar5 = 0, *(int *)(param_1 + 0xd8) != 0)) &&
             (iVar5 = *(int *)(param_1 + 0xd8), iVar5 != *(int *)(param_1 + 0xe0))) {
            *(int *)(param_1 + 0xdc) = iVar6;
            uVar7 = 5;
            *(int *)(param_1 + 0xe0) = iVar5;
            goto LAB_8249e404;
          }
          if (iVar6 != 0) {
            return;
          }
          goto joined_r0x8249e1ec;
        }
      }
      else {
        if (iVar5 == 0 && !bVar3) goto LAB_8249e3f4;
        iVar5 = *(int *)(param_1 + 0xd0);
        if (-1 < iVar5) goto LAB_8249e1b8;
        iVar5 = fn_8249E5D8(param_1,2);
joined_r0x8249e1ec:
        if (iVar5 != 0) {
          return;
        }
      }
    }
  }
  fVar4 = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  if (afStack_30[0] < fVar4) {
    uVar11 = 0;
  }
  else if ((fVar4 < afStack_30[0]) || (uVar11 = 0, fVar4 < fStack_28)) {
    uVar11 = 1;
  }
  *(unsigned int *)(*(int *)(param_1 + 4) + 0x20) = uVar11;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = (unsigned int)LZCOUNT(uVar11) >> 5;
LAB_8249e254:
  *(unsigned int *)(param_1 + 0xec) = 1;
  return;
}

