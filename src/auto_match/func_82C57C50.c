typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C4E5E8();


unsigned __int64 fn_82C57C50(unsigned __int64 *param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  uVar6 = *param_4;
  bVar3 = false;
  do {
    uVar4 = *param_1;
    uVar1 = *(unsigned int *)(param_1 + 1);
    *param_1 = uVar4 << 1;
    *(int *)(param_1 + 1) = (int)((unsigned __int64)uVar1 - 1);
    if ((__int64)((unsigned __int64)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_1);
    }
    if ((__int64)uVar4 < 0) {
      uVar6 = 0;
      goto LAB_82c57f54;
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
    uVar8 = 3;
    iVar9 = 0;
    uVar5 = uVar4 + 0x10;
    iVar2 = 0;
    if ((uVar5 & 0xffffffff) < 3) {
      do {
        iVar9 = iVar2;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
        *param_1 = *param_1 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(param_1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar2 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
    iVar9 = (int)(*param_1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
    *param_1 = *param_1 << (uVar8 & 0x7f);
    if ((__int64)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(param_1);
    }
    if (1 < iVar9) {
      uVar6 = 1 << (iVar9 - 2U & 0x3f);
      goto LAB_82c57f54;
    }
    if (iVar9 != 1) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
      uVar8 = 4;
      lVar7 = 0;
      uVar5 = uVar4 + 0x10;
      if (3 < (uVar5 & 0xffffffff)) goto LAB_82c57efc;
      break;
    }
    uVar4 = *param_1;
    uVar1 = *(unsigned int *)(param_1 + 1);
    *param_1 = uVar4 << 1;
    *(int *)(param_1 + 1) = (int)((unsigned __int64)uVar1 - 1);
    if ((__int64)((unsigned __int64)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_1);
    }
    if (-1 < (__int64)uVar4) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
      uVar8 = 5;
      lVar7 = 0;
      uVar5 = uVar4 + 0x10;
      if (4 < (uVar5 & 0xffffffff)) goto LAB_82c57e20;
      goto LAB_82c57dc8;
    }
    if (bVar3) goto LAB_82c57f3c;
    bVar3 = true;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - uVar5;
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
    lVar7 = (unsigned __int64)(unsigned int)((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) +
            lVar7;
    *param_1 = *param_1 << (uVar5 & 0x7f);
    if ((__int64)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(param_1);
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) <= (uVar5 & 0xffffffff)) break;
    if ((uVar5 & 0xffffffff) == 0) break;
  }
LAB_82c57efc:
  *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
  uVar5 = (*param_1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
  *param_1 = *param_1 << (uVar8 & 0x7f);
  if ((__int64)(uVar4 - uVar8) < 0) {
    fn_82C4E5E8(param_1);
  }
  if ((int)uVar5 == 0xf) {
LAB_82c57f3c:
    *param_4 = uVar6;
    return 1;
  }
  uVar6 = *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + param_2);
  goto LAB_82c57f54;
  while( true ) {
    uVar8 = uVar8 - uVar5;
    *(int *)(param_1 + 1) = (int)(uVar4 - uVar5);
    lVar7 = (unsigned __int64)(unsigned int)((int)(*param_1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) +
            lVar7;
    *param_1 = *param_1 << (uVar5 & 0x7f);
    if ((__int64)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(param_1);
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) <= (uVar5 & 0xffffffff)) break;
LAB_82c57dc8:
    if ((uVar5 & 0xffffffff) == 0) break;
  }
LAB_82c57e20:
  *(int *)(param_1 + 1) = (int)(uVar4 - uVar8);
  uVar5 = (*param_1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
  uVar6 = (unsigned int)uVar5;
  *param_1 = *param_1 << (uVar8 & 0x7f);
  if ((__int64)(uVar4 - uVar8) < 0) {
    fn_82C4E5E8(param_1);
  }
  iVar2 = *(int *)((int)((uVar5 & 0xffffffff) << 2) + param_3);
  if (iVar2 == 2) {
    uVar6 = uVar6 | 0x20;
  }
  else if (iVar2 != 3) {
    *param_4 = uVar6;
    return 1;
  }
LAB_82c57f54:
  if (bVar3) {
    uVar6 = uVar6 ^ 0x3f;
  }
  *param_4 = uVar6;
  return 0;
}

