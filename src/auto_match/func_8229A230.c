extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8229A230(unsigned int *param_1)

{
  double dVar1;
  struct { unsigned first,second; double number; } stack_pair_30;

  double dStack_28;
  
  if (((int)param_1[0x48a] == 0) || ((int)param_1[0x483] != 1)) {
    if ((int)param_1[0x48a] != 0) {
      stack_pair_30.first = 0;
      stack_pair_30.second = 0;
      dVar1 = (double)(unsigned int)param_1[2];
      fn_82273CD8(&stack_pair_30.first,3);
      stack_pair_30.number = dVar1;
      fn_82672C20(*param_1,"_root.mainCtrl.destroyCaption",&stack_pair_30.first,1);
      fn_82273C88(&stack_pair_30.first);
    }
    param_1[0x483] = 0;
    param_1[0x489] = 0;
    param_1[0x488] = 0;
    param_1[0x48a] = 0;
    param_1[0x48b] = 0;
  }
  else {
    param_1[0x483] = 2;
  }
  return;
}

