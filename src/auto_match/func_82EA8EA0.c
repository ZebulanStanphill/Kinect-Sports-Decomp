#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
#define _uStack_a8 ((*(unsigned __int64*)&uStack_a8))
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82F26110();
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_831898B8;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82EA8EA0(int param_1,int param_2,__int64 param_3,__int64 param_4,int param_5,int param_6
                  ,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int (**pcVar4)();
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned char *pbVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  unsigned char *pbVar26;
  unsigned char *pbVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  unsigned char *pbVar33;
  unsigned char *pbVar34;
  unsigned __int64 uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  unsigned __int64 uVar39;
  unsigned char *pbVar40;
  __int64 lVar41;
  unsigned char *pbVar42;
  unsigned __int64 uVar43;
  __int64 lVar44;
  __int64 lVar45;
  unsigned int uVar46;
  __int64 lVar47;
  unsigned int uVar48;
  unsigned int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  unsigned int *in_stack_0000008c;
  int *in_stack_00000094;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  iStack_c0 = 0;
  uStack_c8 = in_stack_0000008c[2];
  uStack_d0 = *in_stack_0000008c;
  uStack_cc = in_stack_0000008c[1];
  uStack_c4 = in_stack_0000008c[3];
  uVar46 = *(unsigned int *)(in_stack_00000064 + 8);
  uVar48 = *(unsigned int *)(in_stack_00000064 + 0xc);
  uVar2 = *(unsigned int *)(in_stack_0000006c + 8);
  uVar3 = *(unsigned int *)(in_stack_0000006c + 0xc);
  pcVar4 = *(int (***)())(in_stack_00000084 + 8);
  fn_82F26110(param_1,&uStack_d0,&uStack_cc,param_7,param_8);
  lVar41 = (__int64)((int)uStack_cc >> 2) * (__int64)*(int *)(param_1 + 0x564) +
           (__int64)((int)uStack_d0 >> 2);
  if (in_stack_0000005c == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar41 + param_3);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar41 + param_3,*(int *)(param_1 + 0x564),param_5,0x10,uStack_d0,uStack_cc,0,
               *(unsigned int *)(param_1 + 0x618));
  }
  fn_82F26110(param_1,&uStack_c8,&uStack_c4,param_7,param_8);
  iVar37 = *(int *)(param_1 + 0x564);
  if (in_stack_0000005c == 1) {
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)uStack_c4 >> 2) * (__int64)iVar37 + (__int64)((int)uStack_c8 >> 2)
               + param_4);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              ((__int64)((int)uStack_c4 >> 2) * (__int64)iVar37 + (__int64)((int)uStack_c8 >> 2)
               + param_4,iVar37,param_5 + 0x100,0x10,uStack_c8,uStack_c4,0,
               *(unsigned int *)(param_1 + 0x618));
  }
  (**(int (***)())(param_1 + 0xb1c))(param_5,0x10,param_5 + 0x100,0x10,param_5,0x10,0x10,0x10);
  uVar35 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
  uVar43 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
  lVar45 = ((uVar43 - uVar48) + (unsigned __int64)uStack_cc & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
           uVar43;
  lVar47 = ((uVar35 - uVar46) + (unsigned __int64)uStack_d0 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
           uVar35;
  lVar44 = ((uVar35 - uVar2) + (unsigned __int64)uStack_c8 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
           uVar35;
  uVar46 = (unsigned int)lVar45;
  _uStack_a8 = CONCAT44(uVar46,uStack_a4);
  lVar41 = ((uVar43 - uVar3) + (unsigned __int64)uStack_c4 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
           uVar43;
  uVar48 = (unsigned int)lVar47;
  uStack_a0 = (unsigned int)lVar44;
  uStack_9c = (unsigned int)lVar41;
  uStack_b0 = uVar48;
  if (*(int *)(param_1 + 0x6d74) == 0) {
    if (*(int *)(param_1 + 0x6d78) == 0) {
      iVar37 = fn_82E9AB00(param_1,lVar44,lVar41,in_stack_0000007c);
      iVar36 = fn_82E9AB00(param_1,lVar47,lVar45);
      iVar38 = (*pcVar4)(param_2,0x10,param_5,0x10,in_stack_00000074);
      *in_stack_00000094 = iVar38 + iVar37 + iVar36;
    }
    else {
      pbVar42 = (unsigned char *)(param_2 + 0xe);
      lVar41 = 0x10;
      pbVar40 = (unsigned char *)(param_5 + -0x10);
      do {
        pbVar5 = pbVar40 + 0x1f;
        pbVar6 = pbVar40 + 0x1d;
        pbVar7 = pbVar40 + 0x1c;
        pbVar8 = pbVar40 + 0x18;
        pbVar9 = pbVar40 + 0x1b;
        pbVar10 = pbVar40 + 0x1a;
        pbVar11 = pbVar40 + 0x19;
        pbVar12 = pbVar40 + 0x17;
        pbVar13 = pbVar40 + 0x16;
        pbVar14 = pbVar40 + 0x15;
        pbVar15 = pbVar40 + 0x14;
        pbVar16 = pbVar40 + 0x13;
        pbVar17 = pbVar40 + 0x12;
        pbVar18 = pbVar40 + 0x11;
        pbVar40 = pbVar40 + 0x10;
        pbVar19 = pbVar42 + -0xe;
        pbVar20 = pbVar42 + -0xd;
        pbVar21 = pbVar42 + -0xc;
        pbVar22 = pbVar42 + (param_5 - param_2);
        pbVar23 = pbVar42 + -3;
        pbVar24 = pbVar42 + -0xb;
        pbVar25 = pbVar42 + -10;
        pbVar26 = pbVar42 + -9;
        pbVar27 = pbVar42 + -8;
        pbVar28 = pbVar42 + -7;
        pbVar29 = pbVar42 + -6;
        pbVar30 = pbVar42 + -5;
        pbVar31 = pbVar42 + 1;
        bVar1 = *pbVar42;
        pbVar32 = pbVar42 + -1;
        pbVar33 = pbVar42 + -2;
        pbVar34 = pbVar42 + -4;
        pbVar42 = pbVar42 + 0x10;
        iStack_c0 = ((unsigned int)*pbVar40 - (unsigned int)*pbVar19) * ((unsigned int)*pbVar40 - (unsigned int)*pbVar19) +
                    ((unsigned int)*pbVar18 - (unsigned int)*pbVar20) * ((unsigned int)*pbVar18 - (unsigned int)*pbVar20) +
                    ((unsigned int)*pbVar17 - (unsigned int)*pbVar21) * ((unsigned int)*pbVar17 - (unsigned int)*pbVar21) +
                    ((unsigned int)*pbVar16 - (unsigned int)*pbVar24) * ((unsigned int)*pbVar16 - (unsigned int)*pbVar24) +
                    ((unsigned int)*pbVar15 - (unsigned int)*pbVar25) * ((unsigned int)*pbVar15 - (unsigned int)*pbVar25) +
                    ((unsigned int)*pbVar14 - (unsigned int)*pbVar26) * ((unsigned int)*pbVar14 - (unsigned int)*pbVar26) +
                    ((unsigned int)*pbVar13 - (unsigned int)*pbVar27) * ((unsigned int)*pbVar13 - (unsigned int)*pbVar27) +
                    ((unsigned int)*pbVar12 - (unsigned int)*pbVar28) * ((unsigned int)*pbVar12 - (unsigned int)*pbVar28) +
                    ((unsigned int)*pbVar8 - (unsigned int)*pbVar29) * ((unsigned int)*pbVar8 - (unsigned int)*pbVar29) +
                    ((unsigned int)*pbVar11 - (unsigned int)*pbVar30) * ((unsigned int)*pbVar11 - (unsigned int)*pbVar30) +
                    ((unsigned int)*pbVar10 - (unsigned int)*pbVar34) * ((unsigned int)*pbVar10 - (unsigned int)*pbVar34) +
                    ((unsigned int)*pbVar9 - (unsigned int)*pbVar23) * ((unsigned int)*pbVar9 - (unsigned int)*pbVar23) +
                    ((unsigned int)*pbVar7 - (unsigned int)*pbVar33) * ((unsigned int)*pbVar7 - (unsigned int)*pbVar33) +
                    ((unsigned int)*pbVar6 - (unsigned int)*pbVar32) * ((unsigned int)*pbVar6 - (unsigned int)*pbVar32) +
                    ((unsigned int)*pbVar22 - (unsigned int)bVar1) * ((unsigned int)*pbVar22 - (unsigned int)bVar1) +
                    ((unsigned int)*pbVar5 - (unsigned int)*pbVar31) * ((unsigned int)*pbVar5 - (unsigned int)*pbVar31) + iStack_c0;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      iVar36 = (uVar48 ^ (int)uVar48 >> 0x1f) - ((int)uVar48 >> 0x1f);
      iVar37 = (uVar46 ^ (int)uVar46 >> 0x1f) - ((int)uVar46 >> 0x1f);
      if ((iVar36 < 0x9f) && (iVar37 < 0x9f)) {
        iVar37 = *(int *)(*(int *)(&lbl_831898B8 + iVar37 * 4) * 4 + in_stack_0000007c) +
                 *(int *)(*(int *)(&lbl_831898B8 + iVar36 * 4) * 4 + in_stack_0000007c);
      }
      else {
        iVar37 = *(int *)(in_stack_0000007c + 0x14) << 1;
      }
      iVar38 = (uStack_a0 ^ (int)uStack_a0 >> 0x1f) - ((int)uStack_a0 >> 0x1f);
      iVar36 = (uStack_9c ^ (int)uStack_9c >> 0x1f) - ((int)uStack_9c >> 0x1f);
      if ((iVar38 < 0x9f) && (iVar36 < 0x9f)) {
        *in_stack_00000094 =
             *(int *)(*(int *)(&lbl_831898B8 + iVar36 * 4) * 4 + in_stack_0000007c) +
             *(int *)(*(int *)(&lbl_831898B8 + iVar38 * 4) * 4 + in_stack_0000007c) + iVar37 +
             (int)((double)SQRT((float)(__int64)iStack_c0) + lbl_82005730);
      }
      else {
        *in_stack_00000094 =
             *(int *)(in_stack_0000007c + 0x14) * 2 + iVar37 +
             (int)((double)SQRT((float)(__int64)iStack_c0) + lbl_82005730);
      }
    }
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,param_5,0x10,0x10,0x10,param_6);
    iVar37 = iStack_c0;
    iVar36 = fn_82E9B140(param_1,lVar47,lVar45,iStack_c0,in_stack_00000054);
    if (((iVar37 != 0) || (uVar48 != 0)) || (uVar39 = 0, uVar46 != 0)) {
      uVar39 = 1;
    }
    iVar37 = fn_82E9B140(param_1,lVar44,lVar41,uVar39,in_stack_00000054);
    *in_stack_00000094 = *(int *)(param_6 + 0x6c) * (iVar37 + iVar36 + iStack_bc) + iStack_b8;
  }
  return;
}

