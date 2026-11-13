extern int fn_82E83AC0();
extern int fn_82E85268();
extern int fn_82E85448();
extern int fn_82E859B0();
extern int fn_82E86EF8();
extern int fn_82E89640();
extern int fn_82EF6A40();
extern int fn_82F00430();
extern int fn_82F0F9A0();
extern int fn_82F1DDA0();
extern int fn_82F65350();
extern unsigned int uStack_30;


void fn_82E8D0A8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uStack_30;
  int aiStack_2c;
  
  fn_82F00430();
  fn_82E83AC0(param_1,*(unsigned int *)(param_1 + 0x2a4));
  fn_82F1DDA0(param_1,*(unsigned int *)(param_1 + 0x588));
  uVar2 = fn_82EF6A40(param_1,*(unsigned int *)(param_1 + 0x588));
  *(unsigned int *)(param_1 + 0x51a4) = uVar2;
  if ((*(int *)(param_1 + 0x7b38) != 0) || (*(int *)(param_1 + 0x6d54) == 0)) {
    fn_82E859B0(param_1);
  }
  if (*(int *)(param_1 + 0xa58) == 0) {
    *(unsigned int *)(param_1 + 0xa1c) = *(unsigned int *)(param_1 + 0xa20);
  }
  if (*(int *)(param_1 + 0xa3c) != -1) {
    *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa3c);
  }
  if (*(int *)(param_1 + 0xa04) != 0) {
    if (*(int *)(param_1 + 0x1a80) != 0) {
      uVar3 = fn_82F65350();
      *(unsigned int *)(param_1 + 0xa1c) = uVar3 & 3;
    }
    iVar1 = *(int *)(param_1 + 0xa40);
    if (iVar1 < *(int *)(param_1 + 0xa1c)) {
      *(int *)(param_1 + 0xa1c) = iVar1;
    }
    if (*(int *)(param_1 + 0x7b38) == 0) {
      iVar6 = *(int *)(param_1 + 0xa44);
    }
    else if (*(int *)(param_1 + 0x6de4) == 0) {
      iVar6 = *(int *)(param_1 + 0xa48);
    }
    else {
      iVar6 = *(int *)(param_1 + 0xa4c);
    }
    if (*(int *)(param_1 + 0xa1c) < iVar6) {
      *(int *)(param_1 + 0xa1c) = iVar6;
    }
    if (iVar1 < *(int *)(param_1 + 0xa1c)) {
      *(int *)(param_1 + 0xa1c) = iVar1;
    }
    fn_82E86EF8(param_1,*(unsigned int *)(param_1 + 0xa1c));
  }
  uStack_30 = 0;
  aiStack_2c = 0;
  fn_82E85268(param_1,&uStack_30,&aiStack_2c,*(unsigned int *)(param_1 + 0x1acc),
                *(unsigned int *)(param_1 + 0x84c));
  fn_82E85448(param_1,uStack_30,aiStack_2c == 7);
  *(unsigned int *)(param_1 + 0x6d6c) = 1;
  if (*(int *)(param_1 + 0x6d54) == 0) {
    if (*(int *)(param_1 + 0x618) == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x638);
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0x634);
    }
    *(unsigned int *)(param_1 + 0x200c) = uVar2;
  }
  uVar2 = (**(int (***)())(param_1 + 0x1b90))(param_1);
  *(unsigned int *)(param_1 + 0x4c00) = uVar2;
  if ((-1 < *(int *)(param_1 + 0x69c)) && (-1 < *(int *)(param_1 + 0x6a0))) {
    if (*(int *)(param_1 + 0x6d64) == 0) {
      sVar4 = (-(unsigned short)(*(int *)(param_1 + 0x6de4) != 0) & 0xfffe) + 1;
    }
    else {
      sVar4 = 0;
    }
    uVar5 = 0;
    if ((*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) != 0) {
      do {
        iVar1 = (int)((((__int64)*(int *)(param_1 + 0x69c) * (__int64)*(int *)(param_1 + 0x2d0) &
                       0x3fffffffU) * 4 + uVar5 & 0xffffffff) << 1);
        if (*(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) = sVar4;
        }
        iVar1 = (int)((((__int64)(*(int *)(param_1 + 0x69c) * 2 + 1) *
                        (__int64)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) * 2 + uVar5 & 0xffffffff)
                     << 1);
        if (*(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) = sVar4;
        }
        iVar1 = (int)((((__int64)*(int *)(param_1 + 0x6a0) * (__int64)*(int *)(param_1 + 0x2d0) &
                       0x3fffffffU) * 4 + uVar5 & 0xffffffff) << 1);
        if (*(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) = sVar4;
        }
        iVar1 = (int)((((__int64)(*(int *)(param_1 + 0x6a0) * 2 + 1) *
                        (__int64)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) * 2 + uVar5 & 0xffffffff)
                     << 1);
        if (*(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar1 + *(int *)(param_1 + 0x9f4)) = sVar4;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) << 1);
    }
  }
  if ((*(int *)(param_1 + 0x1be4) == 0) || (param_2 == 0)) {
    fn_82F0F9A0(param_1,1);
    fn_82E89640(param_1,*(unsigned int *)(param_1 + 0x2a4));
  }
  fn_82F00430(param_1);
  return;
}

