extern unsigned int *auStack_20;
extern int fn_82814D10();
extern int fn_828184A8();
extern int fn_82820EF8();
extern int fn_82F65390();


unsigned __int64 fn_828220E0(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int auStack_20 [2];
  
  iVar2 = fn_82F65390(*(unsigned int *)(param_1 + 0x1c),0xffffffff8201ebe0,4);
  if (iVar2 == 0) {
    iVar2 = fn_82F65390((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 4,0xffffffff8201ebe8,0xd);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x20) == 0) ||
         (iVar2 = fn_82F65390((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 4,
                               (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x1c) + 0x14,0xd),
         iVar2 == 0)) {
        auStack_20[0] = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x20);
        iVar2 = fn_82814D10(param_1);
        if (iVar2 != 0) {
          fn_82820EF8(auStack_20,4);
        }
        *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x20) = 0;
        uVar3 = fn_828184A8(*(unsigned int *)(param_1 + 0x1c),0x80);
        if (uVar3 == auStack_20[0]) {
          *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x20) = auStack_20[0];
          iVar2 = fn_82814D10(param_1);
          if (iVar2 != 0) {
            fn_82820EF8(auStack_20,4);
          }
          uVar1 = 0;
        }
        else {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

