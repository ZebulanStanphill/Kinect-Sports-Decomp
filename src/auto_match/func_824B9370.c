typedef unsigned char bool;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


bool fn_824B9370(unsigned int param_1,int param_2,unsigned int param_3,int param_4,__int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int iVar15;
  int iVar16;
  unsigned char uVar18;
  int iVar17;
  unsigned int uStack00000014;
  unsigned int uStack00000024;
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int auStack_a0 [40];
  
  iVar15 = *(int *)(param_2 + 0x100);
  uStack_c8 = *(unsigned int *)(iVar15 + 0x448);
  uStack_cc = *(unsigned int *)(iVar15 + 0x440);
  uStack_d0 = *(unsigned int *)(iVar15 + 0x450);
  uStack_d4 = *(unsigned int *)(iVar15 + 0x444);
  uStack_d8 = *(unsigned int *)(iVar15 + 0x44c);
  auStack_a0[0] = *(unsigned int *)((int)((param_5 + 0x7aU & 0xffffffff) << 2) + iVar15);
  uStack_a4 = *(unsigned int *)((int)((param_5 + 0x7bU & 0xffffffff) << 2) + iVar15);
  uStack_ac = *(unsigned int *)((int)((param_5 + 0x6aU & 0xffffffff) << 2) + iVar15);
  uStack_b8 = *(unsigned int *)((int)((param_5 + 0x6bU & 0xffffffff) << 2) + iVar15);
  uStack_b4 = *(unsigned int *)((int)((param_5 + 0x6dU & 0xffffffff) << 2) + iVar15);
  uStack_c0 = *(unsigned int *)((int)((param_5 + 0x72U & 0xffffffff) << 2) + iVar15);
  uStack_b0 = *(unsigned int *)((int)((param_5 + 0x6eU & 0xffffffff) << 2) + iVar15);
  uStack_a8 = *(unsigned int *)((int)((param_5 + 0x6fU & 0xffffffff) << 2) + iVar15);
  uStack_bc = *(unsigned int *)((int)((param_5 + 0x71U & 0xffffffff) << 2) + iVar15);
  uStack_c4 = *(unsigned int *)((int)((param_5 + 0x73U & 0xffffffff) << 2) + iVar15);
  uVar1 = *(unsigned int *)((int)((param_5 + 0x66U & 0xffffffff) << 2) + iVar15);
  uVar2 = *(unsigned int *)((int)((param_5 + 0x67U & 0xffffffff) << 2) + iVar15);
  uVar3 = *(unsigned int *)((int)((param_5 + 0x68U & 0xffffffff) << 2) + iVar15);
  uVar4 = *(unsigned int *)((int)((param_5 + 0x78U & 0xffffffff) << 2) + iVar15);
  uVar5 = *(unsigned int *)((int)((param_5 + 0x79U & 0xffffffff) << 2) + iVar15);
  uVar6 = *(unsigned int *)((int)((param_5 + 0x70U & 0xffffffff) << 2) + iVar15);
  uVar7 = *(unsigned int *)((int)((param_5 + 0x74U & 0xffffffff) << 2) + iVar15);
  uVar8 = *(unsigned int *)((int)((param_5 + 0x76U & 0xffffffff) << 2) + iVar15);
  uVar9 = *(unsigned int *)((int)((param_5 + 0x7fU & 0xffffffff) << 2) + iVar15);
  uVar10 = *(unsigned int *)((int)((param_5 + 0x7dU & 0xffffffff) << 2) + iVar15);
  uVar11 = *(unsigned int *)((int)((param_5 + 0x7cU & 0xffffffff) << 2) + iVar15);
  uVar12 = *(unsigned int *)((int)((param_5 + 0x7eU & 0xffffffff) << 2) + iVar15);
  uVar13 = *(unsigned int *)((int)((param_5 + 0x80U & 0xffffffff) << 2) + iVar15);
  uVar14 = *(unsigned int *)((int)((param_5 + 0x81U & 0xffffffff) << 2) + iVar15);
  uStack00000014 = param_1;
  uStack00000024 = param_3;
  iVar15 = fn_8245AE18();
  iVar17 = -0x7fffbffb;
  iVar16 = fn_8245B1F0();
  if (iVar16 != 0) {
    if (param_4 == 0) {
      fn_8245AF50(iVar15,0x19);
      if (*(int *)(iVar15 + 0x14) == 0) {
        *(unsigned int *)(iVar15 + 0x14) = 1;
      }
      uVar18 = fn_823AB478(param_2);
      fn_8245B050(iVar15,uVar18,4);
      fn_8245B050(iVar15,uStack00000024 & 0xff,4);
      fn_8245B100(iVar15);
    }
    else {
      fn_8245AF50(iVar15,0x18);
      auStack_e0[0] = fn_823AB478(param_2);
      fn_8245B168(iVar15,auStack_e0,1);
    }
    uStack_dc = uVar14;
    fn_8245B168(iVar15,&uStack_dc,4);
    fn_8245B168(iVar15,&uStack_d8,4);
    fn_8245B168(iVar15,&uStack_d4,4);
    fn_8245B168(iVar15,&uStack_d0,4);
    fn_8245B168(iVar15,&uStack_cc,4);
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar9;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar10;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar13;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar11;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar12;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar8;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar7;
    fn_8245B168(iVar15,&uStack_c8,4);
    uStack_c8 = uVar6;
    fn_8245B168(iVar15,&uStack_c8,4);
    if (param_4 == 0) {
      fn_8245B168(iVar15,&uStack_c4,4);
      fn_8245B168(iVar15,&uStack_c0,4);
      fn_8245B168(iVar15,&uStack_bc,4);
    }
    uStack_bc = uVar1;
    fn_8245B168(iVar15,&uStack_bc,4);
    fn_8245B168(iVar15,&uStack_b8,4);
    fn_8245B168(iVar15,&uStack_b4,4);
    uStack_b4 = uVar2;
    fn_8245B168(iVar15,&uStack_b4,4);
    uStack_b4 = uVar3;
    fn_8245B168(iVar15,&uStack_b4,4);
    fn_8245B168(iVar15,&uStack_b0,4);
    fn_8245B168(iVar15,&uStack_ac,4);
    fn_8245B168(iVar15,&uStack_a8,4);
    fn_8245B168(iVar15,&uStack_a4,4);
    fn_8245B168(iVar15,auStack_a0,4);
    auStack_a0[0] = uVar5;
    fn_8245B168(iVar15,auStack_a0,4);
    auStack_a0[0] = uVar4;
    fn_8245B168(iVar15,auStack_a0,4);
    iVar17 = fn_8245AFC0(iVar15,0xffffffff824b8538,uStack00000014);
  }
  return iVar17 == 0;
}

