extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDF8B8();
extern int fn_82F456C0();


int * fn_82F17960(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                   unsigned __int64 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)fn_8265C940(0x3980,0x248c8000);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
    *param_1 = 1;
  }
  else {
    piVar1[0xe44] = -1;
    piVar1[0xe42] = 0;
    piVar1[0xe41] = 0;
    piVar1[0xe43] = -1;
    fn_82EDF8B8();
    fn_82F456C0(param_1,param_2,param_3,piVar1,param_4,param_5);
    if (*param_1 != 0) {
      if (*piVar1 != 0) {
        fn_8265C990(*piVar1,0x248c8000);
        *piVar1 = 0;
      }
      if (piVar1[1] != 0) {
        fn_8265C990(piVar1[1],0x248c8000);
        piVar1[1] = 0;
      }
      fn_8265C990(piVar1,0x248c8000);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

