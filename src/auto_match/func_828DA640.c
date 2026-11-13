extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_828AD740();
extern int fn_828AFF00();
extern int fn_828AFF88();
extern int fn_828BE158();
extern int fn_828DA5D8();


unsigned __int64 fn_828DA640(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    cVar3 = fn_828AD740(*(unsigned int *)(param_1 + 0x6c));
    if (cVar3 == '\0') {
      fn_828AFF88((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0x278);
      fn_828AFF00((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0x278,
                        (((*(__int64 *)(param_1 + 0x90) - *(__int64 *)(param_1 + 0x88)) / 2 +
                         *(__int64 *)(param_1 + 0xa8)) - *(__int64 *)(param_1 + 0x90)) * 1000);
    }
  }
  else {
    uVar1 = fn_8265C9E0(0xb0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828DA5D8(uVar1,*(unsigned int *)(param_1 + 0x6c),param_1);
    }
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    fn_828BE158(*(unsigned int *)(param_1 + 0x6c),uVar2,*(unsigned int *)(param_1 + 0x18),0);
  }
  return 1;
}

