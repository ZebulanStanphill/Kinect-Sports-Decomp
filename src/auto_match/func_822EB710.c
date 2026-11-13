typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern int fn_822C1928();
extern int fn_822C72E0();
extern int fn_822E5640();
extern int fn_822E57D8();
extern int fn_822EC378();
extern int fn_822EC5A0();
extern unsigned int ltcg_pool_0_0f;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EB710(double param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char bVar7;
  double dVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char in_vr12 [16];
  unsigned char auStack_30 [24];
  
  iVar3 = *(int *)(param_2 + 0xc);
  if (*(int *)(iVar3 + 0x24) == 0) {
    if (((*(int *)(*(int *)(iVar3 + 0x110) + 0x18) == 2) ||
        (*(int *)(*(int *)(iVar3 + 0x110) + 0x1c) != 2)) && (*(int *)(iVar3 + 0x27c) == 0)) {
      fn_822E5640();
      fn_822E57D8(*(unsigned int *)(param_2 + 0xc));
    }
    else {
      fVar1 = (float)((double)*(float *)(param_2 + 0x24) - param_1);
      *(float *)(param_2 + 0x24) = fVar1;
      dVar8 = (double)ltcg_pool_0_0f;
      if (((*(int *)(iVar3 + 0x2a4) == 0) || (*(int *)(iVar3 + 0x2a8) == 0)) &&
         (dVar8 < (double)fVar1)) {
        iVar3 = fn_822C1928(param_2 + 0x28,0xffffffff821ae2a4,0,7);
        if (iVar3 != -1) {
          fn_822EC378(param_2 + 0x28);
        }
        fn_822E5640(*(unsigned int *)(param_2 + 0xc));
        fn_822E57D8(*(unsigned int *)(param_2 + 0xc));
      }
      iVar3 = *(int *)(param_2 + 0xc);
      if (((*(int *)(iVar3 + 0x2a4) != 0) && (*(int *)(iVar3 + 0x2a8) != 0)) ||
         ((double)*(float *)(param_2 + 0x24) <= dVar8)) {
        if (*(int *)(param_2 + 0x44) == 0) {
          puVar5 = (unsigned int *)(param_2 + 0x28);
          if (0xf < *(unsigned int *)(param_2 + 0x3c)) {
            puVar5 = (unsigned int *)*puVar5;
          }
          iVar3 = fn_822C72E0(*(unsigned int *)(*(int *)(iVar3 + 0x114) + 0x20),puVar5);
          if (iVar3 != 0) {
            *(unsigned int *)(param_2 + 0x44) = 1;
          }
        }
        else {
          lVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x114) + 0x20) + 4;
          iVar3 = fn_822C1928(lVar6,0xffffffff821ae324,0,0xb);
          if ((iVar3 != -1) ||
             (iVar3 = fn_822C1928(lVar6,0xffffffff821ae330,0,5), iVar3 != -1)) {
            bVar7 = 0;
            *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x27c) = 0;
            iVar4 = fn_822EC5A0(auStack_30,param_2);
            iVar3 = *(int *)(param_2 + 0xc);
            puVar5 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
            uVar11 = puVar5[3];
            vectorSubtractFloatingPoint(in_vs45,in_vs32);
            loadVectorLeftIndexed128(0xffffffff82192950,0x60);
            vectorRotateLeftImmediateMaskInsert128
                      (*(unsigned char (*) [16])(in_r0 + iVar3 + 0x290 & 0xfffffff0),in_vr12,1,0);
            if (!(bool)(bVar7 >> 1 & 1)) {
              puVar2 = (unsigned int *)(in_r0 + iVar3 + 0x290 & 0xfffffff0);
              *puVar2 = *puVar5;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              *(unsigned int *)(iVar3 + 0x2a4) = 0;
              *(unsigned int *)(iVar3 + 0x2a8) = 0;
            }
          }
        }
      }
    }
  }
  return;
}

