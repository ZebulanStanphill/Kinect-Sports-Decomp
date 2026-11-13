extern int fn_82F1C150();
extern int fn_82F1C568();


void fn_82F1C5D0(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  uVar1 = *(unsigned int *)(param_3 + 0x60);
  uVar2 = *(unsigned int *)(param_1 + 0x6d24);
  if (*(int *)(param_1 + 0xa0c) == 0) {
    uVar4 = (unsigned __int64)in_stack_0000005c + 0x80;
  }
  else {
    uVar4 = (unsigned __int64)in_stack_0000005c;
  }
  uVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x6f88) != *(int *)(param_1 + 0x6f8c)) {
      fn_82F1C568(uVar4,((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)(uVar5 & 2) +
                             ((unsigned __int64)uVar5 & 1) * 2 & 0x3fffffff) * 4 + param_6);
    }
    fn_82F1C150(param_1);
    if (((*(int *)(param_1 + 0x6f88) != 0) && (*(int *)(param_1 + 0x6f8c) != 0)) &&
       (*(int *)(param_1 + 0xa0c) == 0)) {
      fn_82F1C568(uVar4);
    }
    uVar5 = uVar5 + 1;
    uVar4 = uVar4 + 0x100;
  } while ((int)uVar5 < 4);
  iVar6 = 4;
  do {
    if (*(int *)(param_1 + 0x6f88) != *(int *)(param_1 + 0x6f8c)) {
      fn_82F1C568(uVar4);
    }
    if (param_2 == 0) {
      puVar3 = (unsigned int *)(param_1 + 0x938);
      if (iVar6 != 4) {
        puVar3 = (unsigned int *)(param_1 + 0x940);
      }
    }
    else {
      puVar3 = (unsigned int *)(param_1 + 0x958);
      if (iVar6 != 4) {
        puVar3 = (unsigned int *)(param_1 + 0x964);
      }
    }
    fn_82F1C150(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_00000054,
                      in_stack_00000064,uVar4,(unsigned __int64)uVar1 * 0x34 + (unsigned __int64)uVar2,
                      (param_4 & 0xfffffff) * 0x10 + (unsigned __int64)*puVar3);
    if (((*(int *)(param_1 + 0x6f88) != 0) && (*(int *)(param_1 + 0x6f8c) != 0)) &&
       (*(int *)(param_1 + 0xa0c) == 0)) {
      fn_82F1C568(uVar4);
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + 0x100;
    param_7 = param_8;
  } while (iVar6 < 6);
  return;
}

