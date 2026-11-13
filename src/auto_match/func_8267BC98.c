extern int fn_8267BB48();
extern unsigned int lbl_831E7E60;


void fn_8267BC98(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  
  do {
    piVar3 = (int *)param_1[0xe];
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)(lbl_831E7E60 + 0x2c4);
      RtlEnterCriticalSection(piVar4);
      param_1[3] = param_1[3] + -1;
      param_1 = piVar3;
    }
    else {
      piVar4 = piVar3 + 0x12;
      RtlEnterCriticalSection(piVar4);
      uVar2 = (unsigned __int64)lbl_831E7E60;
      RtlEnterCriticalSection(uVar2 + 0x2c4);
      uVar1 = param_1[3];
      param_1[3] = (int)((unsigned __int64)uVar1 - 1);
      if ((unsigned __int64)uVar1 - 1 == 0) {
        *(int *)(*param_1 + 4) = param_1[1];
        *(int *)param_1[1] = *param_1;
        fn_8267BB48(lbl_831E7E60,param_1);
      }
      else {
        piVar3 = (int *)0x0;
      }
      RtlLeaveCriticalSection(uVar2 + 0x2c4);
      param_1 = piVar3;
    }
    RtlLeaveCriticalSection(piVar4);
  } while (param_1 != (int *)0x0);
  return;
}

