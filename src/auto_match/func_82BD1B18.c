extern int fn_82BD1AA8();


unsigned char fn_82BD1B18(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar6 = (unsigned __int64)(unsigned int)param_1[1];
    uVar1 = param_1[2];
    uVar2 = uVar6;
    if ((int)uVar1 < param_1[1]) {
      uVar2 = param_2;
    }
    puVar4 = (unsigned int *)fn_82BD1AA8(*param_1,uVar2 * 0xc + param_3);
    uVar5 = 0;
    if (puVar4 != (unsigned int *)0x0) {
      iVar7 = 0;
      lVar8 = ((*puVar4 - uVar6) + (unsigned __int64)uVar1 + 1) * 0xc + param_3;
      iVar3 = (int)lVar8;
      do {
        if (*(char *)lVar8 != ((char *)lVar8)[((int)param_2 * 0xc + (int)param_3) - iVar3]) {
          return 0;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (iVar7 < 0xc);
      uVar5 = 1;
    }
  }
  return uVar5;
}

