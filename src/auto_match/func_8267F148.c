extern int fn_8267C8D8();
extern int fn_8267CB08();
extern int fn_8267CB10();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


unsigned __int64 fn_8267F148(int param_1,__int64 param_2)

{
  int iVar1;
  int aiStack_30 [12];
  
  iVar1 = (int)param_2;
  if (iVar1 != 0) {
    fn_8267C8D8(param_1 + 0x18);
    if ((__int64)((unsigned __int64)*(unsigned int *)(param_1 + 0x14) - param_2) < 0) {
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    else {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar1;
    }
    if (iVar1 == 1) {
      fn_8267CB08();
    }
    else {
      fn_8267CB10(param_1 + 0x2c);
    }
    aiStack_30[0] = 0;
    fn_8267D7C8(param_1,aiStack_30);
    fn_8267D9C0(param_1 + 0x18);
    iVar1 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      fn_8267ECD0(aiStack_30[0]);
      fn_8267EC58(iVar1);
    }
  }
  return 1;
}

