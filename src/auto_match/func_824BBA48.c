typedef unsigned char bool;
#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
#define CONCAT26(h,l) ((unsigned __int64)((((unsigned short)(h)) << 48) | ((unsigned __int64)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_a8;
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000034;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
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
extern unsigned int uStack_e0;


bool fn_824BBA48(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4,__int64 param_5)

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
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  int iVar19;
  unsigned char uVar21;
  int iVar20;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int iStack00000034;
  unsigned __int64 uStack_e0;
  struct { unsigned int first; unsigned int second; } stack_pair_d8;

  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int auStack_a8 [42];

  uStack00000014 = (unsigned int)param_1;
  iStack00000034 = (int)param_5;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  iVar18 = fn_8245AE18();
  uStack_e0 = CONCAT44(iVar18,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
  iVar20 = -0x7fffbffb;
  iVar19 = fn_8245B1F0();
  if (iVar19 != 0) {
    if (param_4 == 0) {
      iVar19 = *(int *)(param_2 + 0x100);
      uStack_bc = *(unsigned int *)((int)((param_5 + 0x1beU & 0xffffffff) << 2) + iVar19);
      uStack_c0 = *(unsigned int *)((int)((param_5 + 0x1bfU & 0xffffffff) << 2) + iVar19);
      uStack_c4 = *(unsigned int *)((int)((param_5 + 0x1c0U & 0xffffffff) << 2) + iVar19);
      uStack_c8 = *(unsigned int *)((int)((param_5 + 0x1c1U & 0xffffffff) << 2) + iVar19);
      uVar1 = *(unsigned int *)((int)((param_5 + 0x1afU & 0xffffffff) << 2) + iVar19);
      uVar2 = *(unsigned int *)((int)((param_5 + 0x1adU & 0xffffffff) << 2) + iVar19);
      uVar3 = *(unsigned int *)((int)((param_5 + 0x1b2U & 0xffffffff) << 2) + iVar19);
      uVar4 = *(unsigned int *)((int)((param_5 + 0x1b0U & 0xffffffff) << 2) + iVar19);
      uVar5 = *(unsigned int *)((int)((param_5 + 0x1b3U & 0xffffffff) << 2) + iVar19);
      uVar6 = *(unsigned int *)((int)((param_5 + 0x1b4U & 0xffffffff) << 2) + iVar19);
      uVar7 = *(unsigned int *)((int)((param_5 + 0x1b5U & 0xffffffff) << 2) + iVar19);
      uVar8 = *(unsigned int *)((int)((param_5 + 0x1b7U & 0xffffffff) << 2) + iVar19);
      uVar9 = *(unsigned int *)((int)((param_5 + 0x1b8U & 0xffffffff) << 2) + iVar19);
      uVar10 = *(unsigned int *)((int)((param_5 + 0x1bbU & 0xffffffff) << 2) + iVar19);
      uVar11 = *(unsigned int *)((int)((param_5 + 0x1b1U & 0xffffffff) << 2) + iVar19);
      uVar12 = *(unsigned int *)((int)((param_5 + 0x1b9U & 0xffffffff) << 2) + iVar19);
      uVar13 = *(unsigned int *)((int)((param_5 + 0x1baU & 0xffffffff) << 2) + iVar19);
      uVar14 = *(unsigned int *)((int)((param_5 + 0x1bcU & 0xffffffff) << 2) + iVar19);
      uVar15 = *(unsigned int *)((int)((param_5 + 0x1bdU & 0xffffffff) << 2) + iVar19);
      stack_pair_d0.second = *(unsigned int *)((int)((param_5 + 0x1c2U & 0xffffffff) << 2) + iVar19);
      uVar16 = *(unsigned int *)((int)((param_5 + 0x1aeU & 0xffffffff) << 2) + iVar19);
      uStack_b0 = *(unsigned int *)((int)((param_5 + 0x1c4U & 0xffffffff) << 2) + iVar19);
      stack_pair_d0.first = *(unsigned int *)((int)((param_5 + 0x1c3U & 0xffffffff) << 2) + iVar19);
      iVar18 = (((unsigned __int64)(uStack_e0) >> 0) & 0xFFFFFFFF);
      uStack_b8 = *(unsigned int *)((int)((param_5 + 0x1c5U & 0xffffffff) << 2) + iVar19);
      uStack_b4 = *(unsigned int *)((int)((param_5 + 0x1c6U & 0xffffffff) << 2) + iVar19);
      uStack_ac = *(unsigned int *)((iStack00000034 + 0x1c8) * 4 + iVar19);
      stack_pair_d8.first = *(unsigned int *)((iStack00000034 + 0x1c7) * 4 + iVar19);
      auStack_a8[0] = *(unsigned int *)((iStack00000034 + 0x1c9) * 4 + iVar19);
      stack_pair_d8.second = *(unsigned int *)((iStack00000034 + 0x1ca) * 4 + iVar19);
      uStack_e0 = (unsigned __int64)*(unsigned int *)((int)((param_5 + 0x1acU & 0xffffffff) << 2) + iVar19);
      fn_8245AF50(iVar18,6);
      uVar17 = uStack_e0;
      if (*(int *)(iVar18 + 0x14) == 0) {
        *(unsigned int *)(iVar18 + 0x14) = 1;
      }
      uVar21 = fn_823AB478(iStack0000001c);
      fn_8245B050(iVar18,uVar21,4);
      fn_8245B050(iVar18,uStack00000024 & 0xff,4);
      fn_8245B100(iVar18);
      fn_8245B168(iVar18,&stack_pair_d8.first,4);
      stack_pair_d8.first = uVar3;
      fn_8245B168(iVar18,&stack_pair_d8.first,4);
      uStack_e0 = CONCAT26((short)uVar17,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT26((short)stack_pair_d8.second,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT26((short)uVar4,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT26((short)uVar1,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      fn_8245B168(iVar18,&stack_pair_d0.first,4);
      fn_8245B168(iVar18,&stack_pair_d0.second,4);
      fn_8245B168(iVar18,&uStack_c8,4);
      fn_8245B168(iVar18,&uStack_c4,4);
      fn_8245B168(iVar18,&uStack_c0,4);
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar8;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar9;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar13;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar12;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar10;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar14;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar15;
      fn_8245B168(iVar18,&uStack_bc,4);
      uStack_bc = uVar6;
      fn_8245B168(iVar18,&uStack_bc,4);
      fn_8245B168(iVar18,&uStack_b8,4);
      fn_8245B168(iVar18,&uStack_b4,4);
      fn_8245B168(iVar18,&uStack_b0,4);
      fn_8245B168(iVar18,&uStack_ac,4);
      uStack_ac = uVar7;
      fn_8245B168(iVar18,&uStack_ac,4);
      uStack_ac = uVar5;
      fn_8245B168(iVar18,&uStack_ac,4);
      fn_8245B168(iVar18,auStack_a8,4);
      auStack_a8[0] = uVar2;
      fn_8245B168(iVar18,auStack_a8,4);
      uStack_e0 = CONCAT26((short)uVar11,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT26((short)uVar16,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      param_1 = (unsigned __int64)uStack00000014;
    }
    else {
      iVar19 = *(int *)(param_2 + 0x100);
      uVar1 = *(unsigned int *)(iVar19 + 0x8b8);
      uVar2 = *(unsigned int *)(iVar19 + 0x8bc);
      uVar3 = *(unsigned int *)(iVar19 + 0x8c0);
      uVar4 = *(unsigned int *)(iVar19 + 0x8c4);
      uVar5 = *(unsigned int *)(iVar19 + 0x8c8);
      uVar6 = *(unsigned int *)(iVar19 + 0x8cc);
      uVar7 = *(unsigned int *)(iVar19 + 0x8d0);
      fn_8245AF50(iVar18,5);
      uVar21 = fn_823AB478(param_2);
      uStack_e0 = CONCAT17(uVar21,(((unsigned __int64)(uStack_e0) >> 8) & 0xFFFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,1);
      uStack_e0 = CONCAT26((short)uVar1,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT44(uVar2,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,4);
      uStack_e0 = CONCAT44(uVar3,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,4);
      uStack_e0 = CONCAT26((short)uVar4,(((unsigned __int64)(uStack_e0) >> 16) & 0xFFFFFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,2);
      uStack_e0 = CONCAT44(uVar5,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,4);
      uStack_e0 = CONCAT44(uVar6,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,4);
      uStack_e0 = CONCAT44(uVar7,(((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF));
      fn_8245B168(iVar18,&uStack_e0,4);
    }
    iVar20 = fn_8245AFC0(iVar18,0xffffffff824b8538,param_1);
  }
  return iVar20 == 0;
}
