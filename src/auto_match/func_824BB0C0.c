typedef unsigned char bool;
#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_a4;
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_c0;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


bool fn_824BB0C0(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4,__int64 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  int iVar21;
  unsigned char uVar23;
  int iVar22;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int iStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int auStack_a4 [41];
  
  uStack00000014 = (unsigned int)param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  iVar20 = fn_8245AE18();
  iVar22 = -0x7fffbffb;
  iVar21 = fn_8245B1F0();
  if (iVar21 != 0) {
    if (param_4 == 0) {
      iVar21 = *(int *)(param_2 + 0x100);
      uStack_a8 = *(unsigned int *)((int)((param_5 + 0x2f3U & 0xffffffff) << 2) + iVar21);
      uStack_b8 = *(unsigned int *)((int)((param_5 + 0x2f4U & 0xffffffff) << 2) + iVar21);
      uStack_bc = *(unsigned int *)((int)((param_5 + 0x2f5U & 0xffffffff) << 2) + iVar21);
      auStack_a4[0] = *(unsigned int *)((int)((param_5 + 0x2f6U & 0xffffffff) << 2) + iVar21);
      uStack_ac = *(unsigned int *)((int)((param_5 + 0x2f7U & 0xffffffff) << 2) + iVar21);
      uVar7 = *(unsigned int *)((int)((param_5 + 0x2e2U & 0xffffffff) << 2) + iVar21);
      uVar8 = *(unsigned int *)((int)((param_5 + 0x2e7U & 0xffffffff) << 2) + iVar21);
      uVar9 = *(unsigned int *)((int)((param_5 + 0x2e9U & 0xffffffff) << 2) + iVar21);
      uVar10 = *(unsigned int *)((int)((param_5 + 0x2eaU & 0xffffffff) << 2) + iVar21);
      uVar11 = *(unsigned int *)((int)((param_5 + 0x2ebU & 0xffffffff) << 2) + iVar21);
      uVar12 = *(unsigned int *)((int)((param_5 + 0x2ecU & 0xffffffff) << 2) + iVar21);
      uVar13 = *(unsigned int *)((int)((param_5 + 0x2e3U & 0xffffffff) << 2) + iVar21);
      uVar14 = *(unsigned int *)((int)((param_5 + 0x2edU & 0xffffffff) << 2) + iVar21);
      uVar15 = *(unsigned int *)((int)((param_5 + 0x2eeU & 0xffffffff) << 2) + iVar21);
      uVar16 = *(unsigned int *)((int)((param_5 + 0x2e5U & 0xffffffff) << 2) + iVar21);
      iVar22 = *(int *)((int)((param_5 + 0x2efU & 0xffffffff) << 2) + iVar21);
      uVar17 = *(unsigned int *)((int)((param_5 + 0x2e4U & 0xffffffff) << 2) + iVar21);
      uVar18 = *(unsigned int *)((int)((param_5 + 0x2e6U & 0xffffffff) << 2) + iVar21);
      uVar19 = *(unsigned int *)((int)((param_5 + 0x2e8U & 0xffffffff) << 2) + iVar21);
      iVar1 = *(int *)((int)((param_5 + 0x2f0U & 0xffffffff) << 2) + iVar21);
      iVar2 = *(int *)((int)((param_5 + 0x2f1U & 0xffffffff) << 2) + iVar21);
      iVar3 = *(int *)((int)((param_5 + 0x2f2U & 0xffffffff) << 2) + iVar21);
      uStack_b4 = *(unsigned int *)((int)((param_5 + 0x2f8U & 0xffffffff) << 2) + iVar21);
      uStack_b0 = *(unsigned int *)((int)((param_5 + 0x2f9U & 0xffffffff) << 2) + iVar21);
      iStack_c0 = *(int *)((int)((param_5 + 0x2faU & 0xffffffff) << 2) + iVar21);
      fn_8245AF50(iVar20,0x14);
      if (*(int *)(iVar20 + 0x14) == 0) {
        *(unsigned int *)(iVar20 + 0x14) = 1;
      }
      uVar23 = fn_823AB478(iStack0000001c);
      fn_8245B050(iVar20,uVar23,4);
      fn_8245B050(iVar20,uStack00000024 & 0xff,4);
      fn_8245B100(iVar20);
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar3 + iVar2 + iVar1 + iVar22;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = CONCAT22((short)uVar17,(((unsigned __int64)(iStack_c0) >> 16) & 0xFFFF));
      fn_8245B168(iVar20,&iStack_c0,2);
      iStack_c0 = CONCAT22((short)uVar13,(((unsigned __int64)(iStack_c0) >> 16) & 0xFFFF));
      fn_8245B168(iVar20,&iStack_c0,2);
      iStack_c0 = CONCAT22((short)uVar18,(((unsigned __int64)(iStack_c0) >> 16) & 0xFFFF));
      fn_8245B168(iVar20,&iStack_c0,2);
      iStack_c0 = CONCAT22((short)uVar16,(((unsigned __int64)(iStack_c0) >> 16) & 0xFFFF));
      fn_8245B168(iVar20,&iStack_c0,2);
      iStack_c0 = iVar3;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar2;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar1;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar22;
      fn_8245B168(iVar20,&iStack_c0,4);
      fn_8245B168(iVar20,&uStack_bc,4);
      fn_8245B168(iVar20,&uStack_b8,4);
      uStack_b8 = uVar9;
      fn_8245B168(iVar20,&uStack_b8,4);
      fn_8245B168(iVar20,&uStack_b4,4);
      uStack_b4 = uVar15;
      fn_8245B168(iVar20,&uStack_b4,4);
      fn_8245B168(iVar20,&uStack_b0,4);
      uStack_b0 = uVar11;
      fn_8245B168(iVar20,&uStack_b0,4);
      fn_8245B168(iVar20,&uStack_ac,4);
      uStack_ac = uVar14;
      fn_8245B168(iVar20,&uStack_ac,4);
      uStack_ac = uVar10;
      fn_8245B168(iVar20,&uStack_ac,4);
      fn_8245B168(iVar20,&uStack_a8,4);
      uStack_a8 = uVar8;
      fn_8245B168(iVar20,&uStack_a8,4);
      uStack_a8 = uVar19;
      fn_8245B168(iVar20,&uStack_a8,4);
      uStack_a8 = uVar12;
      fn_8245B168(iVar20,&uStack_a8,4);
      fn_8245B168(iVar20,auStack_a4,4);
      iStack_c0 = CONCAT22((short)uVar7,(((unsigned __int64)(iStack_c0) >> 16) & 0xFFFF));
      fn_8245B168(iVar20,&iStack_c0,2);
      param_1 = (unsigned __int64)uStack00000014;
    }
    else {
      iVar21 = *(int *)(param_2 + 0x100);
      iVar22 = *(int *)(iVar21 + 0xb50);
      iVar1 = *(int *)(iVar21 + 0xb54);
      iVar2 = *(int *)(iVar21 + 0xb58);
      iVar3 = *(int *)(iVar21 + 0xb5c);
      iVar4 = *(int *)(iVar21 + 0xb60);
      iVar5 = *(int *)(iVar21 + 0xb64);
      iVar6 = *(int *)(iVar21 + 0xb68);
      iVar21 = *(int *)(iVar21 + 0xb6c);
      fn_8245AF50(iVar20,0x13);
      uVar23 = fn_823AB478(param_2);
      iStack_c0 = CONCAT13(uVar23,(((unsigned __int64)(iStack_c0) >> 8) & 0xFFFFFF));
      fn_8245B168(iVar20,&iStack_c0,1);
      iStack_c0 = iVar3;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar1;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar2;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar22;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar21;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar5;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar6;
      fn_8245B168(iVar20,&iStack_c0,4);
      iStack_c0 = iVar4;
      fn_8245B168(iVar20,&iStack_c0,4);
    }
    iVar22 = fn_8245AFC0(iVar20,0xffffffff824b8538,param_1);
  }
  return iVar22 == 0;
}

