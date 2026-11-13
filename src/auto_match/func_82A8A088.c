#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_460;
extern int fn_82A86D58();
extern int fn_82A89B90();
extern int memcpy();
extern unsigned int stack0x00000000;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_82A8A088(unsigned int *param_1,int *param_2,unsigned int *param_3,__int64 param_4,unsigned __int64 param_5,
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
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  int iVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned char auStack_460 [1088];
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar7 = uVar4 - 0x494;
  lVar14 = 5;
  lVar9 = uVar4 - 0x4c4;
  do {
    lVar9 = lVar9 + 4;
    lVar7 = lVar7 + 4;
    *(unsigned int *)lVar7 = *(unsigned int *)lVar9;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  memcpy(uVar4 - 0x4c0,uVar4 - 0x490,0x18);
  uVar10 = (unsigned __int64)*param_1;
  if (uVar10 == 0) {
    uVar10 = uVar4 - 0x490;
  }
  uVar5 = *param_3;
  lVar9 = (unsigned __int64)param_3[0x17] + (unsigned __int64)param_3[0xe] + (unsigned __int64)param_3[0xd] +
          (unsigned __int64)param_3[0xc] + (unsigned __int64)param_3[0xb] + (unsigned __int64)param_3[0x14] +
          (unsigned __int64)param_3[0x11] + 0xc0;
  iVar12 = (int)lVar9;
  uVar1 = (int)(uVar5 * iVar12 + 0x1b9) >> 3;
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
    if ((cVar6 != '\0') && (cVar6 = (**(int (***)())(*param_2 + 0xc))(param_2,0x36), cVar6 != '\0')) {
      uVar13 = 2;
      iVar2 = iVar12 * (int)param_5 + 9 >> 3;
      lVar7 = (__int64)iVar2;
      if (0x1ff < iVar2) {
        lVar7 = 0x200;
      }
      cVar6 = (**(int (***)())(*param_2 + 0x10))(param_2,uVar4 - 0x460,lVar7,uVar4 - 0x4d0);
      if (cVar6 != '\0') {
        while (fn_82A86D58(uVar4 - 0x260,uVar4 - 0x460,lVar7), (int)param_5 != 0) {
          do {
            if (0x1000 - iVar12 < (int)uVar13) break;
            fn_82A89B90(uVar10,param_3 + 1,uVar4 - 0x260,uVar13,param_4);
            param_5 = param_5 - 1;
            param_4 = param_4 + param_6;
            uVar13 = uVar13 + lVar9;
          } while (param_5 != 0);
          if ((int)param_5 == 0) break;
          iVar2 = (int)uVar13 >> 3;
          lVar8 = (__int64)iVar2;
          lVar14 = -lVar8;
          lVar7 = lVar14 + 0x200;
          lVar11 = lVar8 + (uVar4 - 0x460);
          if (-1 < lVar14 + 0x1ff) {
            lVar14 = lVar14 + 0x200;
            iVar3 = (int)lVar11;
            do {
              ((unsigned char *)lVar11)[(int)(auStack_460 + -iVar3)] = *(unsigned char *)lVar11;
              lVar11 = lVar11 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          uVar13 = uVar13 & 7;
          iVar3 = (int)param_5 * iVar12 + (int)uVar13 + 7 >> 3;
          lVar14 = (__int64)iVar3;
          if (iVar3 <= (int)lVar7) {
            lVar14 = lVar7;
          }
          lVar11 = lVar14 - lVar7;
          if (iVar2 <= (int)(lVar14 - lVar7)) {
            lVar11 = lVar8;
          }
          cVar6 = (**(int (***)())(*param_2 + 0x10))
                            (param_2,lVar7 + (uVar4 - 0x460),lVar11,uVar4 - 0x4d0);
          if (cVar6 == '\0') {
            return 0;
          }
          lVar7 = lVar7 + lVar11;
        }
        uVar5 = (**(int (***)())(*param_2 + 8))(param_2);
        if (uVar5 < uVar1) {
          iVar12 = *param_2;
          lVar9 = (**(int (***)())(iVar12 + 8))(param_2);
          (**(int (***)())(iVar12 + 0xc))(param_2,(int)uVar1 - lVar9);
        }
        return 1;
      }
    }
  }
  return 0;
}

