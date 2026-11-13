extern int fn_82E85268();
extern int fn_82E85448();
extern int fn_82E8D3A8();
extern int fn_82E8E7A8();
extern int fn_82F0D688();
extern int fn_82F0DB60();
extern int fn_82F0DC50();
extern unsigned int uStack_70;


void fn_82E8ECF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int *param_6,unsigned __int64 param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int uStack_70;
  int aiStack_6c [27];
  
  *(int *)(param_1 + 0x2a0) = (int)param_3;
  *(int *)(param_1 + 0x2a4) = (int)param_3;
  *(int *)(param_1 + 0x590) = (int)param_4;
  *(unsigned int *)(param_1 + 0x618) = in_stack_00000054;
  *(int *)(param_1 + 0x6de8) = in_stack_0000005c;
  *(int *)(param_1 + 0xaf0) = (int)param_2;
  *(unsigned int *)(param_1 + 0x1f78) = (unsigned int)((int)param_5 == 0);
  iVar2 = fn_82E8D3A8();
  iVar1 = *(int *)(iVar2 + 0x6de8);
  if (iVar1 == 1) {
    *(unsigned int *)(iVar2 + 0x8f8) = *(unsigned int *)(iVar2 + 0x8f0);
    *(unsigned int *)(iVar2 + 0x8fc) = *(unsigned int *)(iVar2 + 0x8e8);
  }
  if (*(int *)(param_1 + 0x6f50) == 0) {
    *(int *)(param_1 + 0x6de4) = 1 - in_stack_0000005c;
  }
  else {
    *(int *)(param_1 + 0x6de4) = in_stack_0000005c;
  }
  if (*(int *)(param_1 + 0x6d6c) == 0) {
    if (*(int *)(param_1 + 28000) != 0) {
      *(unsigned int *)(param_1 + 0x6d64) = 0;
      *(unsigned int *)(param_1 + 0x6d68) = 1;
      goto LAB_82e8ee30;
    }
    *(unsigned int *)(param_1 + 0x6d68) = 0;
  }
  else if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xaf0) == 1) {
      *(unsigned int *)(param_1 + 0x6d68) = 1;
      if (*(int *)(param_1 + 0x4f34) != 0) {
        *(unsigned int *)(param_1 + 0x6d64) = 0;
        goto LAB_82e8ee30;
      }
    }
    else {
      if (*(int *)(param_1 + 0xaf0) != 2) goto LAB_82e8ee30;
      *(unsigned int *)(param_1 + 0x6d68) = 1;
      if (*(int *)(param_1 + 0x4f38) != 0) {
        *(unsigned int *)(param_1 + 0x6d64) = 0;
        goto LAB_82e8ee30;
      }
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x6d68) = 1;
    if (*(int *)(param_1 + 0x4f24) == 0) {
      *(unsigned int *)(param_1 + 0x6d64) = 0;
      goto LAB_82e8ee30;
    }
  }
  *(unsigned int *)(param_1 + 0x6d64) = 1;
LAB_82e8ee30:
  if (*(int *)(param_1 + 0xaf0) == 1) {
    fn_82F0DB60(param_1,*(unsigned int *)(param_1 + 0x6e08));
  }
  else if (*(int *)(param_1 + 0xaf0) == 2) {
    uStack_70 = 0;
    aiStack_6c[0] = 0;
    fn_82E85268(param_1,&uStack_70,aiStack_6c,*(unsigned int *)(param_1 + 0x1acc),
                  *(unsigned int *)(param_1 + 0x84c));
    fn_82E85448(param_1,uStack_70,aiStack_6c[0] == 7);
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x6e08) -
            (__int64)
            ((int)(*(int *)(param_1 + 0x854) * *(int *)(param_1 + 0x850) *
                  *(unsigned int *)(param_1 + 0x6e08)) >> 8)) - 1;
    fn_82F0DB60(param_1);
    fn_82F0DC50(param_1,((uVar3 & 0xffffffff) >> 0x1f) - 1 & uVar3);
  }
  if (in_stack_0000005c == 0) {
    fn_82F0D688(param_1,1);
  }
  fn_82E8E7A8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (in_stack_0000005c == 0) {
    *(unsigned int *)(param_1 + 0xaf4) = *param_6;
  }
  else {
    *(unsigned int *)(param_1 + 0xaf8) = *param_6;
    if (in_stack_0000005c == 1) {
      fn_82F0D688(param_1,0);
    }
  }
  *param_8 = (0x27U - *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10) >> 3) +
             *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
  return;
}

