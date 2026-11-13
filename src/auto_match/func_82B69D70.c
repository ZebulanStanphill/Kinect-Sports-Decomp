extern int fn_82B6AF00();
extern int fn_82B6AF78();
extern int fn_82B7F370();


void fn_82B69D70(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    fn_82B7F370(*(unsigned int *)(param_1 + 0x114));
    fn_82B6AF00(*(unsigned int *)(param_1 + 0x10c),*(unsigned int *)(param_1 + 0x110));
    fn_82B6AF78(*(unsigned int *)(param_1 + 0x10c),param_1);
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 8));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0xc));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x14));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x18));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x1c));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x20));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x24));
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0x28));
    puVar1 = (unsigned int *)(param_1 + 0x28);
    lVar2 = 6;
    do {
      puVar1 = puVar1 + 1;
      (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),*puVar1);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar3 = param_1 + 0x128;
    lVar2 = 5;
    do {
      if (*(int *)(iVar3 + 0x10) != 0) {
        (**(int (***)())(param_1 + 0xc4))(*(unsigned int *)(param_1 + 0xb4),iVar3);
      }
      lVar2 = lVar2 + -1;
      iVar3 = iVar3 + 0x20;
    } while (lVar2 != 0);
    (**(int (***)())(param_1 + 0xbc))(*(unsigned int *)(param_1 + 0xb4),param_1);
  }
  return;
}

