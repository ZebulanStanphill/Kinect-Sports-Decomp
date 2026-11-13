extern int fn_828E9DB8();
extern int fn_828E9F90();


unsigned __int64 fn_828EA2D8(int *param_1,int param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = fn_828E9F90();
  }
  else if ((unsigned __int64)(unsigned int)param_1[3] <
           ((unsigned __int64)(*param_1 + 7U >> 3) + (unsigned __int64)(unsigned int)param_1[1] + param_3 & 0xffffffff)) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)param_3) {
      puVar2 = (unsigned char *)(param_2 + -1);
      do {
        puVar2 = puVar2 + 1;
        fn_828E9DB8(param_1,*puVar2,8);
        param_3 = param_3 + -1;
      } while (0 < param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}

