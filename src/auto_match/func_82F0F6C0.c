void fn_82F0F6C0(int param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = *(unsigned int *)(param_2 + 0xb4);
  uVar4 = (unsigned __int64)uVar1;
  uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0xbc);
  if (*(int *)(param_1 + 0xa0c) != 0) {
    if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) != 0)) {
      if ((int)*(unsigned int *)(param_1 + 0x338) < (int)uVar1) {
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x33c);
        uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x338);
      }
    }
    else if (*(int *)(param_1 + 0x338) < (int)(uVar1 << 1)) {
      uVar3 = (unsigned __int64)(*(int *)(param_1 + 0x33c) >> 1);
      uVar4 = (__int64)(*(int *)(param_1 + 0x338) >> 1);
    }
  }
  (**(int (***)())(param_1 + 0x1ffc))
            (*(unsigned int *)(param_1 + 0x4ed8),*(unsigned int *)(param_2 + 0xb0),uVar4,
             *(unsigned int *)(param_2 + 200),*(int *)(param_2 + 4) == 0,
             *(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),*(unsigned int *)(param_1 + 0x330)
             ,*(unsigned int *)(param_1 + 0x54c));
  if (*(int *)(param_1 + 0x344) != 0) {
    (**(int (***)())(param_1 + 0x2000))
              (*(unsigned int *)(param_1 + 0x4edc),*(unsigned int *)(param_1 + 0x4ee0),
               *(unsigned int *)(param_2 + 0xb8),uVar3,*(unsigned int *)(param_2 + 0xcc),
               *(int *)(param_2 + 4) == 0,*(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
               *(unsigned int *)(param_1 + 0x334));
  }
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) {
    (**(int (***)())(param_1 + 0x1ffc))
              ((__int64)(*(int *)(param_1 + 0x564) >> 1) + (unsigned __int64)*(unsigned int *)(param_1 + 0x4ed8),
               *(unsigned int *)(param_2 + 0xb0),uVar4,*(unsigned int *)(param_2 + 200),
               *(int *)(param_2 + 4) == 0,*(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
               *(unsigned int *)(param_1 + 0x330),*(unsigned int *)(param_1 + 0x54c));
    if (*(int *)(param_1 + 0x344) != 0) {
      lVar2 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
      (**(int (***)())(param_1 + 0x2000))
                ((unsigned __int64)*(unsigned int *)(param_1 + 0x4edc) + lVar2,
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x4ee0) + lVar2,*(unsigned int *)(param_2 + 0xb8),
                 uVar3,*(unsigned int *)(param_2 + 0xcc),*(int *)(param_2 + 4) == 0,
                 *(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
                 *(unsigned int *)(param_1 + 0x334));
    }
  }
  return;
}

