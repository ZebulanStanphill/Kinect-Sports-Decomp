extern int fn_82F1BEF0();


void fn_82F1C3A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  __int64 lVar4;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  uVar1 = fn_82F1BEF0(param_1,in_stack_0000005c,param_2,param_3,param_8,in_stack_00000054,
                            param_7,*(unsigned int *)(param_1 + 0x2030));
  (**(int (***)())(param_1 + 0x1f98))(param_6,param_7,8,uVar1);
  if (in_stack_0000006c != 0) {
    puVar3 = (unsigned short *)(param_6 + -2);
    puVar2 = (unsigned short *)(in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0xe);
    lVar4 = 8;
    puVar2 = (unsigned short *)(in_stack_00000074 * 2 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x1e);
    puVar2 = (unsigned short *)(in_stack_00000074 * 4 + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x2e);
    lVar4 = 8;
    puVar2 = (unsigned short *)(in_stack_00000074 * 6 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x3e);
    puVar2 = (unsigned short *)(in_stack_00000074 * 8 + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x4e);
    lVar4 = 8;
    puVar2 = (unsigned short *)(in_stack_00000074 * 10 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x5e);
    lVar4 = 8;
    puVar2 = (unsigned short *)(in_stack_00000074 * 0xc + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned short *)(param_6 + 0x6e);
    puVar2 = (unsigned short *)(in_stack_00000074 * 0xe + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(int (***)())(param_1 + 0x1fb4))(param_1,param_4,param_6,param_5,8);
  return;
}

