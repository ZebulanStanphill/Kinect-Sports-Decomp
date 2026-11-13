extern unsigned int *auStack_40;
extern int fn_82F513C0();
extern int fn_82F52428();


unsigned __int64 fn_824A2558(int param_1)

{
  int iVar1;
  int aiStack_50 [4];
  unsigned char auStack_40 [48];
  
  iVar1 = fn_82F513C0();
  if (iVar1 != 0) {
    aiStack_50[0] = 1;
    fn_82F52428(param_1,0,auStack_40,aiStack_50,0);
    if ((aiStack_50[0] != 1) && (*(float *)(param_1 + 0xc) == 0.0f)) {
      return 1;
    }
  }
  return 0;
}

