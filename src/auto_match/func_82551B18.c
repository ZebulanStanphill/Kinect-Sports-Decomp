#define true 1
extern int fn_82552038();


unsigned int * fn_82551B18(unsigned int *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 *puVar7;
  unsigned int uVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  
  puVar5 = param_3 + -1;
  uVar8 = (int)param_3 - (int)param_2 >> 3;
  iVar2 = (int)puVar5 - (int)param_2 >> 3;
  puVar9 = param_2 + ((int)param_3 - (int)param_2 >> 4) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 1) != 0)
  ;
  puVar3 = param_2;
  if (0x28 < iVar2) {
    uVar8 = iVar2 + 1;
    uVar8 = ((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0);
    fn_82552038(param_2,param_2 + uVar8,param_2 + uVar8 * 2);
    fn_82552038(puVar9 + -(uVar8 & 0x1fffffff),puVar9,puVar9 + uVar8);
    fn_82552038(puVar5 + (uVar8 & 0xfffffff) * -2,puVar5 + -(uVar8 & 0x1fffffff),puVar5);
    puVar3 = param_2 + uVar8;
    puVar5 = puVar5 + -(uVar8 & 0x1fffffff);
  }
  fn_82552038(puVar3,puVar9,puVar5);
  puVar3 = puVar9 + 1;
  for (; ((param_2 < puVar9 && (*(int *)((int)puVar9 + 4) <= *(int *)((int)puVar9 + -4))) &&
         (*(int *)((int)puVar9 + -4) <= *(int *)((int)puVar9 + 4))); puVar9 = puVar9 + -1) {
  }
  puVar5 = puVar9;
  puVar4 = puVar3;
  if (puVar3 < param_3) {
    do {
      puVar4 = puVar3;
      if ((*(int *)((int)puVar3 + 4) < *(int *)((int)puVar9 + 4)) ||
         (*(int *)((int)puVar9 + 4) < *(int *)((int)puVar3 + 4))) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
    } while (puVar3 < param_3);
  }
LAB_82551c5c:
  do {
    puVar10 = puVar9;
    puVar7 = puVar5;
    if (puVar3 < param_3) {
      if (*(int *)((int)puVar3 + 4) <= *(int *)((int)puVar9 + 4)) {
        if (*(int *)((int)puVar3 + 4) < *(int *)((int)puVar9 + 4)) goto joined_r0x82551c68;
        uVar6 = *puVar4;
        *(unsigned int *)puVar4 = *(unsigned int *)puVar3;
        *(unsigned int *)((int)puVar4 + 4) = *(unsigned int *)((int)puVar3 + 4);
        *puVar3 = uVar6;
        goto LAB_82551c54;
      }
    }
    else {
joined_r0x82551c68:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar9 = puVar7 + -1;
        if (*(int *)((int)puVar10 + 4) <= *(int *)((int)puVar7 + -4)) {
          if (*(int *)((int)puVar10 + 4) < *(int *)((int)puVar7 + -4)) break;
          puVar10 = puVar10 + -1;
          uVar6 = *puVar10;
          *puVar10 = *puVar9;
          *puVar9 = uVar6;
        }
        puVar7 = puVar9;
      }
      if (puVar5 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar10;
          param_1[1] = puVar4;
          return param_1;
        }
        if (puVar4 != puVar3) {
          uVar6 = *puVar10;
          *(unsigned int *)puVar10 = *(unsigned int *)puVar4;
          *(unsigned int *)((int)puVar10 + 4) = *(unsigned int *)((int)puVar4 + 4);
          *puVar4 = uVar6;
        }
        puVar9 = puVar10 + 1;
        uVar6 = *puVar10;
        *(unsigned int *)puVar10 = *(unsigned int *)puVar3;
        *(unsigned int *)((int)puVar10 + 4) = *(unsigned int *)((int)puVar3 + 4);
        *puVar3 = uVar6;
LAB_82551c54:
        puVar4 = puVar4 + 1;
      }
      else {
        puVar7 = puVar5 + -1;
        if (puVar3 == param_3) {
          puVar9 = puVar10 + -1;
          if (puVar7 != puVar9) {
            uVar6 = *puVar7;
            *(unsigned int *)puVar7 = *(unsigned int *)puVar9;
            *(unsigned int *)((int)puVar5 + -4) = *(unsigned int *)((int)puVar10 + -4);
            *puVar9 = uVar6;
          }
          puVar1 = puVar4 + -1;
          uVar6 = *puVar9;
          *(unsigned int *)puVar9 = *(unsigned int *)puVar1;
          *(unsigned int *)((int)puVar10 + -4) = *(unsigned int *)((int)puVar4 + -4);
          *puVar1 = uVar6;
          puVar5 = puVar7;
          puVar4 = puVar1;
          goto LAB_82551c5c;
        }
        uVar6 = *puVar3;
        *(unsigned int *)puVar3 = *(unsigned int *)puVar7;
        *(unsigned int *)((int)puVar3 + 4) = *(unsigned int *)((int)puVar5 + -4);
        *puVar7 = uVar6;
        puVar9 = puVar10;
        puVar5 = puVar7;
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

