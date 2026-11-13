extern unsigned int *auStack_1c;
extern int fn_830352D0();
extern int fn_830360F0();


unsigned __int64 fn_830358C8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piStack_20;
  unsigned char auStack_1c [4];
  
  uVar1 = 0x10;
  for (piStack_20 = *(int **)(param_1 + 0x10);
      (piStack_20 != *(int **)(param_1 + 0x14) && (*piStack_20 != param_2));
      piStack_20 = piStack_20 + 6) {
  }
  if (piStack_20 != *(int **)(param_1 + 0x14)) {
    uVar1 = fn_830352D0(piStack_20 + 1,param_1);
    fn_830360F0(auStack_1c,param_1 + 0x10,&piStack_20);
  }
  return uVar1;
}

