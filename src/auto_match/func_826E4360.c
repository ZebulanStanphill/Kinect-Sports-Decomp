#define true 1
extern int fn_8267BE38();
extern int fn_8267C4F0();


void fn_826E4360(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(int (***)())(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0xc))
                            (*(int *)(param_1 + 0x14) + 8,0x17);
  if (piVar2 != (int *)0x0) {
    RtlEnterCriticalSection(param_1 + 0x24);
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x20);
      if (piVar1 == (int *)(param_1 + 0x1c)) break;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      (**(int (***)())(*piVar2 + 8))(piVar2,piVar1[2]);
      fn_8267BE38(piVar1);
    }
    RtlLeaveCriticalSection(param_1 + 0x24);
    fn_8267C4F0(piVar2);
  }
  return;
}

