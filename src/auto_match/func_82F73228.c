extern int fn_82F72A00();
extern int fn_82F72DD0();


int * fn_82F73228(int *param_1,int *param_2)

{
  if ((int)(param_1[1] & 0xff000000U) < 0x1000001) {
    if (*param_2 == 0) {
      fn_82F72DD0(param_1,*(unsigned char *)(param_2 + 1));
    }
    else if (*param_1 == 0) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
    }
    else {
      fn_82F72A00(param_1);
    }
  }
  return param_1;
}

