typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_82AA66A8();
extern int fn_82ABDBE8();
extern int fn_82ABDD90();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B479B0();
extern int fn_82B47AA0();
extern int fn_82B48578();
extern int fn_82B48A50();
extern int fn_82B48D98();
extern int fn_82B48F18();
extern int fn_82B48FC0();
extern int fn_82B4BAA8();
extern int fn_82B4CB88();
extern int fn_82B84350();
extern int fn_82B866A0();
extern unsigned int lbl_820145BC;
extern unsigned int lbl_821AAD20;


int fn_82B4EA48(int param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,char param_5,unsigned int param_6
                 ,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  bool bVar2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  char cVar11;
  int iVar10;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned char auStack_70 [112];
  
  if (param_6 != 0) {
    if (param_6 == 1) {
      uVar3 = fn_82B48F18(param_1,param_8);
      uVar4 = fn_82B48FC0(param_1,in_stack_00000054);
      param_8 = fn_82AC9F80(param_1,uVar3,2);
      in_stack_00000054 = fn_82AC9F80(param_1,uVar4,3);
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x400000;
    }
    else if (param_6 < 3) {
      if ((*param_3 & 0xe000000) != 0x8000000) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdd0);
      }
      puVar5 = (unsigned int *)fn_82ACA920(param_1,param_3,param_3[3]);
      *puVar5 = *puVar5 >> 6 & 0x60 | 0x2001c80 | *puVar5 & 0xf3fffc9f;
      uVar3 = fn_82B48A50(param_1,puVar5);
      puVar5 = (unsigned int *)fn_82AD17B0(param_1,uVar3);
      uVar13 = (unsigned int)((param_4 & 7) << 0x19);
      *puVar5 = *puVar5 & 0xf1fff81f | uVar13 | 0x1800;
      puVar6 = (unsigned int *)fn_82ACA920(param_1,param_3,param_3[3]);
      *puVar6 = *puVar6 & 0xf1ffffff | uVar13;
      uVar3 = fn_82B47AA0(param_1,puVar6,puVar5);
      param_3 = (unsigned int *)fn_82AD17B0(param_1,uVar3);
    }
    else {
      if (4 < param_6) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (in_stack_0000005c == (unsigned int *)0x0) {
        in_stack_0000005c = (unsigned int *)fn_82ACA920(param_1,param_3,param_3[3]);
        *in_stack_0000005c =
             *in_stack_0000005c >> 6 & 0x60 | 0x2001c80 | *in_stack_0000005c & 0xf3fffc9f;
      }
      param_7 = fn_82B48D98(param_1,in_stack_0000005c);
    }
  }
  if (param_5 != '\0') {
    puVar5 = (unsigned int *)fn_82ACA920(param_1,param_3,param_3[3]);
    uVar12 = (unsigned __int64)*puVar5;
    *puVar5 = (unsigned int)(((uVar12 & 0x600) >> 7 | (uVar12 & 0x600) >> 9 | (uVar12 & 0x1e0) >> 1) << 5) |
              *puVar5 & 0xf1ffe01f | 0x8000000;
    puVar6 = (unsigned int *)fn_82ACA920(param_1,param_3,param_3[3]);
    uVar12 = (unsigned __int64)*puVar6 & 0xfffffffff1ffffff;
    *puVar6 = (unsigned int)((((uVar12 >> 7 & 0xc | uVar12 >> 9 & 3) << 2 | uVar12 >> 5 & 3) << 4 |
                     uVar12 >> 5 & 0xf) << 3) & 0xffffffe0 | *puVar6 & 0xf1ffe01f | 0x8000000;
    uVar3 = fn_82B48578(param_1,puVar5,puVar6);
    puVar5 = (unsigned int *)fn_82AD17B0(param_1,uVar3);
    *puVar5 = *puVar5 & 0xf1ffe000 | 0x2001cc2;
    uVar4 = fn_82B48A50(param_1,puVar5);
    puVar5 = (unsigned int *)fn_82AD17B0(param_1,uVar3);
    *puVar5 = *puVar5 & 0xf1ffffff | 0x4000000;
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
    *puVar6 = *puVar6 & 0xf1ffe01f | 0x4001c00;
    uVar4 = fn_82B47AA0(param_1,puVar5,puVar6);
    fn_82B866A0((double)lbl_820145BC,(double)lbl_821AAD20,(double)lbl_821AAD20,auStack_70,
                      param_1,1);
    puVar5 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
    *puVar5 = *puVar5 & 0xf1ffffff | 0x4000000;
    puVar6 = (unsigned int *)fn_82B4BAA8(param_1,auStack_70);
    uVar12 = (unsigned __int64)*puVar6 & 0xfffffffff1ffffff;
    uVar1 = uVar12 >> 5;
    *puVar6 = (unsigned int)(((uVar1 & 3) << 2 | uVar1 & 0xf0 | uVar12 >> 5 & 3) << 5) |
              *puVar6 & 0xf1ffe01f | 0x4000000;
    uVar4 = fn_82B479B0(param_1,puVar5,puVar6);
    iVar7 = fn_82B84350(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,3);
    puVar5 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
    *puVar5 = *puVar5 & 0xf1ffe01f | 0x2001ca0;
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
    *puVar6 = *puVar6 & 0xf1ffffff | 0x2000000;
    puVar8 = (unsigned int *)fn_82AD17B0(param_1,uVar3);
    *puVar8 = *puVar8 & 0xf1ffe01f | 0x2001ce0;
    uVar9 = fn_82AD1978(iVar7,puVar5);
    *(unsigned int *)(iVar7 + 0x2c) = uVar9;
    uVar9 = fn_82AD1978(iVar7,puVar6);
    *(unsigned int *)(iVar7 + 0x30) = uVar9;
    uVar9 = fn_82AD1978(iVar7,puVar8);
    *(unsigned int *)(iVar7 + 0x34) = uVar9;
    param_3 = (unsigned int *)fn_82AD17B0(param_1,iVar7);
  }
  *param_3 = (unsigned int)((param_4 & 0xffffffff) << 0x19) & 0xe000000 | *param_3 & 0xf1ffffff;
  puVar5 = (unsigned int *)*param_2;
  if ((puVar5 == (unsigned int *)0x0) || (bVar2 = true, (param_2[1] & 3U) != 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    if ((*(unsigned int *)(((unsigned int)param_2[1] >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 0x70) != 0x30)
    {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar13 = *(unsigned int *)(param_1 + 0x28);
    if ((uVar13 & 8) == 0) goto LAB_82b4f074;
  }
  else {
    uVar13 = param_2[1] & 3;
    if (uVar13 == 3) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (uVar13 != 1) {
      if (uVar13 != 2) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (((*puVar5 & 0x60) != 0) || ((*puVar5 & 0x1f) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      puVar5 = (unsigned int *)puVar5[3];
    }
    if ((puVar5[2] & 0x3f80) == 0x180) {
      puVar6 = (unsigned int *)puVar5[0xb];
      cVar11 = fn_82ABDBE8(puVar6,puVar5[0xc]);
      if ((((cVar11 == '\0') || (uVar13 = *puVar6, (uVar13 & 0xe000000) != 0x2000000)) ||
          ((uVar13 & 0x60) != 0)) || ((uVar13 & 0x17) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdd2);
      }
      puVar5 = (unsigned int *)puVar6[3];
    }
    uVar13 = puVar5[2] >> 7 & 0x7f;
    if (uVar13 == 0x76) goto LAB_82b4f074;
    if ((uVar13 != 0x70) ||
       (iVar7 = fn_82ABDD90(param_1,0x70,0,1),
       (*(unsigned int *)((*(unsigned int *)((int)puVar5 + iVar7 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) +
                 4) & 0x70) != 0x30)) {
      if (uVar13 == 0x7c) {
        uVar13 = puVar5[2];
        iVar7 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
        if ((*(unsigned int *)((*(unsigned int *)((int)puVar5 + iVar7 + -8) & 0x7fff) * 0x28 +
                       *(int *)(param_1 + 0xc) + 4) & 0x70) == 0x30) goto LAB_82b4f074;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdd2);
    }
    uVar13 = *(unsigned int *)(param_1 + 0x28);
  }
  *(unsigned int *)(param_1 + 0x28) = uVar13 | 0x80;
LAB_82b4f074:
  iVar7 = fn_82B4CB88(param_1,param_2,param_3);
  uVar13 = *(unsigned int *)(iVar7 + 8);
  iVar10 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
  puVar5 = (unsigned int *)(iVar10 + iVar7 + -0x18);
  *puVar5 = *puVar5 & 0xffffffe0 | 1;
  if (param_5 == '\0') {
    uVar13 = (unsigned int)((param_4 - 1 & 0xffffffff) << 0xe) & 0xc000 | puVar5[2] & 0xffff3fff;
  }
  else {
    uVar13 = puVar5[2] | 0xc000;
  }
  puVar5[2] = uVar13;
  if (param_6 != 4) {
    puVar5[1] = puVar5[1] | 0x10000000;
  }
  if ((param_7 & 0xffffffff) != 0) {
    uVar3 = fn_82AC9F80(param_1,param_7,1);
    fn_82AD1978(iVar7,uVar3);
    puVar5[1] = puVar5[1] | 0x20000000;
  }
  if ((param_8 & 0xffffffff) != 0) {
    fn_82AD1978(iVar7,param_8);
    fn_82AD1978(iVar7,in_stack_00000054);
    puVar5[2] = puVar5[2] | 1;
  }
  return iVar7;
}

