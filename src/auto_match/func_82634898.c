typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82634898(int param_1,char param_2,char param_3,int (**param_4)(),unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  struct { unsigned int first; unsigned int second; } stack_pair_b8;

  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  unsigned int uStack_a4;

  iVar2 = *(int *)(param_1 + 0x100);
  uVar7 = *(unsigned int *)(param_1 + 0x104);
  if ((param_2 != '\0') &&
     (iVar1 = (int)(uVar7 - iVar2) / 0xc, lVar11 = (__int64)iVar1, iVar1 != 0)) {
    puVar14 = (unsigned int *)(iVar2 + 8);
    lVar12 = 0;
    do {
      stack_pair_b8.first = puVar14[-2];
      stack_pair_b8.second = (unsigned int)*(unsigned short *)((int)puVar14 + -2);
      stack_pair_c0.first = *puVar14 << 0x10 | (unsigned int)*(unsigned short *)(puVar14 + -1);
      stack_pair_c0.second = (unsigned int)*(unsigned short *)puVar14;
      (*param_4)(1,0,0,lVar12,&stack_pair_b8.first,param_5);
      (*param_4)(1,0,0,lVar12 + 1,&stack_pair_c0.first,param_5);
      lVar11 = lVar11 + -1;
      lVar12 = lVar12 + 2;
      puVar14[-2] = stack_pair_b8.first;
      puVar14[-1] = stack_pair_c0.first << 0x10 | stack_pair_b8.second & 0xffff;
      *puVar14 = stack_pair_c0.second << 0x10 | stack_pair_c0.first >> 0x10;
      puVar14 = puVar14 + 3;
    } while (lVar11 != 0);
  }
  if (param_3 != '\0') {
    iVar1 = (int)(uVar7 - iVar2) / 0xc;
    do {
      bVar5 = false;
      if (iVar1 == 0) {
        return;
      }
      puVar14 = (unsigned int *)(iVar2 + 8);
      lVar11 = (__int64)iVar1;
      uVar8 = uVar7;
      do {
        puVar9 = &stack_pair_b0.first;
        lVar12 = 2;
        stack_pair_b0.first = puVar14[-2];
        stack_pair_b0.second = puVar14[-1] & 0xffff;
        uStack_a8 = puVar14[-1] >> 0x10 | *puVar14 << 0x10;
        uStack_a4 = *puVar14 >> 0x10;
        do {
          uVar3 = puVar9[1];
          if ((1 << (uVar3 >> 0xc & 0xf) & 0x607eU) != 0) {
            uVar4 = *puVar9;
            uVar6 = uVar4 >> 0xc & 7;
            if (uVar6 != 0) {
              uVar15 = (uVar4 & 0xfff) * 0xc + iVar2;
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar10 = 0;
                do {
                  if (uVar8 < uVar15) {
                    bVar5 = true;
                    break;
                  }
                  if (uVar15 == uVar8) {
                    (*param_4)(0,(1 << (uVar10 & 0x3f) & uVar4 >> 0x10 & 0xfff) != 0,
                               (1 << (uVar13 & 0x3f) & ((uVar3 & 3) << 4 | uVar4 >> 0x1c)) != 0,
                               (uVar4 & 0xfff) + uVar13,uVar15,param_5);
                    uVar8 = uVar15 + 0xc;
                  }
                  uVar13 = uVar13 + 1;
                  uVar10 = uVar10 + 2;
                  uVar15 = uVar15 + 0xc;
                } while (uVar13 < uVar6);
              }
            }
          }
          lVar12 = lVar12 + -1;
          puVar9 = puVar9 + 2;
        } while (lVar12 != 0);
        lVar11 = lVar11 + -1;
        puVar14 = puVar14 + 3;
      } while (lVar11 != 0);
      if (uVar7 == uVar8) {
        if (!bVar5) {
          return;
        }
        uVar8 = uVar8 + 0xc;
      }
      uVar7 = uVar8;
    } while (bVar5);
  }
  return;
}
