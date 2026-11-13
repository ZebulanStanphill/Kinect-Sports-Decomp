#define true 1
extern unsigned int fStack_34;
extern int fn_82773E60();
extern int fn_827A0BD0();
extern int fn_827A8770();


unsigned __int64 fn_827A1F10(int param_1)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int aiStack_40 [3];
  float fStack_34;
  unsigned char bStack_30;
  
  fn_827A0BD0();
  uVar1 = fn_827A8770(param_1 + 0x24);
  uVar3 = 0;
  bStack_30 = *(unsigned char *)(param_1 + 0x98) >> 2 & 1;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  aiStack_40[1] = 0;
  fStack_34 = -(float)uVar1;
  aiStack_40[0] = param_1 + 0x24;
  do {
    aiStack_40[2] = (int)uVar4;
    do {
      cVar2 = fn_82773E60(aiStack_40);
      if (cVar2 == '\0') {
        return uVar3;
      }
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
    } while ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) <= (uVar4 & 0xffffffff));
    uVar4 = uVar4 + 1;
  } while( true );
}

