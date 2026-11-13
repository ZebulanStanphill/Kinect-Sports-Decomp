extern int fn_828D8A88();
extern __int64 fn_828D8A98();
extern int fn_828D8AB0();


__int64 fn_828AEF00(int param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  int uVar3;
  __int64 lVar4;
  unsigned int iVar5;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x97) != '\0') {
    lVar4 = 0;
    for (iVar5 = *(int *)(param_1 + 0x9c); iVar5 != *(int *)(param_1 + 0xa0); iVar5 = iVar5 + 0xc) {
      if (*(char *)(iVar5 + 4) == '\0') {
        lVar4 = lVar4 + 1;
      }
      else {
        lVar1 = lVar1 + 1;
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar5 + 8) + lVar4;
      }
    }
    uVar2 = fn_828D8A88(lVar1,(unsigned __int64)*(unsigned int *)(param_1 + 0xac) + lVar4);
    uVar3 = fn_828D8AB0(*(unsigned int *)(param_1 + 0x98));
    if (uVar2 >= (unsigned)uVar3) {
      lVar1 = 0;
    }
    else {
      lVar1 = fn_828D8A98(uVar3 - uVar2);
    }
  }
  return lVar1;
}

