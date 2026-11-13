extern int fn_82F87C88();


unsigned __int64 fn_82F82330(unsigned __int64 param_1,char *param_2)

{
  char cVar1;
  __int64 lVar2;
  int iVar3;
  char *pcVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  
  pcVar5 = param_2;
  if (param_2[1] == ':') {
    pcVar5 = param_2 + 2;
  }
  cVar1 = *pcVar5;
  if ((((cVar1 == '\\') || (cVar1 == '/')) && (pcVar5[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (cVar1 == '\0')))) {
    uVar4 = 0x4040;
  }
  else {
    uVar4 = 0x8000;
  }
  uVar4 = (~(param_1 & 0xff) & 1) << 7 | uVar4;
  uVar6 = uVar4 | 0x100;
  lVar2 = thunk_FUN_82f6a4b0(param_2,0x2e);
  if ((lVar2 != 0) &&
     (((iVar3 = fn_82F87C88(lVar2,0xffffffff8216aab0), iVar3 == 0 ||
       (iVar3 = fn_82F87C88(lVar2,0xffffffff8216aaa8), iVar3 == 0)) ||
      ((iVar3 = fn_82F87C88(lVar2,0xffffffff8216aaa0), iVar3 == 0 ||
       (iVar3 = fn_82F87C88(lVar2,0xffffffff8216aa98), iVar3 == 0)))))) {
    uVar6 = uVar4 | 0x140;
  }
  return uVar6 >> 6 & 7 | uVar6 >> 3 & 0x38 | uVar6;
}

