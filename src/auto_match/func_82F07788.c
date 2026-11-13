extern int fn_82F04110();
extern int fn_82F27B98();
extern int memcpy();


void fn_82F07788(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  if ((((*(int *)(param_1 + 0x5268) != 0) && (*(int *)(param_1 + 0xaf0) != 2)) &&
      ((*(int *)(param_1 + 0x76b8) == 0 || (*(int *)(param_1 + 0x76bc) == 0)))) &&
     (iVar3 = fn_82F04110(param_1), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x1eb8) == 0) {
      *(unsigned int *)(param_1 + 0x76bc) = 1;
    }
    uVar1 = *(unsigned int *)(param_1 + 0x564);
    if (*(int *)(param_1 + 4) == 8) {
      memcpy((unsigned __int64)*(unsigned int *)(param_1 + 0x5278) + ((unsigned __int64)uVar1 & 0x1fffffff) * -8,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + ((unsigned __int64)uVar1 & 0x1fffffff) * -8,
                   (__int64)(*(int *)(param_1 + 0x56c) + 0x10) * (__int64)(int)uVar1);
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x3fffffff;
      memcpy((unsigned __int64)*(unsigned int *)(param_1 + 0x527c) + uVar2 * -4,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + uVar2 * -4,
                   (__int64)(*(int *)(param_1 + 0x570) + 8) *
                   (__int64)(int)*(unsigned int *)(param_1 + 0x568));
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x3fffffff;
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + uVar2 * -4;
      lVar5 = (__int64)(*(int *)(param_1 + 0x570) + 8) * (__int64)(int)*(unsigned int *)(param_1 + 0x568);
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5280) + uVar2 * -4;
    }
    else {
      memcpy(*(unsigned int *)(param_1 + 0x5278),*(unsigned int *)(param_1 + 0x14),
                   (__int64)*(int *)(param_1 + 0x56c) * (__int64)(int)uVar1);
      memcpy(*(unsigned int *)(param_1 + 0x527c),*(unsigned int *)(param_1 + 0x18),
                   (__int64)*(int *)(param_1 + 0x570) * (__int64)*(int *)(param_1 + 0x568));
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5280);
      lVar5 = (__int64)*(int *)(param_1 + 0x570) * (__int64)*(int *)(param_1 + 0x568);
    }
    memcpy(uVar2,uVar4,lVar5);
    fn_82F27B98(param_1);
    (**(int (***)())(param_1 + 0x1bac))
              (*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x564),
               *(unsigned int *)(param_1 + 0x564),*(unsigned int *)(param_1 + 0x1a94),param_2,
               *(unsigned int *)(param_1 + 0x56c));
  }
  return;
}

