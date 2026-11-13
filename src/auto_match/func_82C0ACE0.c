typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C15DF0();
extern int fn_82C16418();
extern int fn_82C17460();


unsigned __int64
fn_82C0ACE0(unsigned __int64 *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,int param_5,
             __int64 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  uVar10 = (unsigned __int64)*param_2;
  uVar11 = (unsigned __int64)*param_3;
  bVar5 = false;
  uVar9 = 0;
  bVar1 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (((param_1 == (unsigned __int64 *)0x0) || (param_4 == (unsigned int *)0x0)) || (*(int *)(param_1 + 0x49) == 0)
     ) {
LAB_82c0aff4:
    uVar6 = 2;
  }
  else {
    *param_4 = 0;
    if ((int)param_6 != 1) {
      uVar12 = *(unsigned int *)(param_1 + 4);
      uVar11 = 0;
      if (uVar12 != 0) {
        if (uVar12 < uVar10) goto LAB_82c0aff4;
        uVar9 = (unsigned __int64)uVar12 / (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1c);
        trapWord(6,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1c),0);
        if ((int)uVar9 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = uVar10 / uVar9;
          trapWord(6,uVar9,0);
          if (uVar11 == 0) goto LAB_82c0ad98;
        }
        if ((uVar11 & 0xf) == 0) {
          uVar11 = uVar11 + 1;
        }
      }
    }
LAB_82c0ad98:
    if ((unsigned __int64)*(unsigned int *)((int)param_1 + 0x1c) <= (uVar11 & 0xffffffff)) {
      uVar11 = (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1c) - 1;
    }
    do {
      uVar12 = (unsigned int)uVar11;
      *param_1 = (__int64)(int)uVar12 * (__int64)*(int *)((int)param_1 + 0x14) +
                 (unsigned __int64)*(unsigned int *)(param_1 + 2) & 0xffffffff;
      iVar7 = fn_82C15DF0(param_1);
      if ((iVar7 != 0) || ((*(int *)(param_1 + 0x36) != 0 && (*(int *)(param_1 + 0x35) != 0)))) {
        return 4;
      }
      uVar13 = 0;
      *(unsigned int *)((int)param_1 + 0x21c) = 0;
      if (*(int *)((int)param_1 + 0x1ec) != 0) {
        do {
          iVar7 = fn_82C16418(param_1);
          if (iVar7 != 0) {
            return 4;
          }
          if ((unsigned short)*(unsigned char *)((int)param_1 + 500) == *(unsigned short *)((int)param_1 + 0xe4)) {
            bVar2 = true;
            *param_4 = *(int *)(param_1 + 0x40) - *(int *)((int)param_1 + 0x24);
            break;
          }
          uVar13 = uVar13 + 1;
          *(int *)((int)param_1 + 0x21c) = *(int *)((int)param_1 + 0x21c) + 1;
        } while (uVar13 < *(unsigned int *)((int)param_1 + 0x1ec));
      }
      if (bVar2) {
        if ((int)param_6 == 1) {
          bVar5 = true;
          break;
        }
        bVar2 = false;
        if ((bVar3) && (bVar4)) {
          bVar5 = true;
        }
        uVar8 = (unsigned __int64)*param_4;
        bVar1 = uVar8 <= uVar10;
        if (bVar1) {
          uVar8 = uVar10 - uVar8;
          bVar3 = true;
        }
        else {
          uVar8 = uVar8 - uVar10;
          bVar4 = true;
        }
        if (param_5 == 1) {
          if (((uVar8 & 0xffffffff) == 0) || ((bVar5 || ((uVar11 & 0xffffffff) == 0))))
          goto LAB_82c0af98;
        }
        else {
          if ((uVar8 & 0xffffffff) < (uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xffffffff) >> 2) {
            bVar5 = true;
          }
          if (((uVar11 & 0xffffffff) == 0) || ((bVar5 && ((uVar11 & 0xf) != 0)))) goto LAB_82c0af98;
        }
        if (bVar1) goto LAB_82c0af5c;
        uVar11 = uVar11 - 1;
      }
      else {
        bVar1 = (bool)(param_6 != 1 & bVar1);
        if (!bVar1) {
          if ((uVar11 & 0xffffffff) != 0) {
            uVar11 = uVar11 - 1;
            goto LAB_82c0af60;
          }
          bVar1 = true;
          bVar3 = true;
        }
LAB_82c0af5c:
        uVar11 = uVar11 + 1;
      }
LAB_82c0af60:
      uVar12 = (unsigned int)uVar11;
    } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1c));
    if (!bVar5) {
      uVar12 = *(unsigned int *)((int)param_1 + 0x1c);
      *param_4 = *(unsigned int *)(param_1 + 4);
    }
LAB_82c0af98:
    iVar7 = fn_82C17460(*(unsigned int *)(param_1 + 0x49));
    *(unsigned int *)((int)param_1 + 0x24c) = 1;
    if (iVar7 == 0) {
      uVar6 = 0;
      *(unsigned int *)(param_1 + 0x31) = 3;
      param_1[1] = (__int64)(int)uVar12 * (__int64)*(int *)((int)param_1 + 0x14) +
                   (unsigned __int64)*(unsigned int *)(param_1 + 2) & 0xffffffff;
      *param_2 = *param_4;
      *param_3 = uVar12;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}

