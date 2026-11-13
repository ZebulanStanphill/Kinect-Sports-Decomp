extern int memcpy();


void fn_82ED5AA0(unsigned __int64 param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, unsigned __int64 unused_arg_11, int in_stack_0000006c, unsigned int in_stack_00000074, int in_stack_0000007c, unsigned int in_stack_00000084, int in_stack_0000008c)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;






  
  if (in_stack_0000008c == 0) {
    uVar4 = (unsigned __int64)in_stack_00000074;
    if (0 < (int)in_stack_00000074) {
      do {
        memcpy(param_2,param_5,param_8);
        uVar4 = uVar4 - 1;
        param_5 = param_5 + in_stack_0000006c;
        param_2 = param_2 + param_8;
      } while (uVar4 != 0);
    }
    uVar5 = (unsigned __int64)in_stack_00000084;
    uVar4 = uVar5;
    if (0 < (int)in_stack_00000084) {
      do {
        memcpy(param_3,param_6,in_stack_0000005c);
        uVar4 = uVar4 - 1;
        param_6 = param_6 + in_stack_0000007c;
        param_3 = param_3 + in_stack_0000005c;
      } while (uVar4 != 0);
    }
    if (0 < (int)in_stack_00000084) {
      do {
        memcpy(param_4,param_7,in_stack_0000005c);
        uVar5 = uVar5 - 1;
        param_7 = param_7 + in_stack_0000007c;
        param_4 = param_4 + in_stack_0000005c;
      } while (uVar5 != 0);
    }
  }
  else {
    uVar4 = (unsigned __int64)in_stack_00000074;
    iVar1 = param_2 + param_8 + -1;
    if (0 < (int)in_stack_00000074) {
      do {
        if (param_8 != 0) {
          puVar2 = (unsigned char *)(iVar1 + 1);
          puVar3 = (unsigned char *)(param_5 + -1);
          iVar6 = param_8;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar4 = uVar4 - 1;
        param_5 = param_5 + in_stack_0000006c;
        iVar1 = iVar1 + param_8;
      } while (uVar4 != 0);
    }
    uVar5 = (unsigned __int64)in_stack_00000084;
    iVar1 = param_3 + in_stack_0000005c + -1;
    uVar4 = uVar5;
    if (0 < (int)in_stack_00000084) {
      do {
        if (in_stack_0000005c != 0) {
          puVar2 = (unsigned char *)(iVar1 + 1);
          puVar3 = (unsigned char *)(param_6 + -1);
          iVar6 = in_stack_0000005c;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar4 = uVar4 - 1;
        param_6 = param_6 + in_stack_0000007c;
        iVar1 = iVar1 + in_stack_0000005c;
      } while (uVar4 != 0);
    }
    iVar1 = param_4 + in_stack_0000005c + -1;
    if (0 < (int)in_stack_00000084) {
      do {
        if (in_stack_0000005c != 0) {
          puVar2 = (unsigned char *)(iVar1 + 1);
          puVar3 = (unsigned char *)(param_7 + -1);
          iVar6 = in_stack_0000005c;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar5 = uVar5 - 1;
        param_7 = param_7 + in_stack_0000007c;
        iVar1 = iVar1 + in_stack_0000005c;
      } while (uVar5 != 0);
    }
  }
  return;
}

