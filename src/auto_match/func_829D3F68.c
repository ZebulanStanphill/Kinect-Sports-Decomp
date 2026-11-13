extern int fn_82A1DDC0();


void fn_829D3F68(int param_1,int param_2,int param_3)

{
  fn_82A1DDC0(param_3,(__int64)param_1 * (__int64)*(int *)(param_2 + 4) +
                            (unsigned __int64)*(unsigned int *)(param_2 + 8) + (unsigned __int64)*(unsigned int *)(param_2 + 0x10)
                    ,2000);
  if (*(unsigned int *)(param_2 + 0xc) == 0xffffffff) {
    *(unsigned int *)(param_3 + 2000) = 0;
  }
  else {
    fn_82A1DDC0(param_3 + 2000,
                      (__int64)param_1 * (__int64)*(int *)(param_2 + 4) +
                      (unsigned __int64)*(unsigned int *)(param_2 + 0xc) + (unsigned __int64)*(unsigned int *)(param_2 + 0x10),4);
  }
  return;
}

