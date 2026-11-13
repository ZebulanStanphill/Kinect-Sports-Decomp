extern unsigned int *auStack_54;
extern int fn_82A29A38();
extern int fn_82AB0350();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82AB0600(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int *param_8)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int auStack_54 [21];
  
  puVar1 = (unsigned int *)*param_8;
  if (param_2 == 10) {
    uVar5 = 0;
    uVar4 = (param_3 == 0 ^ 1) + 0x12;
  }
  else {
    uVar5 = param_3;
    if (param_2 == 5) {
      uVar4 = 0x11;
      uVar3 = param_3 + 1;
      if (param_3 + 1 < *(unsigned int *)(param_7 + 4)) {
        uVar3 = *(unsigned int *)(param_7 + 4);
      }
      *(unsigned int *)(param_7 + 4) = uVar3;
      iVar2 = *(int *)(*(int *)(param_7 + 0x10) + 4);
      if (iVar2 == 1) {
        param_4 = 0;
      }
      else if (iVar2 == 2) {
        param_4 = 1;
      }
    }
    else {
      fn_82A29A38();
      uVar4 = auStack_54[0];
    }
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  *(unsigned int *)((int)((param_1 + 4 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10)) = uVar4;
  *(unsigned int *)((int)((param_1 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10) + 0x1c) = uVar5;
  fn_82AB0350(param_6,param_5,auStack_54,&uStack_58,&uStack_5c,&uStack_60);
  *puVar1 = (((((unsigned int)(param_4 == 0) << 2 | uStack_60 & 3) << 2 | uStack_5c & 3) << 2 |
             uStack_58 & 3) << 2 | auStack_54[0] & 3) << 0x10 | 0x16;
  puVar1[1] = (uVar4 & 0x3f) << 0x10 | uVar5 & 0xffff;
  *param_8 = (int)(puVar1 + 2);
  return;
}

