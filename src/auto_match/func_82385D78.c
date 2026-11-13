typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define NAN(x) ((x) != (x))
extern unsigned int fStack_b0;
extern int fn_82385B80();
extern int fn_82386340();
extern int fn_823867D0();
extern int fn_82563D30();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CB0BC;
extern unsigned int lbl_831CB0C0;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


void fn_82385D78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  unsigned __int64 *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  unsigned __int64 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  float in_register_00010010;
  float in_register_00010014;
  unsigned int in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_stack_00000020;
  float in_stack_00000024;
  unsigned int in_stack_00000028;
  unsigned int in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  unsigned int in_stack_00000038;
  unsigned int in_stack_0000003c;
  float fStack_b0;
  unsigned __int64 uStack_a0;
  unsigned int uStack_98;
  unsigned __int64 *puStack_90;
  unsigned __int64 *puStack_8c;
  unsigned __int64 *puStack_88;
  
  uVar6 = fn_82F6A53C();
  in_stack_00000020 = in_register_00010010;
  in_stack_00000024 = in_register_00010014;
  in_stack_00000028 = in_register_00010018;
  in_stack_00000030 = in_register_00010020;
  in_stack_00000034 = in_register_00010024;
  fn_82563D30(param_2,&stack0x00000020,&stack0x00000030);
  iVar7 = fn_82385B80(uVar6,param_3);
  if (iVar7 == 0) {
    uVar6 = 1;
    goto LAB_82385dd4;
  }
  dVar12 = (double)in_stack_00000020;
  dVar16 = (double)in_stack_00000024;
  dVar13 = (double)in_stack_00000030;
  fVar1 = (float)(dVar12 - dVar13);
  dVar15 = (double)in_stack_00000034;
  puVar9 = (unsigned __int64 *)0x0;
  puStack_90 = (unsigned __int64 *)0x0;
  puStack_88 = (unsigned __int64 *)0x0;
  puStack_8c = (unsigned __int64 *)0x0;
  uStack_a0 = (unsigned __int64)lbl_831CB0C0 - 1 & 0xffffffff;
  puVar11 = (unsigned __int64 *)0x0;
  dVar17 = dVar12;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar17 = dVar13;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar13 = dVar12;
  }
  dVar14 = (double)(ABS(fVar1) / (float)(lbl_831CB0BC - 1));
  dVar12 = (double)((float)(dVar16 - dVar15) / (float)uStack_a0);
  for (; dVar13 <= dVar17; dVar13 = (double)(float)(dVar13 + dVar14)) {
    dVar18 = dVar15;
    if (dVar15 <= dVar16) {
      do {
        uStack_a0 = CONCAT44((float)dVar13,(float)dVar18);
        uStack_98 = in_stack_00000028;
        if ((puVar11 <= &uStack_a0) || (bVar5 = true, &uStack_a0 < puVar9)) {
          bVar5 = false;
        }
        if (bVar5) {
          iVar7 = (int)&uStack_a0 - (int)puVar9;
          if (puVar11 == puStack_88) {
            fn_823867D0(&puStack_90);
            puVar9 = puStack_90;
            puVar11 = puStack_8c;
          }
          if (puVar11 != (unsigned __int64 *)0x0) {
            puVar3 = (unsigned int *)((unsigned int)(puVar9 + (iVar7 >> 4) * 2) & 0xfffffff0);
            uVar19 = *puVar3;
            uVar20 = puVar3[1];
            uVar21 = puVar3[2];
            uVar22 = puVar3[3];
LAB_82385f68:
            puVar3 = (unsigned int *)((int)in_r0 + (int)puVar11 & 0xfffffff0);
            *puVar3 = uVar19;
            puVar3[1] = uVar20;
            puVar3[2] = uVar21;
            puVar3[3] = uVar22;
          }
        }
        else {
          if (puVar11 == puStack_88) {
            fn_823867D0(&puStack_90);
            puVar9 = puStack_90;
            puVar11 = puStack_8c;
          }
          if (puVar11 != (unsigned __int64 *)0x0) {
            puVar3 = (unsigned int *)((int)&uStack_a0 + (int)in_r0 & 0xfffffff0);
            uVar19 = *puVar3;
            uVar20 = puVar3[1];
            uVar21 = puVar3[2];
            uVar22 = puVar3[3];
            goto LAB_82385f68;
          }
        }
        dVar18 = (double)(float)(dVar18 + dVar12);
        puVar11 = puVar11 + 2;
        puStack_8c = puVar11;
      } while (dVar18 <= dVar16);
    }
  }
  puVar10 = puVar9;
  puVar2 = puVar9;
  if (puVar9 == puVar11) {
LAB_82386000:
    uVar6 = 0;
  }
  else {
    do {
      puVar8 = puVar2 + 2;
      iVar7 = fn_82385B80(uVar6,param_3);
      if (iVar7 != 0) {
        if (puVar8 != puVar11) {
          iVar7 = (int)puVar10 - (int)puVar8;
          do {
            puVar3 = (unsigned int *)((int)in_r0 + (int)puVar8 & 0xfffffff0);
            uVar19 = puVar3[1];
            uVar20 = puVar3[2];
            uVar21 = puVar3[3];
            puVar4 = (unsigned int *)(iVar7 + (int)puVar8 & 0xfffffff0);
            *puVar4 = *puVar3;
            puVar4[1] = uVar19;
            puVar4[2] = uVar20;
            puVar4[3] = uVar21;
            puVar8 = puVar8 + 2;
          } while (puVar8 != puVar11);
        }
        puVar11 = puVar11 + -2;
        puVar10 = puVar10 + -2;
        puVar8 = puVar2;
      }
      puVar10 = puVar10 + 2;
      puVar2 = puVar8;
    } while (puVar10 != puVar11);
    puStack_8c = puVar11;
    if (puVar9 == puVar11) goto LAB_82386000;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar6 = 1;
    fStack_b0 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    iVar7 = (int)((float)(__int64)((int)puVar11 - (int)puVar9 >> 4) * (fStack_b0 - lbl_821CA460));
    uStack_a0 = (unsigned __int64)iVar7;
    puVar3 = (unsigned int *)((unsigned int)(puVar9 + iVar7 * 2) & 0xfffffff0);
    uVar19 = puVar3[1];
    uVar20 = puVar3[2];
    uVar21 = puVar3[3];
    puVar4 = (unsigned int *)((int)in_r0 + (int)param_2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar19;
    puVar4[2] = uVar20;
    puVar4[3] = uVar21;
  }
  fn_82386340(&puStack_90);
LAB_82385dd4:
  fn_82F6A588(uVar6);
  return;
}

