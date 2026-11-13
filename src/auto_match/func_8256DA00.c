extern int fn_82230420();
extern int fn_8256DAE8();
extern int fn_82F622E0();
extern int fn_82F68CC0();


unsigned int * fn_8256DA00(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  char cVar2;
  unsigned int *puVar1;
  unsigned int uVar3;
  
  if (param_3 <= (unsigned int)param_2[4]) {
    uVar3 = param_2[4] - param_3;
    if (param_4 < uVar3) {
      uVar3 = param_4;
    }
    if (param_1 == param_2) {
      fn_82230420(param_1,uVar3 + param_3,0xffffffffffffffff);
      fn_82230420(param_1,0,param_3);
    }
    else {
      cVar2 = fn_8256DAE8(param_1,uVar3,0);
      if (cVar2 != '\0') {
        if (0xf < (unsigned int)param_2[5]) {
          param_2 = (unsigned int *)*param_2;
        }
        puVar1 = param_1;
        if (0xf < (unsigned int)param_1[5]) {
          puVar1 = (unsigned int *)*param_1;
        }
        fn_82F68CC0(puVar1,(int)param_2 + param_3,uVar3);
        param_1[4] = uVar3;
        puVar1 = param_1;
        if (0xf < (unsigned int)param_1[5]) {
          puVar1 = (unsigned int *)*param_1;
        }
        *(unsigned char *)((int)puVar1 + uVar3) = 0;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622E0(0xffffffff821961fc);
}

