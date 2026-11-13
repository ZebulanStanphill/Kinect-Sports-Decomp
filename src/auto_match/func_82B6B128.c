#define true 1
extern int fn_82AB15D0();
extern int fn_82B6B008();


unsigned int * fn_82B6B128(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)0x0;
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d9770,0xb2);
  }
LAB_82b6b174:
  do {
    if (param_1 == (unsigned int *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d9770,0xba);
      return (unsigned int *)0x0;
    }
    piVar2 = param_1 + 6;
    if (param_1[6] == 0) {
      do {
        puVar1 = (unsigned int *)param_1[7];
        if (puVar1 == (unsigned int *)0x0) break;
        piVar2 = puVar1 + 6;
        param_1 = puVar1;
      } while (puVar1[6] == 0);
      if (*piVar2 != 0) goto LAB_82b6b174;
      puVar1 = (unsigned int *)fn_82B6B008(param_1[5],param_1[4],*param_1,param_1[1],param_1[2]);
      param_1[7] = puVar1;
      param_1 = puVar1;
    }
    else {
      puVar3 = *(unsigned int **)param_1[3];
      *(unsigned int *)param_1[3] = *puVar3;
    }
    if (puVar3 != (unsigned int *)0x0) {
      param_1[6] = param_1[6] + -1;
      return puVar3;
    }
  } while( true );
}

