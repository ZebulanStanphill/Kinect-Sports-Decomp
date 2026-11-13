typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8282F2A0();


unsigned __int64 fn_8282C398(int param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  unsigned __int64 uVar5;
  __int64 lVar7;
  bool bVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned int auStack_60;
  
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar3 = true, *(unsigned int *)(param_1 + 0x58) <= *(unsigned int *)(param_1 + 0x68))) {
    bVar3 = false;
  }
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar4 = true, *(unsigned int *)(param_1 + 0x6c) <= *(unsigned int *)(param_1 + 0x7c))) {
    bVar4 = false;
  }
  puVar12 = (unsigned int *)(param_1 + 0x58);
  iVar6 = (*(int (**)())param_3[3])(*param_3,0,0);
  if ((iVar6 == 0) ||
     (iVar6 = (*(int (**)())param_3[1])(*param_3,*(unsigned int *)(param_1 + 0xcc)), iVar6 == 0)) {
    uVar10 = 0;
    do {
      bVar8 = true;
      lVar7 = 0;
      uVar11 = 0;
      uVar13 = 0;
      if (uVar10 == 0) {
        bVar1 = *param_2;
        uVar9 = (unsigned __int64)*(unsigned char *)(param_1 + 0x51) * 0x21 + (unsigned __int64)*(unsigned int *)(param_1 + 0x54);
        if ((bVar1 & 0x80) == 0) {
          if ((bVar1 & 0x40) == 0) {
            if ((bVar1 & 0x20) == 0) goto LAB_8282c558;
            uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xb8);
            lVar7 = 0x80;
            if (bVar3) {
              uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x68);
              uVar11 = uVar13;
              uVar13 = ((unsigned __int64)*puVar12 - (unsigned __int64)*(unsigned int *)(param_1 + 0x68)) + uVar13 + 0x80;
            }
            else {
              uVar9 = (unsigned __int64)*puVar12;
            }
          }
          else {
            lVar7 = uVar9 + 0x80;
            uVar9 = *puVar12 - uVar9;
            uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xbc);
          }
        }
        else {
          lVar7 = 0x80;
          uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xb8);
        }
      }
      else {
        uVar9 = 0;
        if (uVar10 == 1) {
          if ((*param_2 & 0x10) == 0) {
LAB_8282c558:
            bVar8 = false;
            uVar9 = 0;
          }
          else {
            if (bVar3) {
              uVar2 = *(unsigned int *)(param_1 + 0x68);
            }
            else {
              uVar2 = *puVar12;
            }
            uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc0);
            lVar7 = (unsigned __int64)uVar2 + 0x80;
            if (bVar4) {
              uVar11 = uVar13;
              uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c);
              uVar13 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x7c))
                       + uVar13 + 0x80;
            }
            else {
              uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c);
            }
          }
        }
      }
      if (bVar8) {
        iVar6 = (*(int (**)())param_3[3])(*param_3,lVar7,0);
        if ((iVar6 != 0) || (iVar6 = (*(int (**)())param_3[2])(*param_3,uVar9,uVar13), iVar6 != 0))
        goto LAB_8282c43c;
        if (((bVar3) || (bVar4)) && ((uVar9 & 0xffffffff) != 0)) {
          auStack_60 = puVar12[uVar10 * 5];
          fn_8282F2A0(uVar13,(puVar12 + uVar10 * 5)[4],uVar11,&auStack_60);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    uVar5 = 0;
  }
  else {
LAB_8282c43c:
    uVar5 = 3;
  }
  return uVar5;
}

