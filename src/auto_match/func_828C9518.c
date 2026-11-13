#define true 1
extern int fn_828C9378();


unsigned int * fn_828C9518(unsigned int *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 *puVar8;
  
  uVar1 = (int)param_3 - (int)param_2 >> 3;
  puVar8 = param_2 + ((int)param_3 - (int)param_2 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)
  ;
  fn_828C9378(param_2,puVar8,param_3 + -1);
  puVar2 = puVar8 + 1;
  while (puVar6 = puVar8, param_2 < puVar6) {
    if ((puVar6[-1] < *puVar6) || (puVar8 = puVar6 + -1, *puVar6 < puVar6[-1])) break;
  }
  puVar8 = puVar2;
  puVar4 = puVar6;
  if (puVar2 < param_3) {
    do {
      puVar8 = puVar2;
      if ((*puVar2 < *puVar6) || (*puVar6 < *puVar2)) break;
      puVar2 = puVar2 + 1;
      puVar8 = puVar2;
    } while (puVar2 < param_3);
  }
joined_r0x828c95c0:
  do {
    if (param_3 <= puVar8) {
joined_r0x828c95fc:
      while (puVar3 = puVar4, param_2 < puVar3) {
        puVar4 = puVar3 + -1;
        if (*puVar6 <= puVar3[-1]) {
          if (*puVar6 < puVar3[-1]) break;
          puVar6 = puVar6 + -1;
          uVar7 = *puVar6;
          *puVar6 = *puVar4;
          *puVar4 = uVar7;
        }
      }
      if (puVar3 == param_2) {
        if (puVar8 == param_3) {
          *param_1 = (unsigned int)puVar6;
          param_1[1] = (unsigned int)puVar2;
          return param_1;
        }
        if (puVar2 != puVar8) {
          uVar7 = *puVar6;
          *puVar6 = *puVar2;
          *puVar2 = uVar7;
        }
        puVar2 = puVar2 + 1;
        uVar7 = *puVar6;
        *puVar6 = *puVar8;
        *puVar8 = uVar7;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
        puVar4 = puVar3;
      }
      else {
        puVar4 = puVar3 + -1;
        if (puVar8 == param_3) {
          puVar6 = puVar6 + -1;
          if (puVar4 != puVar6) {
            uVar7 = *puVar4;
            *puVar4 = *puVar6;
            *puVar6 = uVar7;
          }
          puVar2 = puVar2 + -1;
          uVar7 = *puVar6;
          *puVar6 = *puVar2;
          *puVar2 = uVar7;
        }
        else {
          uVar7 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar7;
          puVar8 = puVar8 + 1;
        }
      }
      goto joined_r0x828c95c0;
    }
    uVar7 = *puVar8;
    puVar3 = puVar2;
    if (uVar7 <= *puVar6) {
      if (uVar7 < *puVar6) goto joined_r0x828c95fc;
      puVar3 = puVar2 + 1;
      uVar5 = *puVar2;
      *puVar2 = uVar7;
      *puVar8 = uVar5;
    }
    puVar2 = puVar3;
    puVar8 = puVar8 + 1;
  } while( true );
}

