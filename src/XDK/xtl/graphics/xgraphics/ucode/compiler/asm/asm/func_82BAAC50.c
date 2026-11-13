typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82BA0310();
extern int fn_82BAAB88();
extern int fn_82BC27A0();
extern int fn_82BD09F0();
extern unsigned int lbl_820E7F9E;
extern unsigned int lbl_8316FF50;


void fn_82BAAC50(int param_1,unsigned int *param_2,__int64 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char uVar10;
  unsigned int uVar9;
  __int64 lVar11;
  int iVar12;
  unsigned __int64 uVar13;
  
  iVar3 = *(int *)((int)((param_3 + 0x3aU & 0xffffffff) << 2) + param_1);
  if (iVar3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df3a8,0xffffffff820df268,0x88c);
  }
  uVar4 = fn_82BD09F0(*(unsigned int *)(*(int *)(param_1 + 0x3b8) + 0xab0),iVar3);
  if ((__int64)uVar4 < 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df54c,0xffffffff820df268,0x88e);
  }
  if (((&lbl_820E7F9E)[*(int *)(iVar3 + 0x50) * 0xc] == 0) ||
     (bVar1 = true, 4 < (unsigned char)(&lbl_820E7F9E)[*(int *)(iVar3 + 0x50) * 0xc])) {
    bVar1 = false;
  }
  bVar1 = !bVar1;
  iVar5 = fn_82BC27A0(param_1,param_3);
  uVar13 = (unsigned __int64)*(unsigned int *)((int)((param_3 + 0x32U & 0xffffffff) << 2) + param_1);
  if ((bVar1) && (iVar5 == 1)) {
    cVar6 = fn_82BA0310(*(unsigned int *)(*(int *)(param_1 + 0x3b8) + 0xab0));
    iVar2 = *(int *)(*(int *)(param_1 + 0x3b8) + 0xab0);
    if (cVar6 == '\0') {
      uVar9 = *(unsigned int *)(iVar2 + 0x854);
    }
    else {
      uVar9 = *(unsigned int *)(iVar2 + 0x840);
    }
    uVar13 = uVar9 + uVar13;
  }
  uVar9 = param_2[2];
  iVar2 = (int)param_3;
  if ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
    if (param_4 == 1) {
      param_2[2] = (unsigned int)bVar1 << 0x1f | uVar9 & 0x7fffffff;
      if (iVar5 != 0) {
        uVar4 = uVar13;
      }
      *(char *)((int)param_2 + 9) = (char)uVar4;
      if (*(char *)(iVar2 + param_1 + 0x98) != '\0') {
        uVar9 = param_2[1] | 0x4000000;
        goto LAB_82baae50;
      }
    }
    else {
      if (param_4 != 2) goto LAB_82baae1c;
      param_2[2] = (unsigned int)bVar1 << 0x1e | uVar9 & 0xbfffffff;
      if (iVar5 != 0) {
        uVar4 = uVar13;
      }
      *(char *)((int)param_2 + 10) = (char)uVar4;
      if (*(char *)(iVar2 + param_1 + 0x98) != '\0') {
        uVar9 = param_2[1] | 0x2000000;
        goto LAB_82baae50;
      }
    }
  }
  else {
LAB_82baae1c:
    param_2[2] = (unsigned int)bVar1 << 0x1d | uVar9 & 0xdfffffff;
    uVar10 = (unsigned char)uVar4;
    if (iVar5 != 0) {
      uVar10 = (unsigned char)uVar13;
    }
    *(unsigned char *)((int)param_2 + 0xb) = uVar10;
    if (*(char *)(iVar2 + param_1 + 0x98) != '\0') {
      uVar9 = param_2[1] | 0x1000000;
LAB_82baae50:
      param_2[1] = uVar9;
    }
  }
  iVar2 = iVar2 + param_1;
  if (bVar1) {
    if (iVar5 == 2) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x8b4);
    }
    if ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
      if (param_4 == 1) {
        if (iVar5 == 1) {
          *(unsigned char *)((int)param_2 + 9) = *(unsigned char *)((int)param_2 + 9) | 0x40;
        }
        if (*(char *)(iVar2 + 0x9e) != '\0') {
          *(unsigned char *)((int)param_2 + 9) = *(unsigned char *)((int)param_2 + 9) | 0x80;
        }
        goto LAB_82bab1b0;
      }
      if (param_4 == 2) {
        if (iVar5 == 1) {
          *(unsigned char *)((int)param_2 + 10) = *(unsigned char *)((int)param_2 + 10) | 0x40;
        }
        if (*(char *)(iVar2 + 0x9e) != '\0') {
          *(unsigned char *)((int)param_2 + 10) = *(unsigned char *)((int)param_2 + 10) | 0x80;
        }
        goto LAB_82bab1b0;
      }
    }
    if (iVar5 == 1) {
      *(unsigned char *)((int)param_2 + 0xb) = (unsigned char)param_2[2] | 0x40;
    }
    if (*(char *)(iVar2 + 0x9e) != '\0') {
      *(unsigned char *)((int)param_2 + 0xb) = (unsigned char)param_2[2] & 0x7f | 0x80;
    }
    goto LAB_82bab1b0;
  }
  uVar9 = param_2[2];
  lVar11 = ((3 - ((unsigned __int64)(uVar9 >> 0x1e) & 1)) - ((unsigned __int64)(uVar9 >> 0x1d) & 1)) -
           (unsigned __int64)(uVar9 >> 0x1f);
  if (lVar11 < 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df53c,0xffffffff820df268,0x8db);
  }
  iVar12 = (int)lVar11;
  if (*(char *)(iVar2 + 0x9e) == '\0') {
LAB_82baafc0:
    if (1 < iVar12) {
      uVar9 = param_2[1];
      if (*(int *)(iVar3 + 0x50) == 0xb) {
        if ((uVar9 & 0x20000000) == 0x20000000) {
          if (((uVar9 & 0x80000000) == 0) && ((uVar9 & 0x40000000) == 0)) goto LAB_82bab038;
        }
        uVar8 = 0x8e9;
        uVar7 = 0xffffffff820df4d8;
LAB_82bab028:
        fn_82AB15D0(0,0xffffffff820d2ea4,uVar7,0xffffffff820df268,uVar8);
      }
      else if ((uVar9 & 0x20000000) == 0x20000000) {
        if (((uVar9 & 0x80000000) == 0) && ((uVar9 & 0x40000000) == 0)) {
          uVar8 = 0x8ed;
          uVar7 = 0xffffffff820df488;
          goto LAB_82bab028;
        }
      }
    }
  }
  else {
    if (iVar12 != 1) {
      if ((*param_2 & 0x80) != 0x80) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df524,0xffffffff820df268,0x8e1);
      }
      goto LAB_82baafc0;
    }
    *param_2 = *param_2 | 0x80;
  }
LAB_82bab038:
  if (iVar5 == 2) {
    uVar9 = param_2[1];
    if (iVar12 == 1) {
      uVar9 = uVar9 | 0xa0000000;
    }
    else {
      if (iVar12 != 2) {
        if (((uVar9 & 0x20000000) == 0x20000000) && ((uVar9 & 0x40000000) == 0x40000000))
        goto LAB_82bab1b0;
        uVar8 = 0x8f8;
        uVar7 = 0xffffffff820df428;
LAB_82bab1a0:
        fn_82AB15D0(0,0xffffffff820d2ea4,uVar7,0xffffffff820df268,uVar8);
        goto LAB_82bab1b0;
      }
      if (((uVar9 & 0x20000000) != 0x20000000) && ((uVar9 & 0x80000000) != 0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df458,0xffffffff820df268,0x8f4);
      }
      uVar9 = param_2[1] | 0x60000000;
    }
  }
  else if (iVar5 == 1) {
    uVar9 = param_2[1];
    if (iVar12 == 1) {
      uVar9 = uVar9 & 0x5fffffff | 0x80000000;
    }
    else {
      bVar1 = (uVar9 & 0x20000000) == 0;
      if (iVar12 != 2) {
        if ((bVar1) || ((uVar9 & 0x40000000) == 0x40000000)) goto LAB_82bab1b0;
        uVar8 = 0x903;
        uVar7 = 0xffffffff820df3c8;
        goto LAB_82bab1a0;
      }
      if ((!bVar1) && ((uVar9 & 0x80000000) != 0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df3f8,0xffffffff820df268,0x8ff);
      }
      uVar9 = param_2[1] & 0x9fffffff | 0x40000000;
    }
  }
  else if (*(int *)(iVar3 + 0x50) == 0xb) {
    if (iVar12 != 1) goto LAB_82bab1b0;
    uVar9 = param_2[1] & 0x1fffffff | 0x20000000;
  }
  else {
    uVar9 = param_2[1];
    if (iVar12 == 1) {
      uVar9 = uVar9 & 0x1fffffff;
    }
    else {
      if (iVar12 != 2) {
        if ((uVar9 & 0x40000000) == 0) goto LAB_82bab1b0;
        uVar8 = 0x915;
        uVar7 = 0xffffffff820df3b0;
        goto LAB_82bab1a0;
      }
      uVar9 = uVar9 & 0xbfffffff;
    }
  }
  param_2[1] = uVar9;
LAB_82bab1b0:
  fn_82BAAB88(param_1,param_3);
  return;
}

