typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82CBD560();
extern int fn_82C66628();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64
fn_82CAF338(int param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4,int param_5,unsigned int param_6,
             unsigned short *param_7,int param_8)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned short *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned short *puVar10;
  int iVar11;
  unsigned short *puVar12;
  unsigned short *puVar13;
  int iVar14;
  unsigned char *puVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned char auVar18 [16];
  int in_stack_00000054;
  int in_stack_0000005c;{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar18, &_vt0, 16); }
  *(unsigned int *)(*(int *)(param_1 + 0x6e4) + 4) = 0;
  *(unsigned __int64 *)(*(int *)(param_1 + 0x6e4) + 8) = 0;
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x10U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x20U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x30U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x40U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x50U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x60U & 0xfffffff0)), auVar18, 16);
  memcpy((void *)((const void *)(*(int *)(param_1 + 0x6e4) + 0x70U & 0xfffffff0)), auVar18, 16);
  uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6e4);
  dataCacheBlockClearToZero(uVar8 + 0x80);
  if ((*param_3 & 0x18) == 0) {
    param_7[0xe] = 0;
    param_7[3] = 0;
    param_7[5] = 0;
    param_7[0xd] = 0;
    param_7[0xb] = 0;
    param_7[4] = 0;
    param_7[1] = 0;
    param_7[9] = 0;
    param_7[2] = 0;
    param_7[10] = 0;
    param_7[0xc] = 0;
    param_7[6] = 0;
    param_7[7] = 0;
    param_7[0xf] = 0;
    if (*(int *)(param_1 + 0x708) == 0) {
      uVar5 = *(unsigned int *)(param_1 + 0x70c);
    }
    else {
      uVar5 = *(unsigned int *)(param_1 + 0x718);
    }
  }
  else {
    lVar16 = 7;
    puVar13 = param_7;
    if (in_stack_00000054 == *(int *)(param_1 + 0x708)) {
      puVar13 = param_7 + 9;
      do {
        uVar1 = *(unsigned short *)((int)puVar13 + (param_8 - (int)param_7));
        uVar8 = (unsigned __int64)uVar1;
        puVar13[-8] = 0;
        *puVar13 = uVar1;
        puVar13 = puVar13 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      if (*(int *)(param_1 + 0x708) == 0) {
        uVar5 = *(unsigned int *)(param_1 + 0x714);
      }
      else {
        uVar5 = *(unsigned int *)(param_1 + 0x71c);
      }
    }
    else {
      do {
        puVar12 = puVar13 + 1;
        puVar13[9] = 0;
        uVar1 = *(unsigned short *)((int)puVar12 + (param_8 - (int)param_7));
        uVar8 = (unsigned __int64)uVar1;
        *puVar12 = uVar1;
        lVar16 = lVar16 + -1;
        puVar13 = puVar12;
      } while (lVar16 != 0);
      if (*(int *)(param_1 + 0x708) == 0) {
        uVar5 = *(unsigned int *)(param_1 + 0x710);
      }
      else {
        uVar5 = *(unsigned int *)(param_1 + 0x720);
      }
    }
  }
  if (*(int *)(param_1 + 0x3cb0) < 6) {
    if (*(int *)(param_1 + 0x3cb0) == 0) {
      uVar4 = fn_82CBD560(param_1,param_2,*(unsigned char *)((int)param_3 + param_6 + 0xe),
                                param_7,uVar5,0x80,uVar8);
    }
    else {
      uVar4 = fn_82C66628();
    }
  }
  else {
    uVar4 = fn_82C66628(param_1,param_2,*(unsigned char *)((int)param_3 + param_6 + 0xe));
  }
  if ((int)uVar4 == 0) {
    if (*(int *)(param_1 + 0xbbc) == 0) {
      (**(int (***)())(param_1 + 0xc7c))(param_4,param_5,*(unsigned int *)(param_1 + 0x6e4));
      uVar4 = 0;
    }
    else {
      lVar16 = 0x10;
      iVar11 = 0;
      iVar14 = 0;
      do {
        iVar9 = iVar14 + 0xc;
        iVar7 = iVar11 + 6;
        *(short *)(*(int *)(param_1 + 0x760) + iVar11) =
             (short)*(unsigned int *)(iVar14 + *(int *)(param_1 + 0x6e4));
        iVar2 = iVar14 + *(int *)(param_1 + 0x6e4);
        iVar3 = *(int *)(param_1 + 0x760) + iVar11;
        iVar14 = iVar14 + 0x10;
        iVar11 = iVar11 + 8;
        *(short *)(iVar3 + 2) = (short)*(unsigned int *)(iVar2 + 4);
        *(short *)(*(int *)(param_1 + 0x760) + iVar7 + -2) =
             (short)*(unsigned int *)(iVar9 + *(int *)(param_1 + 0x6e4) + -4);
        *(short *)(*(int *)(param_1 + 0x760) + iVar7) =
             (short)*(unsigned int *)(iVar9 + *(int *)(param_1 + 0x6e4));
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      (**(int (***)())(param_1 + 0xc90))
                (*(unsigned int *)(param_1 + 0x760),*(unsigned int *)(param_1 + 0x760),8,0xff);
      if (((*(int *)(param_1 + 0xbbc) == 1) || (*(int *)(param_1 + 0xbbc) == 3)) ||
         ((*param_3 & 0x800) != 0)) {
        if ((int)param_6 < 4) {
          iVar11 = *(int *)(param_1 + 0x88) << 4;
          in_stack_0000005c = ((param_6 & 1) + in_stack_0000005c * 2) * 0x10;
          iVar14 = *(int *)(((param_6 & 2) + 0x2f2) * 4 + param_1);
        }
        else {
          iVar11 = *(int *)(param_1 + 0x88) << 3;
          if (param_6 == 4) {
            iVar14 = *(int *)(param_1 + 0xbd4);
          }
          else {
            iVar14 = *(int *)(param_1 + 0xbdc);
          }
          in_stack_0000005c = in_stack_0000005c << 4;
        }
        in_stack_0000005c = in_stack_0000005c + iVar14;
        puVar6 = (unsigned short *)(in_stack_0000005c + -2);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + -2);
        lVar16 = 8;
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0xe);
        puVar6 = (unsigned short *)(iVar11 * 2 + in_stack_0000005c + -2);
        lVar16 = 8;
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x1e);
        puVar6 = (unsigned short *)(iVar11 * 4 + in_stack_0000005c + -2);
        lVar16 = 8;
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x2e);
        lVar16 = 8;
        puVar6 = (unsigned short *)(iVar11 * 6 + in_stack_0000005c + -2);
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x3e);
        puVar6 = (unsigned short *)(iVar11 * 8 + in_stack_0000005c + -2);
        lVar16 = 8;
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x4e);
        lVar16 = 8;
        puVar6 = (unsigned short *)(iVar11 * 10 + in_stack_0000005c + -2);
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x5e);
        lVar16 = 8;
        puVar6 = (unsigned short *)(iVar11 * 0xc + in_stack_0000005c + -2);
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar10 = (unsigned short *)(*(int *)(param_1 + 0x760) + 0x6e);
        puVar6 = (unsigned short *)(iVar11 * 0xe + in_stack_0000005c + -2);
        lVar16 = 8;
        do {
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar4 = 0;
      }
      else {
        lVar16 = 8;
        iVar11 = param_4;
        do {
          puVar15 = (unsigned char *)(iVar11 + -1);
          lVar17 = 8;
          do {
            puVar15 = puVar15 + 1;
            *puVar15 = 0x80;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          lVar16 = lVar16 + -1;
          iVar11 = iVar11 + param_5;
        } while (lVar16 != 0);
        (**(int (***)())(param_1 + 0xc70))
                  (param_4,param_4,*(unsigned int *)(param_1 + 0x760),param_5,
                   *(unsigned int *)(param_1 + 0x108));
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
