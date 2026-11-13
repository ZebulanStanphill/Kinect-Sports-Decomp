#define true 1
extern int fn_822DD818();
extern int fn_8260D428();
extern int fn_8286B568();


unsigned int * fn_8286B7E0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  uVar1 = ((int)param_3 - (int)param_2) / 0x1c;
  puVar9 = param_2 + (((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 7;
  fn_8286B568(param_2,puVar9,param_3 + -7);
  puVar7 = puVar9 + 7;
  if (param_2 < puVar9) {
    puVar8 = puVar9 + -3;
    do {
      puVar4 = puVar9;
      if (0xf < (unsigned int)puVar8[8]) {
        puVar4 = (unsigned int *)*puVar9;
      }
      puVar5 = puVar8 + -4;
      iVar2 = fn_8260D428(puVar5,0,*puVar8,puVar4,puVar8[7]);
      if (iVar2 < 0) break;
      if (0xf < (unsigned int)puVar8[1]) {
        puVar5 = (unsigned int *)*puVar5;
      }
      iVar2 = fn_8260D428(puVar9,0,puVar8[7],puVar5,*puVar8);
      if (iVar2 < 0) break;
      puVar9 = puVar9 + -7;
      puVar8 = puVar8 + -7;
    } while (param_2 < puVar9);
  }
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    if (param_3 <= puVar7) break;
    puVar5 = puVar9;
    if (0xf < (unsigned int)puVar9[5]) {
      puVar5 = (unsigned int *)*puVar9;
    }
    iVar2 = fn_8260D428(puVar7,0,puVar7[4],puVar5,puVar9[4]);
    if (iVar2 < 0) break;
    puVar5 = puVar7;
    if (0xf < (unsigned int)puVar7[5]) {
      puVar5 = (unsigned int *)*puVar7;
    }
    iVar2 = fn_8260D428(puVar9,0,puVar9[4],puVar5,puVar7[4]);
    if (iVar2 < 0) break;
    puVar7 = puVar7 + 7;
  } while( true );
LAB_8286b9b0:
  puVar5 = puVar9;
  puVar3 = puVar8;
  if (param_3 <= puVar7) {
joined_r0x8286b9bc:
    for (; param_2 < puVar3; puVar3 = puVar3 + -7) {
      puVar6 = puVar8 + -7;
      puVar9 = puVar5;
      if (0xf < (unsigned int)puVar5[5]) {
        puVar9 = (unsigned int *)*puVar5;
      }
      iVar2 = fn_8260D428(puVar6,0,puVar8[-3],puVar9,puVar5[4]);
      if (-1 < iVar2) {
        puVar9 = puVar6;
        if (0xf < (unsigned int)puVar8[-2]) {
          puVar9 = (unsigned int *)*puVar6;
        }
        iVar2 = fn_8260D428(puVar5,0,puVar5[4],puVar9,puVar8[-3]);
        if (iVar2 < 0) break;
        puVar5 = puVar5 + -7;
        fn_822DD818(puVar5,puVar6);
      }
      puVar8 = puVar6;
    }
    if (puVar3 == param_2) {
      if (puVar7 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar4;
        return param_1;
      }
      if (puVar4 != puVar7) {
        fn_822DD818(puVar5,puVar4);
      }
      puVar9 = puVar5 + 7;
      puVar8 = puVar7;
      puVar4 = puVar4 + 7;
      puVar7 = puVar7 + 7;
    }
    else {
      if (puVar7 != param_3) {
        puVar8 = puVar3 + -7;
        puVar9 = puVar5;
        puVar5 = puVar8;
        puVar3 = puVar7;
        puVar6 = puVar4;
        goto LAB_8286b9a8;
      }
      puVar3 = puVar3 + -7;
      puVar9 = puVar5 + -7;
      if (puVar3 != puVar9) {
        fn_822DD818(puVar3,puVar9);
      }
      puVar8 = puVar4 + -7;
      puVar5 = puVar9;
      puVar4 = puVar8;
    }
    fn_822DD818(puVar5,puVar8);
    puVar8 = puVar3;
    goto LAB_8286b9b0;
  }
  puVar6 = puVar7;
  if (0xf < (unsigned int)puVar7[5]) {
    puVar6 = (unsigned int *)*puVar7;
  }
  iVar2 = fn_8260D428(puVar9,0,puVar9[4],puVar6,puVar7[4]);
  if (-1 < iVar2) {
    puVar6 = puVar9;
    if (0xf < (unsigned int)puVar9[5]) {
      puVar6 = (unsigned int *)*puVar9;
    }
    iVar2 = fn_8260D428(puVar7,0,puVar7[4],puVar6,puVar9[4]);
    if (iVar2 < 0) goto joined_r0x8286b9bc;
    puVar6 = puVar4 + 7;
    puVar5 = puVar7;
    puVar3 = puVar4;
LAB_8286b9a8:
    fn_822DD818(puVar3,puVar5);
    puVar4 = puVar6;
  }
  puVar7 = puVar7 + 7;
  goto LAB_8286b9b0;
}

