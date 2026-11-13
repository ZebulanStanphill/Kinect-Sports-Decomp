extern unsigned int *auStack_40;
extern int fn_828647C0();
extern int fn_82878538();


unsigned __int64 fn_82877D00(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char cVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned char auStack_40 [16];
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  for (uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 4); (uVar4 & 0xffffffff) != (unsigned __int64)uVar1;
      uVar4 = uVar4 + 0x30) {
    cVar3 = fn_828647C0(uVar4 + 4,param_2);
    if (cVar3 != '\0') break;
  }
  if ((uVar4 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 8)) {
    uVar2 = 0xffffffffa0320000;
  }
  else {
    fn_82878538(auStack_40,param_1 + 4,uVar4);
    uVar2 = 0x20320000;
  }
  return uVar2;
}

