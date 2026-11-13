#define true 1
extern int fn_827F1B20();
extern int fn_827F1B90();
extern int fn_827F1DB0();
extern int fn_827F2A90();
extern int fn_827F2D60();
extern int fn_827F2E40();
extern int fn_827F3980();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F3C58();
extern int fn_827F4010();
extern int fn_827F4068();
extern int fn_827F5708();
extern int fn_827F5730();
extern int fn_827F58E8();
extern int fn_827FA468();
extern int fn_827FA5E8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_827F3148(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned int ***pppuVar2;
  char cVar8;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int ***pppuVar6;
  unsigned int uVar7;
  unsigned __int64 uVar4;
  unsigned int uVar9;
  unsigned int ****ppppuVar10;
  unsigned int uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  unsigned int **appuStack_80 [4];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int ***pppuStack_68;
  unsigned int ***pppuStack_64;
  unsigned int ***pppuStack_60;
  unsigned int ***pppuStack_5c;
  unsigned int uStack_54;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0xf4));
  dVar12 = (double)fVar1;
  *(float *)(param_2 + 0xf4) = fVar1;
  dVar14 = (double)lbl_821AAD20;
  if ((dVar14 < (double)*(float *)(param_2 + 0xf8)) &&
     ((double)*(float *)(param_2 + 0xf8) <= dVar12)) {
    dVar13 = (double)*(float *)(param_2 + 0xfc);
    if (dVar12 < dVar13) {
      dVar13 = dVar12;
    }
    if (*(int *)(param_2 + 0x104) == 0) {
      uVar3 = fn_827FA468(0xb4);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_827FA5E8(uVar3,param_2,*(unsigned int *)(param_2 + 4));
      }
      fn_827F2D60((double)*(float *)(param_2 + 0xfc),param_2,uVar4);
      *(int *)(param_2 + 0x108) = (int)uVar4;
    }
    else {
      fn_827F2E40(param_2,*(int *)(param_2 + 0x104),param_4,*(unsigned int *)(param_2 + 0x100),0);
    }
    if (dVar14 < (double)*(float *)(param_2 + 0xfc)) {
      iVar5 = ((*(unsigned char *)(param_2 + 0x53) - 1 & 3) + 0xc) * 4;
      fn_827F5708((double)(float)(dVar13 / (double)*(float *)(param_2 + 0xfc)),
                   *(unsigned int *)(iVar5 + param_2));
      fn_827F5730((double)lbl_82002AE0,
                        (double)(float)((double)*(float *)(param_2 + 0xfc) - dVar13),
                        *(unsigned int *)(iVar5 + param_2));
    }
  }
  uVar11 = (unsigned int)*(unsigned char *)(param_2 + 0x54);
  while( true ) {
    if ((*(unsigned char *)((uVar11 >> 3) + param_2 + 0x52) >> (uVar11 & 7) & 1) == 0) {
      (**(int (***)())(**(int **)((uVar11 + 8) * 4 + param_2) + 4))(param_1);
    }
    if (uVar11 == *(unsigned char *)(param_2 + 0x53)) break;
    uVar11 = uVar11 + 1 & 3;
  }
  uVar11 = (unsigned int)*(unsigned char *)(param_2 + 0x54);
  if ((unsigned int)*(unsigned char *)(param_2 + 0x54) != (unsigned int)*(unsigned char *)(param_2 + 0x53)) {
    do {
      iVar5 = (uVar11 + 0xc) * 4;
      (**(int (***)())(**(int **)(iVar5 + param_2) + 4))(param_1);
      cVar8 = fn_827F58E8(*(unsigned int *)(iVar5 + param_2));
      if (cVar8 != '\0') {
        uVar9 = (unsigned int)*(unsigned char *)(param_2 + 0x54);
        while (uVar9 != (uVar11 + 1 & 3)) {
          fn_827F2A90(param_2);
          uVar9 = *(unsigned char *)(param_2 + 0x54) + 1 & 3;
          *(char *)(param_2 + 0x54) = (char)uVar9;
        }
      }
      uVar11 = uVar11 + 1 & 3;
    } while (uVar11 != *(unsigned char *)(param_2 + 0x53));
  }
  if (*(char *)(param_2 + 0x50) == '\0') {
    uVar11 = (unsigned int)*(unsigned char *)(param_2 + 0x54);
    while (iVar5 = fn_827F4010(*(unsigned int *)((uVar11 + 8) * 4 + param_2)),
          iVar5 == *(int *)((uVar11 + 0x10) * 4 + param_2)) {
      if (uVar11 == *(unsigned char *)(param_2 + 0x53)) goto LAB_827f3388;
      uVar11 = uVar11 + 1 & 3;
    }
    *(unsigned char *)(param_2 + 0x50) = 1;
  }
LAB_827f3388:
  if (*(char *)(param_2 + 0x50) != '\0') {
    pppuStack_68 = &pppuStack_68;
    uVar11 = (unsigned int)*(unsigned char *)(param_2 + 0x54);
    pppuStack_64 = &pppuStack_68;
    uStack_70 = 0;
    pppuStack_60 = &pppuStack_68;
    uStack_6c = 0;
    pppuStack_5c = &pppuStack_68;
    uStack_54 = 0;
    do {
      pppuVar2 = *(unsigned int ****)((uVar11 + 8) * 4 + param_2);
      appuStack_80[0] = pppuVar2;
      if ((*(unsigned char *)((uVar11 >> 3) + param_2 + 0x52) >> (uVar11 & 7) & 1) == 0) {
        uVar3 = fn_827F3C30(pppuVar2);
        uVar3 = uVar3 & 0xffff;
joined_r0x827f3444:
        uVar3 = uVar3 - 1;
        if (-1 < (__int64)uVar3) {
          pppuVar6 = (unsigned int ***)fn_827F3C48(pppuVar2,uVar3 & 0xffff);
          ppppuVar10 = (unsigned int ****)pppuStack_60;
          if (pppuStack_60 != pppuStack_5c) goto LAB_827f3468;
          goto LAB_827f3488;
        }
        goto LAB_827f34bc;
      }
      ppppuVar10 = (unsigned int ****)pppuStack_60;
      if (pppuStack_60 == pppuStack_5c) {
LAB_827f3418:
        uStack_54 = uStack_54 + 1;
        fn_827F1DB0(&uStack_70,pppuStack_5c,appuStack_80);
      }
      else {
        do {
          if (*ppppuVar10 == pppuVar2) break;
          ppppuVar10 = (unsigned int ****)ppppuVar10[2];
        } while (ppppuVar10 != (unsigned int ****)pppuStack_5c);
        if (ppppuVar10 == (unsigned int ****)pppuStack_5c) goto LAB_827f3418;
      }
LAB_827f34bc:
      uVar7 = fn_827F4010(pppuVar2);
      uVar9 = uStack_54;
      *(unsigned int *)((uVar11 + 0x10) * 4 + param_2) = uVar7;
      if (uVar11 == *(unsigned char *)(param_2 + 0x53)) goto LAB_827f34f0;
      uVar11 = uVar11 + 1 & 3;
    } while( true );
  }
LAB_827f3564:
  fn_827F4068(param_2);
  return;
LAB_827f3468:
  do {
    if (*ppppuVar10 == pppuVar6) break;
    ppppuVar10 = (unsigned int ****)ppppuVar10[2];
  } while (ppppuVar10 != (unsigned int ****)pppuStack_5c);
  if (ppppuVar10 == (unsigned int ****)pppuStack_5c) {
LAB_827f3488:
    appuStack_80[0] = (unsigned int **)fn_827F3C48(pppuVar2,uVar3 & 0xffff);
    uStack_54 = uStack_54 + 1;
    fn_827F1DB0(&uStack_70,pppuStack_5c,appuStack_80);
  }
  goto joined_r0x827f3444;
LAB_827f34f0:
  uVar11 = fn_827F3C30(param_2);
  if (uVar9 != (uVar11 & 0xffff)) {
    fn_827F3980(param_2,uStack_54 & 0xffff,0);
  }
  while (pppuStack_60 != pppuStack_5c) {
    uStack_54 = uStack_54 - 1;
    uVar4 = fn_827F1B90(&uStack_70,pppuStack_5c[1]);
    fn_827F3C58(param_2,uStack_54 & 0xffff,uVar4);
  }
  *(unsigned char *)(param_2 + 0x50) = 0;
  fn_827F1B20();
  goto LAB_827f3564;
}

