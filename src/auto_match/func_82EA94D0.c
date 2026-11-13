extern int fn_82E9E5A8();
extern int fn_82EA8EA0();
extern int fn_82F26110();
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82EA94D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,__int64 param_5
                  ,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  short *psVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  unsigned int uVar19;
  __int64 lVar20;
  unsigned int uVar21;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  short *in_stack_0000008c;
  short *in_stack_00000094;
  unsigned int *in_stack_0000009c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  unsigned int *in_stack_000000b4;
  unsigned int *in_stack_000000bc;
  unsigned int *in_stack_000000c4;
  unsigned int *in_stack_000000cc;
  int *in_stack_000000d4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  short *psStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  int (**pcStack_cc)();
  unsigned int *puStack_c8;
  unsigned int *puStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  
  uVar7 = (unsigned __int64)in_stack_0000007c;
  uVar11 = 0;
  uVar21 = *(unsigned int *)(in_stack_00000064 + 8);
  uVar19 = *(unsigned int *)(in_stack_00000064 + 0xc);
  uStack0000001c = (unsigned int)param_2;
  uStack00000024 = (unsigned int)param_3;
  uStack_d0 = 0;
  lVar20 = param_5 + 0x100;
  uVar16 = *(unsigned int *)(in_stack_0000006c + 8);
  uVar14 = *(unsigned int *)(in_stack_0000006c + 0xc);
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  psStack_e0 = (short *)0xfffffff;
  pcStack_cc = *(int (***)())(in_stack_000000ac + 8);
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  if (0 < (int)in_stack_0000007c) {
    uStack_d0 = in_stack_0000007c;
    iVar9 = 0xfffffff;
    do {
      uVar12 = (unsigned __int64)in_stack_00000084;
      uStack_f0 = (int)*in_stack_0000008c << 2;
      uStack_ec = (int)in_stack_0000008c[1] << 2;
      psStack_e0 = in_stack_0000008c;
      fn_82F26110(param_1,&uStack_f0,&uStack_ec,uStack00000044,uStack0000004c);
      iVar18 = *(int *)(param_1 + 0x564);
      if (in_stack_0000005c == 1) {
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)((int)uStack_ec >> 2) * (__int64)iVar18 +
                   (__int64)((int)uStack_f0 >> 2) + param_3);
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  ((__int64)((int)uStack_ec >> 2) * (__int64)iVar18 +
                   (__int64)((int)uStack_f0 >> 2) + param_3,iVar18,param_5,0x10,uStack_f0,uStack_ec
                   ,0,*(unsigned int *)(param_1 + 0x618));
      }
      psVar13 = in_stack_00000094;
      if (0 < (int)in_stack_00000084) {
        do {
          uStack_e8 = (int)*psVar13 << 2;
          uStack_e4 = (int)psVar13[1] << 2;
          fn_82F26110(param_1,&uStack_e8,&uStack_e4,uStack00000044,uStack0000004c);
          iVar18 = *(int *)(param_1 + 0x564);
          if (in_stack_0000005c == 1) {
            (**(int (***)())(param_1 + 0x9b8))
                      ((__int64)((int)uStack_e4 >> 2) * (__int64)iVar18 +
                       (__int64)((int)uStack_e8 >> 2) + param_4);
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      ((__int64)((int)uStack_e4 >> 2) * (__int64)iVar18 +
                       (__int64)((int)uStack_e8 >> 2) + param_4,iVar18,lVar20,0x10,uStack_e8,
                       uStack_e4,0,*(unsigned int *)(param_1 + 0x618));
          }
          (**(int (***)())(param_1 + 0xb1c))(param_5,0x10,lVar20,0x10,lVar20,0x10,0x10,0x10);
          uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
          uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
          uVar17 = ((uVar6 - uVar21) + (unsigned __int64)uStack_f0 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34))
                   - uVar6;
          uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
          uVar7 = ((uVar5 - uVar19) + (unsigned __int64)uStack_ec & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38))
                  - uVar5;
          uVar10 = (unsigned __int64)((int)uVar7 >> 0x1f);
          uVar15 = (uVar17 ^ uVar15) - uVar15;
          uVar6 = ((uVar6 - uVar16) + (unsigned __int64)uStack_e8 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34))
                  - uVar6;
          uVar5 = ((uVar5 - uVar14) + (unsigned __int64)uStack_e4 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38))
                  - uVar5;
          uVar10 = (uVar7 ^ uVar10) - uVar10;
          if (((int)uVar15 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4);
          }
          else {
            iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          uVar10 = (unsigned __int64)((int)uVar6 >> 0x1f);
          uVar7 = (unsigned __int64)((int)uVar5 >> 0x1f);
          uVar10 = (uVar6 ^ uVar10) - uVar10;
          uVar7 = (uVar5 ^ uVar7) - uVar7;
          if (((int)uVar10 < 0x9f) && ((int)uVar7 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000a4) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000a4);
          }
          else {
            iVar4 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          iVar3 = (*pcStack_cc)(uStack0000001c,0x10,lVar20,0x10,in_stack_00000074);
          iVar18 = iVar3 + iVar4 + iVar18;
          if (iVar18 < iVar9) {
            uStack_dc = uStack_ec;
            uStack_d8 = uStack_e8;
            uStack_d4 = uStack_e4;
            uVar11 = uStack_f0;
            iVar9 = iVar18;
          }
          uVar12 = uVar12 - 1;
          psVar13 = psVar13 + 2;
        } while (uVar12 != 0);
        param_3 = (unsigned __int64)uStack00000024;
        uVar7 = (unsigned __int64)uStack_d0;
        in_stack_0000008c = psStack_e0;
      }
      psStack_e0 = (short *)iVar9;
      uVar7 = uVar7 - 1;
      in_stack_0000008c = in_stack_0000008c + 2;
      uStack_d0 = (unsigned int)uVar7;
      iVar9 = (int)psStack_e0;
    } while (uVar7 != 0);
    param_2 = (unsigned __int64)uStack0000001c;
    uStack_d0 = uVar11;
  }
  fn_82E9E5A8(param_1,param_2,param_3,param_4,0xffffffff83189328,uStack_d0,uStack_dc,uStack_d8);
  if (in_stack_00000054 == 0) {
    puStack_c8 = &uStack_dc;
    puStack_c4 = &uStack_d0;
    uStack_c0 = 1;
    fn_82E9E5A8(param_1,param_2,param_3,param_4,0xffffffff83189368,uStack_d0,uStack_dc,uStack_d8);
    param_2 = (unsigned __int64)uStack0000001c;
    param_3 = (unsigned __int64)uStack00000024;
  }
  uVar2 = uStack0000004c;
  uVar1 = uStack00000044;
  uStack_f0 = *in_stack_0000009c;
  uStack_ec = in_stack_0000009c[1];
  fn_82F26110(param_1,&uStack_f0,&uStack_ec,uStack00000044,uStack0000004c);
  lVar8 = (__int64)((int)uStack_ec >> 2) * (__int64)*(int *)(param_1 + 0x564) +
          (__int64)((int)uStack_f0 >> 2);
  if (in_stack_0000005c == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar8 + param_3);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar8 + param_3,*(int *)(param_1 + 0x564),param_5,0x10,uStack_f0,uStack_ec,0,
               *(unsigned int *)(param_1 + 0x618));
  }
  uStack_e8 = in_stack_0000009c[2];
  uStack_e4 = in_stack_0000009c[3];
  fn_82F26110(param_1,&uStack_e8,&uStack_e4,uVar1,uVar2);
  lVar8 = (__int64)((int)uStack_e4 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
          (__int64)((int)uStack_e8 >> 2);
  if (in_stack_0000005c == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar8 + param_4);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar8 + param_4,*(int *)(param_1 + 0x564),lVar20,0x10,uStack_e8,uStack_e4,0,
               *(unsigned int *)(param_1 + 0x618));
  }
  (**(int (***)())(param_1 + 0xb1c))(param_5,0x10,lVar20,0x10,lVar20,0x10,0x10,0x10);
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
  uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
  uVar15 = ((uVar5 - uVar21) + (unsigned __int64)uStack_f0 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) - uVar5
  ;
  uVar10 = (unsigned __int64)((int)uVar15 >> 0x1f);
  uVar7 = ((uVar12 - uVar19) + (unsigned __int64)uStack_ec & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
          uVar12;
  uVar6 = (unsigned __int64)((int)uVar7 >> 0x1f);
  uVar10 = (uVar15 ^ uVar10) - uVar10;
  uVar5 = ((uVar5 - uVar16) + (unsigned __int64)uStack_e8 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) - uVar5;
  uVar12 = ((uVar12 - uVar14) + (unsigned __int64)uStack_e4 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
           uVar12;
  uVar6 = (uVar7 ^ uVar6) - uVar6;
  if (((int)uVar10 < 0x9f) && ((int)uVar6 < 0x9f)) {
    iVar9 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                    in_stack_000000a4) +
            *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                    in_stack_000000a4);
  }
  else {
    iVar9 = *(int *)(in_stack_000000a4 + 0x14) << 1;
  }
  uVar6 = (unsigned __int64)((int)uVar5 >> 0x1f);
  uVar7 = (unsigned __int64)((int)uVar12 >> 0x1f);
  uVar6 = (uVar5 ^ uVar6) - uVar6;
  uVar7 = (uVar12 ^ uVar7) - uVar7;
  if (((int)uVar6 < 0x9f) && ((int)uVar7 < 0x9f)) {
    iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000a4) +
             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000a4);
  }
  else {
    iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
  }
  iVar4 = (*pcStack_cc)(param_2,0x10,lVar20,0x10,in_stack_00000074);
  iVar9 = iVar4 + iVar18 + iVar9;
  uVar21 = uStack_d0;
  uVar19 = uStack_dc;
  uVar16 = uStack_d8;
  uVar14 = uStack_d4;
  if (iVar9 < (int)psStack_e0) {
    uVar21 = uStack_f0;
    uVar19 = uStack_ec;
    uVar16 = uStack_e8;
    uVar14 = uStack_e4;
    psStack_e0 = (short *)iVar9;
  }
  if (*(int *)(param_1 + 0x6d74) != 0) {
    uStack_b0 = uVar21;
    uStack_ac = uVar19;
    uStack_a8 = uVar16;
    uStack_a4 = uVar14;
    fn_82EA8EA0(param_1,param_2,param_3,param_4,param_5,uStack0000003c,uStack00000044,
                  uStack0000004c);
  }
  *in_stack_000000d4 = (int)psStack_e0;
  *in_stack_000000b4 = uVar21;
  *in_stack_000000bc = uVar19;
  *in_stack_000000c4 = uVar16;
  *in_stack_000000cc = uVar14;
  return;
}

