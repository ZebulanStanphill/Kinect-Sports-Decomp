typedef unsigned char bool;
#define true 1


unsigned __int64 fn_825363A4(int param_1)

{
  int *piVar1;
  int *in_r8;
  int *in_r10;
  int *piVar2;
  unsigned char in_cr6;
  
  while( true ) {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0;
    }
    piVar1 = *(int **)(*in_r10 + 0x28);
    for (piVar2 = *(int **)(*in_r10 + 0x24); (piVar2 != piVar1 && (*piVar2 != param_1));
        piVar2 = piVar2 + 1) {
    }
    if (piVar2 != piVar1) break;
    in_r10 = in_r10 + 1;
    in_cr6 = (in_r10 == in_r8) << 1;
  }
  return 1;
}

