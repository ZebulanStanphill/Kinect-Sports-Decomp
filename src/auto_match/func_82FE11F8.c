extern int fn_82A1DDC0();
extern int fn_82A1EFC0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82FE09B8();
extern int fn_82FE0A58();
extern int fn_82FE3FB8();
extern int fn_82FE4280();
extern int fn_82FE4340();
extern int fn_82FE4728();
extern int fn_82FE5618();


void fn_82FE11F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  iVar2 = fn_82F6A538();
  uVar1 = (**(int (***)())(**(int **)(iVar2 + 0x1a0) + 4))
                    (*(int **)(iVar2 + 0x1a0),((unsigned __int64)*(unsigned char *)(iVar2 + 0xd0) + 4) * 0x400);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82F6A584(0x34);
  }
  else {
    lVar9 = uVar1 + 0x400;
    lVar8 = 0;
    lVar7 = 0;
    if (*(char *)(iVar2 + 0xd0) != '\0') {
      lVar8 = uVar1 + 0x1000;
      lVar7 = uVar1 + 0x1400;
    }
    uVar6 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe);
    if (uVar6 != 0) {
      iVar5 = iVar2 + 4;
      if (0xff < uVar6) {
        uVar6 = 0x100;
      }
      fn_82FE09B8(iVar2,param_2,uVar1,uVar6,0);
      if (*(int *)(iVar2 + 0x98) == 0) {
        fn_82A1DDC0(lVar9,uVar1,uVar6 << 2);
      }
      else {
        fn_82FE4340((int *)(iVar2 + 0x98),uVar1,lVar9,uVar6);
      }
      if (*(int *)(iVar2 + 0x8c) != 0) {
        fn_82FE4280((int *)(iVar2 + 0x8c),uVar1,uVar6);
      }
      if (((*(char *)(iVar2 + 0xd0) != '\0') &&
          (fn_82FE4728(*(unsigned int *)(iVar2 + 0xdc),uVar1,lVar8,lVar7,uVar6),
          *(char *)(iVar2 + 0x170) != '\0')) && (uVar4 = 0, *(char *)(iVar2 + 0xcc) != '\0')) {
        do {
          iVar3 = uVar4 * 0x28 + *(int *)(iVar2 + 0xd8);
          if (*(int *)(iVar3 + 0x24) == 1) {
            fn_82FE3FB8(iVar3,lVar8,uVar6);
            fn_82FE3FB8(uVar4 * 0x28 + *(int *)(iVar2 + 0xd8) + 0x28,lVar7,uVar6);
            uVar4 = uVar4 + 1 & 0xff;
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < *(unsigned char *)(iVar2 + 0xcc));
      }
      lVar7 = 4;
      do {
        fn_82FE5618(iVar5,lVar9,uVar6);
        lVar7 = lVar7 + -1;
        iVar5 = iVar5 + 0x10;
      } while (lVar7 != 0);
      fn_82FE0A58(iVar2,lVar9,uVar6);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(uVar1 + 0x800,0,0x800);
    }
    (**(int (***)())(**(int **)(iVar2 + 0x1a0) + 8))(*(int **)(iVar2 + 0x1a0),uVar1);
    fn_82F6A584(1);
  }
  return;
}

