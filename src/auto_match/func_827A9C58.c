extern int fn_827A8420();
extern int fn_827A9B08();


int * fn_827A9C58(__int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                   __int64 param_5)

{
  int *piVar1;
  int * apiStack_30;
  
  piVar1 = (int *)fn_827A8420(param_1 + 0xc0,
                                (((unsigned __int64)param_3 & 0x1fffffff) * 8 +
                                 (-(unsigned __int64)(param_5 != 0) & 0xc) + 0x21 & 0xfffffffc) +
                                (param_4 & 0x3fffffff) * 4,param_5);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    if (*piVar1 < 0) {
      *(char *)(piVar1 + 7) = (char)param_3;
    }
    else {
      piVar1[1] = param_3;
    }
    apiStack_30 = piVar1;
    fn_827A9B08(param_1,param_2,&apiStack_30);
  }
  return piVar1;
}

