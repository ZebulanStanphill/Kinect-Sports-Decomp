extern unsigned int *auStack_70;
extern int fn_829D4B80();
extern int fn_829DCFB0();
extern unsigned int iStack_74;


void fn_829DCF18(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int aiStack_80;
  int iStack_74;
  unsigned char auStack_70 [88];
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x9c90);
  if (uVar1 < 0x15) {
    iVar2 = 0;
    if (0 < (int)*(unsigned int *)(param_1 + 0x9c90)) {
      piVar3 = &iStack_74;
      uVar4 = uVar1;
      do {
        piVar3 = piVar3 + 1;
        *piVar3 = iVar2;
        iVar2 = iVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    aiStack_80 = param_1;
    fn_829DCFB0(uVar1,0x14,&aiStack_80,auStack_70);
    uVar1 = 0x14;
  }
  fn_829D4B80(param_2,param_1,uVar1,auStack_70);
  return;
}

