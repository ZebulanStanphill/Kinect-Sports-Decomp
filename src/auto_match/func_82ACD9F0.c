extern int fn_82ACC5D8();
extern int fn_82ACD310();
extern int fn_82ACD3D8();


unsigned __int64 fn_82ACD9F0(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  uVar4 = uVar1;
  do {
    if (uVar4 == 0) {
      return 1;
    }
    lVar2 = fn_82ACD3D8(param_1);
    uVar4 = *(unsigned int *)(param_1 + 0x3c);
  } while (lVar2 == 0);
  if (uVar4 != uVar1) {
    do {
      uVar4 = *(unsigned int *)((*(unsigned int *)(param_1 + 0x3c) & 0xfffffffe) + 0x28);
      uVar4 = -(unsigned int)((uVar4 & 1) == 0) & uVar4;
      fn_82ACC5D8(param_1,*(unsigned int *)(param_1 + 0x3c),
                    (lVar2 + -2) - (lVar2 + -3 + (unsigned __int64)(lVar2 + -2 == 0)));
      *(unsigned int *)(param_1 + 0x3c) = uVar4;
    } while (uVar4 != uVar1);
  }
  if (((int)lVar2 == 2) &&
     (iVar3 = fn_82ACD310(param_1,*(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x1c)),
     iVar3 == *(int *)(param_1 + 0x3c))) {
    *(unsigned char *)(param_1 + 0x48) = 0;
  }
  return 0;
}

