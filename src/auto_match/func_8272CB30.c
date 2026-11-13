extern int fn_827A0C20();


unsigned __int64 fn_8272CB30(int *param_1,float *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  char cVar3;
  float *pfVar2;
  
  if ((((unsigned int)param_1[0x23] >> 0xb & 1) == 0) &&
     (((param_3 & 2) == 0 || (cVar3 = (**(int (***)())(*param_1 + 8))(param_1), cVar3 != '\0')))) {
    pfVar2 = (float *)fn_827A0C20(param_1[0x28]);
    if ((((pfVar2[2] < *param_2) || (*param_2 < *pfVar2)) || (pfVar2[3] < param_2[1])) ||
       (uVar1 = 1, param_2[1] < pfVar2[1])) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

