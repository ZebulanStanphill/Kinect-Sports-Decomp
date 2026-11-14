extern int fn_82A1DDC0();
extern int XMemSet();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82FE09B8();
extern int fn_82FE0A58();
extern int fn_82FE3FB8();
extern int fn_82FE4280();
extern int fn_82FE4340();
extern int fn_82FE4728();
extern int fn_82FE5618();
extern unsigned int lbl_82002AE0;


void fn_82FE17C0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  
  iVar4 = fn_82F6A538();
  uVar7 = *(unsigned int *)((int)param_2 + 4);
  uVar13 = -(unsigned __int64)((unsigned __int64)*(unsigned char *)(iVar4 + 0x171) != 0) &
           -(unsigned __int64)((uVar7 & 0x30) != 0) & 2;
  uVar3 = (**(int (***)())(**(int **)(iVar4 + 0x1a0) + 4))
                    (*(int **)(iVar4 + 0x1a0),(*(unsigned char *)(iVar4 + 0xd0) + uVar13 + 6) * 0x400,
                     -(unsigned __int64)*(unsigned char *)(iVar4 + 0x171));
  uVar2 = lbl_82002AE0;
  if ((uVar3 & 0xffffffff) == 0) {
    fn_82F6A584(0x34);
  }
  else {
    lVar10 = uVar3 + 0x400;
    lVar12 = 0;
    lVar11 = 0;
    lVar9 = 0;
    lVar8 = 0;
    if (*(char *)(iVar4 + 0xd0) != '\0') {
      lVar12 = uVar3 + 0x1800;
      lVar11 = uVar3 + 0x1c00;
      if (uVar13 == 2) {
        lVar9 = uVar3 + 0x2000;
        lVar8 = uVar3 + 0x2400;
      }
    }
    if ((uVar7 & 0x30) == 0) {
      *(unsigned int *)(iVar4 + 0x118) = lbl_82002AE0;
      *(unsigned int *)(iVar4 + 0x11c) = uVar2;
    }
    uVar1 = *(unsigned short *)((int)param_2 + 0xe);
    uVar6 = (unsigned __int64)uVar1;
    if (uVar6 != 0) {
      if (0xff < uVar1) {
        uVar6 = 0x100;
      }
      fn_82FE09B8(iVar4,param_2,uVar3,uVar6,0);
      if (*(int *)(iVar4 + 0x98) == 0) {
        fn_82A1DDC0(lVar10,uVar3,uVar6 << 2);
      }
      else {
        fn_82FE4340((int *)(iVar4 + 0x98),uVar3,lVar10,uVar6);
      }
      if (*(int *)(iVar4 + 0x8c) != 0) {
        fn_82FE4280(iVar4 + 0x8c,uVar3,uVar6);
      }
      if (*(char *)(iVar4 + 0xd0) != '\0') {
        fn_82FE4728(*(unsigned int *)(iVar4 + 0xdc),uVar3,lVar12,lVar11,uVar6);
        if ((*(char *)(iVar4 + 0x170) != '\0') && (uVar7 = 0, *(char *)(iVar4 + 0xcc) != '\0')) {
          do {
            iVar5 = *(int *)(iVar4 + 0xd8) + uVar7 * 0x28;
            if (*(int *)(iVar5 + 0x24) == 1) {
              fn_82FE3FB8(iVar5,lVar12,uVar6);
              fn_82FE3FB8(*(int *)(iVar4 + 0xd8) + uVar7 * 0x28 + 0x28,lVar11,uVar6);
              uVar7 = uVar7 + 1 & 0xff;
            }
            uVar7 = uVar7 + 1 & 0xff;
          } while (uVar7 < *(unsigned char *)(iVar4 + 0xcc));
        }
        if ((uVar13 == 2) && (*(int *)(iVar4 + 0xa4) != 0)) {
          fn_82FE4340(iVar4 + 0xa4,lVar12,lVar9,uVar6);
          fn_82FE4340(iVar4 + 0xb0,lVar11,lVar8,uVar6);
        }
      }
      iVar5 = iVar4 + 4;
      lVar8 = 4;
      do {
        fn_82FE5618(iVar5,lVar10,uVar6);
        lVar8 = lVar8 + -1;
        iVar5 = iVar5 + 0x10;
      } while (lVar8 != 0);
      fn_82FE0A58(iVar4,lVar10,uVar6);
                    /* WARNING: Subroutine does not return */
      XMemSet(uVar3 + 0x800,0,0x1000);
    }
    (**(int (***)())(**(int **)(iVar4 + 0x1a0) + 8))(*(int **)(iVar4 + 0x1a0),uVar3);
    fn_82F6A584(1);
  }
  return;
}

