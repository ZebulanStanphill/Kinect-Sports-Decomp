extern int fn_8246B178();
extern int fn_8246B2A8();
extern unsigned int ltcg_pool_0_0f;


void fn_8245FF08(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x50) + 0x34);
  uVar5 = (unsigned __int64)uVar1;
  if ((uVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x50) + 0x74) != 0)) {
    if ((*(float *)(*(int *)(param_1 + 0x3c) + 0x110) == ltcg_pool_0_0f) &&
       (*(float *)(*(int *)(param_1 + 0x3c) + 0x22c) == ltcg_pool_0_0f)) {
      uVar4 = 0xffffffff831c6e00;
      uVar2 = fn_8246B178(uVar5 + 0x68,3,0xffffffff831c6e00);
      fn_8246B2A8(uVar5,uVar2);
      uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x50) + 0x74);
      lVar3 = uVar5 + 0x68;
    }
    else if (*(float *)(*(int *)(param_1 + 0x3c) + 0x110) <=
             *(float *)(*(int *)(param_1 + 0x3c) + 0x22c)) {
      if (*(float *)(*(int *)(param_1 + 0x3c) + 0x22c) <=
          *(float *)(*(int *)(param_1 + 0x3c) + 0x110)) {
        uVar4 = 0xffffffff831c6cac;
        uVar2 = fn_8246B178(uVar5 + 0x74,3,0xffffffff831c6cac);
        fn_8246B2A8(uVar5,uVar2);
        uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x50) + 0x74);
        lVar3 = uVar5 + 0x74;
      }
      else {
        uVar2 = fn_8246B178(uVar5 + 0x68,3,0xffffffff831c6e00);
        fn_8246B2A8(uVar5,uVar2);
        uVar4 = 0xffffffff831c6cac;
        uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x50) + 0x74);
        lVar3 = uVar5 + 0x74;
      }
    }
    else {
      uVar2 = fn_8246B178(uVar5 + 0x74,3,0xffffffff831c6cac);
      fn_8246B2A8(uVar5,uVar2);
      uVar4 = 0xffffffff831c6e00;
      uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x50) + 0x74);
      lVar3 = uVar5 + 0x68;
    }
    uVar2 = fn_8246B178(lVar3,3,uVar4);
    fn_8246B2A8(uVar5,uVar2);
  }
  return;
}

