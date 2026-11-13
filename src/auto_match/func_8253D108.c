#define true 1
extern int fn_825269D0();
extern int fn_8253C720();
extern int fn_8257C8F0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8253D108(int *param_1,int param_2)

{
  int lVar1;
  unsigned int *piVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  if ((*(int *)(param_2 + 0x1f8) != 0) && (param_1[0x3c] == 0)) {
    param_1[0x3c] = 1;
    while( true ) {
      piVar2 = (int *)fn_82599308();
      if (*piVar2 == 0) break;
      fn_82A1BB18();
      lVar1 = fn_8259A230();
      fn_825269D0(lVar1 + 0x23,0);
    }
    fn_8253C720(param_1[8],param_2);
    if (*param_1 != 0) {
      stack_pair_20.first = 0x3d;
      stack_pair_20.second = 8;
      fn_8257C8F0(param_2,&stack_pair_20.first);
      *param_1 = 0;
    }
  }
  return;
}

