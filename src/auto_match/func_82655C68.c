extern int fn_82F68CC0();
extern int fn_831427AC();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82655C68(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uVar6;
  
  uVar1 = param_4[1];
  uVar2 = *param_4;
  uStack_48 = param_4[2];
  uStack_44 = param_4[3];
  if ((((uVar2 == 0) && (uStack_48 == 0)) && (uVar1 == 0)) && (uStack_44 == 0)) {
    uStack_48 = param_2;
    uStack_44 = param_3;
  }
  uVar4 = param_4[4];
  if (uVar4 == 0) {
    uVar4 = *(unsigned int *)(param_1 + 0x5500);
  }
  uVar6 = param_4[5];
  if (uVar6 == 0) {
    uVar5 = ((__int64)(int)uVar4 * (__int64)(int)(uStack_44 - uVar1) & 0xffffffffU) /
            ((unsigned __int64)uStack_48 - (unsigned __int64)uVar2 & 0xffffffff);
    uVar6 = (unsigned int)uVar5;
    trapWord(6,(unsigned __int64)uStack_48 - (unsigned __int64)uVar2,0);
    if ((((*(unsigned int *)(param_1 + 0x35e8) & 1) != 0) || (uVar3 = fn_831427AC(), (uVar3 & 1) != 0))
       || ((uStack_44 - uVar1 < uVar5 || (*(unsigned int *)(param_1 + 0x5504) < uVar5)))) {
      uVar6 = *(unsigned int *)(param_1 + 0x5504);
    }
  }
  fn_82F68CC0(param_5,param_4,0x38);
  param_5[4] = uVar4;
  param_5[5] = uVar6;
  *param_5 = uVar2;
  param_5[1] = uVar1;
  param_5[2] = uStack_48;
  param_5[3] = uStack_44;
  return;
}

