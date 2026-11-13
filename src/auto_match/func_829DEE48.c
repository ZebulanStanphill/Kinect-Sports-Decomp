extern unsigned int *auStack_50;
extern int fn_829DE7F0();
extern int memcpy();
extern unsigned int iStack_54;


void fn_829DEE48(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int aiStack_60 [3];
  int iStack_54;
  unsigned char auStack_50 [16];
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6f40);
  if (uVar1 < 0xb) {
    iVar2 = 0;
    if (0 < (int)*(unsigned int *)(param_1 + 0x6f40)) {
      piVar3 = &iStack_54;
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
    aiStack_60[0] = param_1;
    fn_829DE7F0(uVar1,10,aiStack_60,auStack_50);
    uVar1 = 10;
  }
  *(int *)(param_2 + 0x37a0) = (int)uVar1;
  if (uVar1 != 0) {
    piVar3 = &iStack_54;
    do {
      piVar3 = piVar3 + 1;
      memcpy(param_2,*piVar3 * 0x590 + param_1,0x590);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x590;
    } while (uVar1 != 0);
  }
  return;
}

