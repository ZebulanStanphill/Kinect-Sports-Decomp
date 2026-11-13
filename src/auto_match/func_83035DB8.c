extern int fn_83007E90();
extern int fn_830195D8();
extern int fn_83035960();
extern int fn_83036218();
extern int fn_830362B8();


unsigned __int64 fn_83035DB8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x10);
      (puVar1 != *(unsigned int **)(param_1 + 0x14) && ((unsigned __int64)*puVar1 != (param_2 & 0xffffffff)));
      puVar1 = puVar1 + 6) {
  }
  if (puVar1 == *(unsigned int **)(param_1 + 0x14)) {
    puVar1 = (unsigned int *)fn_83036218(param_1 + 0x10,param_2);
    if (puVar1 == (unsigned int *)0x0) {
      return 0x34;
    }
    *puVar1 = (unsigned int)param_2;
    uVar2 = fn_83035960(puVar1,param_1);
    if ((int)uVar2 != 1) {
      fn_830362B8(param_1 + 0x10,param_2);
      return uVar2;
    }
  }
  else {
    puVar1 = puVar1 + 1;
    uVar2 = 1;
  }
  if ((param_4 & 0xffffffff) == 0) {
    fn_83007E90(puVar1 + 2);
  }
  else {
    uVar2 = fn_830195D8(puVar1 + 2,param_3,param_4,1);
  }
  if ((int *)puVar1[1] != (int *)0x0) {
    (**(int (***)())(*(int *)puVar1[1] + 0x50))();
  }
  return uVar2;
}

