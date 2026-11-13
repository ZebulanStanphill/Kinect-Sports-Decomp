extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8225C590();
extern int fn_8225DA70();
extern int fn_825010E8();
extern int fn_82501190();
extern int fn_825012C0();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_82592430();
extern int fn_827EF8F8();
extern int fn_827EFC90();
extern int fn_827F2D60();
extern int fn_828EB518();
extern int fn_82F51AC0();
extern int fn_82F520B0();
extern int fn_82F52188();
extern int fn_82F525F0();
extern int fn_82F63EC8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821C223C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297B04;
extern unsigned int lbl_8329E624;


void fn_82500CA0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar5;
  char cVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned char auStack_60 [4];
  unsigned int auStack_5c [3];
  unsigned char auStack_50 [80];
  
  iVar7 = (int)in_r0;
  *(unsigned int *)(param_1 + 0x2b0) = lbl_821922D0;
  if (*(char *)(param_1 + 0xb69) == '\0') {
    if ((*(char *)(param_1 + 0xb68) == '\0') &&
       (piVar1 = *(int **)(param_1 + 0x8c0), piVar1 != (int *)0x0)) {
      iVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
      if (iVar7 == 0) {
        (**(int (***)())(*piVar1 + 0xc))(piVar1);
      }
      iVar6 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
      iVar7 = (int)in_r0;
      if (iVar6 != 0) {
        if (*(int *)(param_1 + 0x18c) == 0) {
          uVar8 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x4c))();
          *(unsigned int *)(param_1 + 0x18c) = uVar8;
        }
        uVar11 = lbl_8329E624;
        *(unsigned int *)(param_1 + 0xb64) = *(unsigned int *)(param_1 + 0x18c);
        if ((uVar11 & 1) == 0) {
          lbl_8329E624 = uVar11 | 1;
          lbl_83297B04 = &lbl_821C223C;
          fn_82F63EC8(0xffffffff8313efb0);
        }
        fn_827EF8F8(*(unsigned int *)(param_1 + 0xb64));
        iVar6 = (**(int (***)())(*piVar1 + 0x6c))(piVar1,auStack_5c,auStack_60);
        iVar7 = (int)in_r0;
        if (iVar6 != 0) {
          fn_82F520B0(*(unsigned int *)(param_1 + 0xb60),auStack_5c[0],auStack_60[0]);
          uVar11 = 0;
          do {
            fn_827EFC90(*(unsigned int *)(param_1 + 0xb64),uVar11 & 0xffff,0xffffffff83297b04,
                              *(unsigned int *)(param_1 + 0xb60));
            iVar7 = (int)in_r0;
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 0x47);
        }
        *(unsigned char *)(param_1 + 0xb68) = 1;
        if (*(int *)(param_1 + 0xfec) != 0) {
          fn_8255F880(auStack_50,param_1 + 0xfec);
          dVar12 = (double)ltcg_pool_0_0f;
          lVar5 = fn_8255F8D0(dVar12,(double)lbl_821CA460,auStack_50);
          *(int *)(param_1 + 0xff0) = (int)lVar5;
          if (lVar5 != 0) {
            fn_827F2D60((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xb64));
          }
          fn_825012C0(dVar12,param_1);
        }
      }
    }
    goto LAB_82500ef8;
  }
  if ((*(int *)(param_1 + 0xff4) == 3) && (-1 < *(int *)(param_1 + 0xb6c))) {
    if (*(int *)(param_1 + 0xb6c) == 0xff) {
      uVar10 = (unsigned __int64)lbl_83265988;
    }
    else {
      uVar10 = fn_828EB518();
    }
    if ((uVar10 & 0xffffffff) != 0) {
      uVar4 = fn_8225C590();
      iVar6 = fn_8225DA70(uVar4,param_1 + 0xb70,uVar10,0);
      if (iVar6 == 0) goto LAB_82500ef8;
      goto LAB_82500d48;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf58) == 0x3e5) goto LAB_82500ef8;
LAB_82500d48:
    fn_825010E8(param_1,param_1 + 0xb70);
  }
  *(unsigned char *)(param_1 + 0xb69) = 0;
LAB_82500ef8:
  if (*(char *)(param_1 + 0xb68) != '\0') {
    dVar12 = (double)*(float *)(param_1 + 0xb3c);
    cVar9 = fn_82F525F0(*(unsigned int *)(param_1 + 0xb60));
    if (cVar9 != '\0') {
      iVar6 = fn_82F52188(auStack_50,*(unsigned int *)(param_1 + 0xb60),2);
      uVar8 = *(unsigned int *)(param_1 + 0xb60);
      puVar2 = (unsigned int *)(iVar7 + iVar6 & 0xfffffff0);
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar3 = (unsigned int *)(param_1 + 0xf80U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      fn_82F51AC0(dVar12,uVar8);
      if (*(char *)(param_1 + 0x1000) != '\0') {
        fn_82501190(param_1);
      }
    }
    fn_825012C0(dVar12,param_1);
  }
  fn_82592430(param_1,param_2);
  return;
}

