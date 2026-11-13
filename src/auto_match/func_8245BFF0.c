extern int fn_82459C60();
extern int fn_8245CBE0();
extern int fn_82A1E108();


void fn_8245BFF0(int param_1,unsigned __int64 param_2)

{
  *(int *)(param_1 + 0x580) = (int)param_2;
  fn_82A1E108(100);
  if ((*(int *)(param_1 + 0x574) == 0) && (*(int *)(param_1 + 0x578) == 0)) {
    if (*(int *)(param_1 + 0x570) != 0) {
      if (*(int *)(param_1 + 0x6b0) == 2) {
        RtlEnterCriticalSection(param_1);
        (**(int (***)())(**(int **)(param_1 + 0x570) + 0x28))
                  (*(int **)(param_1 + 0x570),*(unsigned int *)(param_1 + 0x71c),param_2);
        *(unsigned int *)(param_1 + 0x6b0) = 0;
        RtlLeaveCriticalSection(param_1);
      }
      else {
        *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + 1;
      }
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x578) = 0;
    *(unsigned int *)(param_1 + 0x57c) = 0;
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  fn_82459C60(param_1 + 0x40);
  fn_8245CBE0(param_1);
  return;
}

