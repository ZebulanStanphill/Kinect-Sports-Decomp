#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_460;
extern int fn_82A86D58();
extern int fn_82A8F350();
extern unsigned int stack0x00000000;


unsigned __int64
fn_82A8F5B0(unsigned int *param_1,int *param_2,unsigned int *param_3,__int64 param_4,unsigned __int64 param_5,
             __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  char cVar6;
  unsigned int uVar5;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned char auStack_460 [1120];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar9 = (unsigned __int64)*param_1;
  if (uVar9 == 0) {
    uVar9 = uVar4 - 0x470;
  }
  uVar5 = *param_3;
  lVar11 = (unsigned __int64)param_3[0xd] + (unsigned __int64)param_3[0xc] + (unsigned __int64)param_3[0xb] +
           (unsigned __int64)param_3[0x1a] + (unsigned __int64)param_3[0x19] + (unsigned __int64)param_3[0x18];
  iVar12 = (int)lVar11;
  uVar1 = (int)(uVar5 * iVar12 + 0x14b) >> 3;
  if ((int)param_5 < 1) {
    cVar6 = (**(int (***)())(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') &&
       (cVar6 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)(int)uVar1), cVar6 != '\0')) {
      return 1;
    }
  }
  else {
    if ((int)uVar5 < (int)param_5) {
      param_5 = (unsigned __int64)uVar5;
    }
    cVar6 = (**(int (***)())(*param_2 + 4))(param_2);
    if ((cVar6 != '\0') && (cVar6 = (**(int (***)())(*param_2 + 0xc))(param_2,0x28), cVar6 != '\0')) {
      uVar14 = 4;
      iVar2 = iVar12 * (int)param_5 + 0xb >> 3;
      lVar13 = (__int64)iVar2;
      if (0x1ff < iVar2) {
        lVar13 = 0x200;
      }
      cVar6 = (**(int (***)())(*param_2 + 0x10))(param_2,uVar4 - 0x460,lVar13,uVar4 - 0x470);
      if (cVar6 != '\0') {
        while (fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar13), (int)param_5 != 0) {
          do {
            if (0x1000 - iVar12 < (int)uVar14) break;
            fn_82A8F350(uVar9,param_3 + 1,uVar4 - 0x260,uVar14,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar14 = uVar14 + lVar11;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar2 = (int)uVar14 >> 3;
          lVar7 = (__int64)iVar2;
          lVar8 = -lVar7;
          lVar13 = lVar8 + 0x200;
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
          uVar14 = uVar14 & 7;
          iVar3 = (int)param_5 * iVar12 + (int)uVar14 + 7 >> 3;
          lVar8 = (__int64)iVar3;
          if (iVar3 <= (int)lVar13) {
            lVar8 = lVar13;
          }
          lVar10 = lVar8 - lVar13;
          if (iVar2 <= (int)(lVar8 - lVar13)) {
            lVar10 = lVar7;
          }
          cVar6 = (**(int (***)())(*param_2 + 0x10))
                            (param_2,lVar13 + (uVar4 - 0x460),lVar10,uVar4 - 0x470);
          if (cVar6 == '\0') {
            return 0;
          }
          lVar13 = lVar13 + lVar10;
        }
        uVar5 = (**(int (***)())(*param_2 + 8))(param_2);
        if (uVar5 < uVar1) {
          iVar12 = *param_2;
          lVar11 = (**(int (***)())(iVar12 + 8))(param_2);
          (**(int (***)())(iVar12 + 0xc))(param_2,(int)uVar1 - lVar11);
        }
        return 1;
      }
    }
  }
  return 0;
}

