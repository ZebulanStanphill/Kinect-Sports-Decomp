#define true 1
extern int fn_828B6AB8();
extern int fn_828B9180();


unsigned int * fn_828B6E50(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = (int)param_3 - (int)param_2 >> 3;
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                     (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 2;
  fn_828B6AB8(param_2,puVar6,param_3 + -2);
  puVar7 = puVar6;
  if (param_2 < puVar6) {
    while( true ) {
      uVar1 = *puVar7;
      puVar5 = puVar7 + -2;
      dVar9 = (double)fn_828B9180(puVar7[-2]);
      dVar10 = (double)fn_828B9180(uVar1);
      if (dVar10 < dVar9) break;
      uVar1 = *puVar5;
      dVar9 = (double)fn_828B9180(*puVar7);
      dVar10 = (double)fn_828B9180(uVar1);
      if ((dVar10 < dVar9) || (puVar7 = puVar5, puVar5 <= param_2)) break;
    }
  }
  do {
    puVar6 = puVar6 + 2;
    puVar5 = puVar6;
    puVar4 = puVar7;
    if (param_3 <= puVar6) break;
    uVar1 = *puVar7;
    dVar9 = (double)fn_828B9180(*puVar6);
    dVar10 = (double)fn_828B9180(uVar1);
    if (dVar10 < dVar9) break;
    uVar1 = *puVar6;
    dVar9 = (double)fn_828B9180(*puVar7);
    dVar10 = (double)fn_828B9180(uVar1);
  } while (dVar9 <= dVar10);
joined_r0x828b6fa0:
  do {
    if (param_3 <= puVar5) {
joined_r0x828b7044:
      while (puVar3 = puVar4, param_2 < puVar3) {
        uVar1 = *puVar7;
        puVar4 = puVar3 + -2;
        dVar9 = (double)fn_828B9180(puVar3[-2]);
        dVar10 = (double)fn_828B9180(uVar1);
        if (dVar9 <= dVar10) {
          uVar1 = *puVar4;
          dVar9 = (double)fn_828B9180(*puVar7);
          dVar10 = (double)fn_828B9180(uVar1);
          if (dVar10 < dVar9) break;
          puVar8 = puVar7 + -2;
          uVar1 = puVar7[-1];
          puVar7[-1] = puVar3[-1];
          puVar3[-1] = uVar1;
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
          puVar7 = puVar8;
        }
      }
      if (puVar3 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar6;
          return param_1;
        }
        if (puVar6 != puVar5) {
          uVar1 = puVar7[1];
          puVar7[1] = puVar6[1];
          puVar6[1] = uVar1;
          uVar1 = *puVar7;
          *puVar7 = *puVar6;
          *puVar6 = uVar1;
        }
        uVar1 = puVar7[1];
        puVar7[1] = puVar5[1];
        puVar5[1] = uVar1;
        uVar1 = *puVar7;
        *puVar7 = *puVar5;
        *puVar5 = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
        puVar4 = puVar3;
      }
      else {
        puVar4 = puVar3 + -2;
        if (puVar5 == param_3) {
          puVar8 = puVar7 + -2;
          if (puVar4 != puVar8) {
            uVar1 = puVar3[-1];
            puVar3[-1] = puVar7[-1];
            puVar7[-1] = uVar1;
            uVar1 = *puVar4;
            *puVar4 = *puVar8;
            *puVar8 = uVar1;
          }
          puVar3 = puVar6 + -2;
          uVar1 = puVar7[-1];
          puVar7[-1] = puVar6[-1];
          puVar6[-1] = uVar1;
          uVar1 = *puVar8;
          *puVar8 = *puVar3;
          *puVar3 = uVar1;
          puVar6 = puVar3;
          puVar7 = puVar8;
        }
        else {
          uVar1 = puVar5[1];
          puVar5[1] = puVar3[-1];
          puVar3[-1] = uVar1;
          uVar1 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar1;
          puVar5 = puVar5 + 2;
        }
      }
      goto joined_r0x828b6fa0;
    }
    uVar1 = *puVar5;
    dVar9 = (double)fn_828B9180(*puVar7);
    dVar10 = (double)fn_828B9180(uVar1);
    puVar3 = puVar6;
    if (dVar9 <= dVar10) {
      uVar1 = *puVar7;
      dVar9 = (double)fn_828B9180(*puVar5);
      dVar10 = (double)fn_828B9180(uVar1);
      if (dVar10 < dVar9) goto joined_r0x828b7044;
      puVar3 = puVar6 + 2;
      uVar1 = puVar6[1];
      puVar6[1] = puVar5[1];
      puVar5[1] = uVar1;
      uVar1 = *puVar6;
      *puVar6 = *puVar5;
      *puVar5 = uVar1;
    }
    puVar6 = puVar3;
    puVar5 = puVar5 + 2;
  } while( true );
}

