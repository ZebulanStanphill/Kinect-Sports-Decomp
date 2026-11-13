#define true 1
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern int fn_82CE5410();
extern int fn_82CE7EE0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFBE40();
extern int fn_82D049F0();
extern int fn_82D04AB8();
extern int fn_82D04C78();
extern int fn_82E04DE8();
extern unsigned int lbl_82149C64;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2cc;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2dd;
extern unsigned int uStack_2de;
extern unsigned int uStack_2df;
extern unsigned int uStack_2e0;


unsigned __int64 fn_82E04FA0(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned char *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned char uStack_2e0;
  unsigned char uStack_2df;
  unsigned char uStack_2de;
  unsigned char uStack_2dd;
  unsigned int uStack_2d0;
  unsigned int uStack_2cc;
  unsigned int uStack_2c8;
  struct { unsigned int first; unsigned int second; } stack_pair_2a0;

  unsigned int uStack_298;
  unsigned char auStack_270 [16];
  unsigned char auStack_260 [16];
  unsigned char auStack_250 [592];
  
  iVar10 = 0;
  fn_82CE7EE0(&stack_pair_2a0.first);
  fn_82CE7EE0(&uStack_2d0);
  iVar3 = fn_82CFBE40(param_2);
  uVar9 = 0;
  do {
    if (iVar10 < iVar3) {
      cVar1 = *(char *)(iVar10 + param_2);
      uVar6 = (int)(((__int64)cVar1 & 0xffffffffU) >> 0x1f) -
              (unsigned int)(0x20 < (unsigned __int64)(__int64)cVar1) & 4;
      if (cVar1 == '\"') {
        uVar6 = 1;
      }
      if (cVar1 == '=') {
        uVar6 = 2;
      }
      if (cVar1 == ';') {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 5;
    }
    uVar7 = 6;
    uVar11 = 9;
    puVar8 = (unsigned int *)&lbl_82149C64;
    lVar12 = 8;
    do {
      if ((puVar8[-1] == uVar9) && (*puVar8 == uVar6)) {
        uVar11 = puVar8[1];
        uVar7 = puVar8[2];
      }
      if ((puVar8[3] == uVar9) && (puVar8[4] == uVar6)) {
        uVar11 = puVar8[5];
        uVar7 = puVar8[6];
      }
      if ((puVar8[7] == uVar9) && (puVar8[8] == uVar6)) {
        uVar11 = puVar8[9];
        uVar7 = puVar8[10];
      }
      if ((puVar8[0xb] == uVar9) && (puVar8[0xc] == uVar6)) {
        uVar11 = puVar8[0xd];
        uVar7 = puVar8[0xe];
      }
      puVar8 = puVar8 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (6 < uVar7) {
      fn_82CEE578(auStack_270,auStack_250,0x200);
      uVar2 = fn_82CEDB38(auStack_270,0xffffffff82149bd8);
      uVar2 = fn_82CEDB38(uVar2,param_2);
      fn_82CEDB38(uVar2,0xffffffff820060d0);
      (**(int (***)())(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabba0032,auStack_250,0xffffffff82149c18,0x140);
      puVar4 = auStack_270;
LAB_82e052e8:
                    /* WARNING: Subroutine does not return */
      fn_82CED958(puVar4);
    }
    if (uVar7 == 0) {
LAB_82e05174:
      iVar10 = iVar10 + 1;
    }
    else {
      if (uVar7 == 1) {
        uStack_2de = *(unsigned char *)(iVar10 + param_2);
        uStack_2dd = 0;
        fn_82D04C78(&stack_pair_2a0.first,&uStack_2de);
        goto LAB_82e05174;
      }
      if (uVar7 == 2) {
        uStack_2e0 = *(unsigned char *)(iVar10 + param_2);
        uStack_2df = 0;
        fn_82D04C78(&uStack_2d0,&uStack_2e0);
        goto LAB_82e05174;
      }
      uVar5 = uStack_2d0;
      if (uVar7 == 3) {
LAB_82e05150:
        fn_82E04DE8(param_1,stack_pair_2a0.first,uVar5);
        uVar2 = fn_82D04AB8(&uStack_2d0,0xffffffff82196582);
        fn_82D049F0(&stack_pair_2a0.first,uVar2);
        goto LAB_82e05174;
      }
      if (uVar7 == 4) {
        uVar5 = 0;
        goto LAB_82e05150;
      }
      if (uVar7 != 5) {
        fn_82CEE578(auStack_260,auStack_250,0x200);
        uVar2 = fn_82CEDB38(auStack_260,0xffffffff82149c3c);
        uVar2 = fn_82CEDB38(uVar2,param_2);
        fn_82CEDB38(uVar2,0xffffffff820060d0);
        (**(int (***)())(*lbl_8323B464 + 0xc))
                  (lbl_8323B464,1,0xffffffffabba7881,auStack_250,0xffffffff82149c18,0x134);
        puVar4 = auStack_260;
        goto LAB_82e052e8;
      }
    }
    uVar9 = uVar11;
    if (uVar11 == 8) {
      iVar3 = fn_82CE5410();
      uStack_2cc = 0;
      if ((uStack_2c8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                  (*(int **)(iVar3 + 0xc),uStack_2d0,uStack_2c8 & 0x3fffffff,1);
      }
      uStack_2d0 = 0;
      uStack_2c8 = 0x80000000;
      iVar3 = fn_82CE5410();
      stack_pair_2a0.second = 0;
      if ((uStack_298 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                  (*(int **)(iVar3 + 0xc),stack_pair_2a0.first,uStack_298 & 0x3fffffff,1);
      }
      return 0;
    }
  } while( true );
}

