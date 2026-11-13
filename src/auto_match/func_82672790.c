extern int fn_8266F6B8();
extern int fn_82829120();
extern int fn_828313D0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_82672790(int param_1,int param_2)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  int iStack0000001c;
  int aiStack_20 [2];
  
  iStack0000001c = param_2;
  iVar2 = fn_8266F6B8();
  if (param_2 == iVar2) {
    uVar1 = 0;
  }
  else {
    fn_82829120(aiStack_20,param_1 + 100,&stack0x0000001c);
    if (aiStack_20[0] == *(int *)(param_1 + 0x68)) {
      puVar3 = (unsigned int *)fn_828313D0(param_1 + 100,&stack0x0000001c);
      *puVar3 = 1;
    }
    else {
      *(int *)(aiStack_20[0] + 0x10) = *(int *)(aiStack_20[0] + 0x10) + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

