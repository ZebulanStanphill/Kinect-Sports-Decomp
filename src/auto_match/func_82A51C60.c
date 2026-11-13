#define true 1
extern int fn_82A3FF60();
extern int fn_82A43118();
extern int fn_82A4FCF0();
extern int fn_82A4FDC8();
extern int fn_82A507C0();
extern int fn_82A51730();
extern int fn_82A51990();
extern unsigned int lbl_82002AE0;


__int64 fn_82A51C60(int *param_1,unsigned int param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int * apiStack_40;
  
  param_1[0xe] = param_2;
  lVar2 = fn_82A51730();
  if (lVar2 < 0) {
    return lVar2;
  }
  if ((param_2 & 8) != 0) {
    apiStack_40 = (int *)0x0;
    lVar2 = fn_82A43118(&apiStack_40);
    if (lVar2 < 0) {
      return lVar2;
    }
    uVar1 = *(unsigned int *)(param_1[0x1e] + 4);
    uVar3 = (**(int (***)())(*param_1 + 0x68))(param_1);
    lVar2 = fn_82A507C0(param_1,apiStack_40,uVar3,uVar1,uVar1,param_1 + 0x21);
    (**(int (***)())(*apiStack_40 + 8))(apiStack_40);
  }
  if ((int)lVar2 < 0) {
    return lVar2;
  }
  if ((param_4 & 0xffffffff) != 0) {
    uVar4 = fn_82A3FF60(0xffffffff83219d50,0x3c,0x20970004,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82A4FCF0(uVar4,param_1);
    }
    param_1[0xd] = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    lVar2 = fn_82A4FDC8(uVar4,param_4);
  }
  if ((int)lVar2 < 0) {
    return lVar2;
  }
  if ((unsigned int *)param_1[0xd] == (unsigned int *)0x0) {
    uVar6 = param_1[0xf];
  }
  else {
    uVar6 = *(unsigned int *)param_1[0xd];
  }
  lVar2 = ((unsigned __int64)uVar6 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar6) {
    lVar2 = -1;
  }
  iVar5 = fn_82A3FF60(0xffffffff83219d50,lVar2,0x20970002,0);
  param_1[0x13] = iVar5;
  uVar1 = lbl_82002AE0;
  if (iVar5 == 0) {
    return -0x7ff8fff2;
  }
  uVar6 = 0;
  iVar5 = 0;
  while( true ) {
    if ((unsigned int *)param_1[0xd] == (unsigned int *)0x0) {
      uVar7 = param_1[0xf];
    }
    else {
      uVar7 = *(unsigned int *)param_1[0xd];
    }
    if (uVar7 <= uVar6) break;
    uVar6 = uVar6 + 1;
    *(unsigned int *)(iVar5 + param_1[0x13]) = uVar1;
    iVar5 = iVar5 + 4;
  }
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0) {
      iVar5 = param_1[0x10];
    }
    else {
      iVar5 = *(int *)(*(int *)(param_3[1] + 4) + 0x44);
    }
    lVar2 = (**(int (***)())(*param_1 + 100))(param_1,iVar5);
    if (-1 < lVar2) {
      lVar2 = fn_82A51990(param_1,param_3);
      return lVar2;
    }
    return lVar2;
  }
  return 0;
}

