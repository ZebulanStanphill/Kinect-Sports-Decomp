extern unsigned int *auStack_20;
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_827A5058();


unsigned int fn_827A52B0(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0x144;
  uVar1 = fn_8267BED0(param_1,0xc4,auStack_20);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_827A5058(uVar1,param_1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_8267C498();
  }
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  return uVar2;
}

