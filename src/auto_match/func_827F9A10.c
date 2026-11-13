extern int fn_827F7210();
extern int fn_827F98C8();


__int64 fn_827F9A10(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int aiStack_30;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -1;
  }
  else {
    uVar2 = fn_827F7210(param_1);
    uVar4 = 0;
    uVar3 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        fn_827F98C8(param_1,uVar4,&aiStack_30);
        if (uVar3 < *(unsigned char *)(aiStack_30 + 0x32)) {
          uVar3 = (unsigned __int64)*(unsigned char *)(aiStack_30 + 0x32);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (uVar2 & 0xffff));
    }
    lVar1 = uVar3 + 1;
  }
  return lVar1;
}

