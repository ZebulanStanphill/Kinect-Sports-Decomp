extern int fn_82A1BFB8();


unsigned __int64 fn_828EA368(unsigned __int64 param_1,unsigned char param_2)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  int aiStack_10;
  
  if (param_2 == '\0') {
    return 0;
  }
  aiStack_10 = 0;
  iVar2 = fn_82A1BFB8(param_1,0xfe,&aiStack_10);
  if ((iVar2 != 0) || (uVar1 = 2, aiStack_10 == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

