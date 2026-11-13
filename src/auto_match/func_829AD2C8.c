extern int fn_829ACEA8();
extern int fn_829AD1B8();


unsigned __int64 fn_829AD2C8(int *param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned char *pbVar12;
  unsigned char abStack_50 [80];
  
  puVar2 = (unsigned int *)param_1[6];
  uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
  pbVar6 = (unsigned char *)*puVar2;
  if (uVar5 == 0) {
    iVar4 = (*(int (**)())puVar2[3])();
    if (iVar4 != 0) {
      pbVar6 = (unsigned char *)*puVar2;
      uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
      goto LAB_829ad314;
    }
LAB_829ad300:
    uVar3 = 0;
  }
  else {
LAB_829ad314:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      iVar4 = (*(int (**)())puVar2[3])(param_1);
      if (iVar4 == 0) goto LAB_829ad300;
      pbVar6 = (unsigned char *)*puVar2;
      uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
    }
    pbVar12 = pbVar6 + 1;
    uVar5 = uVar5 - 1;
    uVar9 = (unsigned int)uVar5;
    uVar7 = ((unsigned __int64)*pbVar6 + (unsigned __int64)bVar1 * 0x100) - 2;
    if ((int)uVar7 < 0xe) {
      uVar8 = (((uVar7 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar7 == 0) & uVar7;
    }
    else {
      uVar8 = 0xe;
    }
    uVar10 = 0;
    if ((uVar8 & 0xffffffff) != 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) {
          iVar4 = (*(int (**)())puVar2[3])(param_1);
          if (iVar4 == 0) goto LAB_829ad300;
          pbVar12 = (unsigned char *)*puVar2;
          uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
        }
        bVar1 = *pbVar12;
        uVar5 = uVar5 - 1;
        uVar9 = (unsigned int)uVar5;
        pbVar12 = pbVar12 + 1;
        abStack_50[(int)uVar10] = bVar1;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    lVar11 = uVar7 - uVar8;
    if (param_1[0x69] == 0xe0) {
      fn_829ACEA8(param_1,abStack_50,uVar8,lVar11);
    }
    else if (param_1[0x69] == 0xee) {
      fn_829AD1B8(param_1,abStack_50,uVar8,lVar11);
    }
    else {
      *(unsigned int *)(*param_1 + 0x14) = 0x44;
      *(int *)(*param_1 + 0x18) = param_1[0x69];
      (**(int (***)())*param_1)();
    }
    *puVar2 = pbVar12;
    puVar2[1] = uVar9;
    if (0 < (int)lVar11) {
      (**(int (***)())(param_1[6] + 0x10))(param_1,lVar11);
    }
    uVar3 = 1;
  }
  return uVar3;
}

