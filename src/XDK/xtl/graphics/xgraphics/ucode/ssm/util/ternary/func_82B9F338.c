extern int fn_82AB15D0();


unsigned __int64 fn_82B9F338(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)0x0;
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dddb8,0xffffffff820dddc0,0x2ab);
  }
  puVar1 = (unsigned int *)*param_1;
  puVar2 = param_3;
  if (puVar1 != (unsigned int *)0x0) {
    while (puVar2 != (unsigned int *)0x0) {
      if (*param_2 == *puVar1) {
        puVar3 = (unsigned int *)((int)puVar3 + 1);
        puVar1 = (unsigned int *)puVar1[3];
        param_2 = param_2 + 1;
        puVar2 = puVar1;
        if (puVar3 == param_3) {
          *param_4 = (unsigned int)puVar1;
          return 1;
        }
      }
      else if (*param_2 < *puVar1) {
        puVar1 = (unsigned int *)puVar1[1];
        puVar2 = puVar1;
      }
      else {
        puVar1 = (unsigned int *)puVar1[2];
        puVar2 = puVar1;
      }
    }
  }
  return 0;
}

