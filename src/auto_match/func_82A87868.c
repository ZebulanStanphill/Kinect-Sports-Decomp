#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_460;
extern int fn_82A86D58();
extern int fn_82A872A8();
extern unsigned int stack0x00000000;


unsigned __int64
fn_82A87868(unsigned int *param_1,int *param_2,unsigned int *param_3,__int64 param_4,unsigned __int64 param_5,
             __int64 param_6)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  char cVar6;
  unsigned int uVar5;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned char auStack_460 [1120];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar9 = (unsigned __int64)*param_1;
  if (uVar9 == 0) {
    uVar9 = uVar4 - 0x470;
  }
  uVar5 = *param_3;
  uVar1 = *(unsigned short *)(param_3 + 1);
  uVar2 = (int)(uVar5 * uVar1 + 0x47) >> 3;
  if ((int)param_5 < 1) {
    cVar6 = (**(int (***)())(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') &&
       (cVar6 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)(int)uVar2), cVar6 != '\0')) {
      return 1;
    }
  }
  else {
    if ((int)uVar5 < (int)param_5) {
      param_5 = (unsigned __int64)uVar5;
    }
    cVar6 = (**(int (***)())(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') && (cVar6 = (**(int (***)())(*param_2 + 0xc))(param_2,8), cVar6 != '\0')) {
      uVar13 = 0;
      iVar11 = (int)((unsigned int)uVar1 * (int)param_5 + 7) >> 3;
      if (0x1ff < iVar11) {
        iVar11 = 0x200;
      }
      cVar6 = (**(int (***)())(*param_2 + 0x10))(param_2,uVar4 - 0x460,iVar11,uVar4 - 0x46c);
      if (cVar6 != '\0') {
        fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,iVar11);
        while ((int)param_5 != 0) {
          do {
            if ((int)(0x1000 - (unsigned int)uVar1) < (int)uVar13) break;
            fn_82A872A8(uVar9,param_3 + 1,uVar4 - 0x260,uVar13,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar13 = uVar13 + uVar1;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar11 = (int)uVar13 >> 3;
          lVar7 = (__int64)iVar11;
          lVar8 = -lVar7;
          lVar12 = lVar8 + 0x200;
          lVar10 = lVar7 + (uVar4 - 0x460);
          if (-1 < lVar8 + 0x1ff) {
            lVar8 = lVar8 + 0x200;
            iVar3 = (int)lVar10;
            do {
              ((unsigned char *)lVar10)[(int)(auStack_460 + -iVar3)] = *(unsigned char *)lVar10;
              lVar10 = lVar10 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          uVar13 = uVar13 & 7;
          iVar3 = (int)((int)param_5 * (unsigned int)uVar1 + (int)uVar13 + 7) >> 3;
          lVar8 = (__int64)iVar3;
          if (iVar3 <= (int)lVar12) {
            lVar8 = lVar12;
          }
          lVar10 = lVar8 - lVar12;
          if (iVar11 <= (int)(lVar8 - lVar12)) {
            lVar10 = lVar7;
          }
          cVar6 = (**(int (***)())(*param_2 + 0x10))
                            (param_2,lVar12 + (uVar4 - 0x460),lVar10,uVar4 - 0x46c);
          if (cVar6 == '\0') {
            return 0;
          }
          fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar12 + lVar10);
        }
        uVar5 = (**(int (***)())(*param_2 + 8))(param_2);
        if (uVar5 < uVar2) {
          iVar11 = *param_2;
          lVar8 = (**(int (***)())(iVar11 + 8))(param_2);
          (**(int (***)())(iVar11 + 0xc))(param_2,(int)uVar2 - lVar8);
        }
        return 1;
      }
    }
  }
  return 0;
}

