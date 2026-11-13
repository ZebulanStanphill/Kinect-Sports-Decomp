extern int fn_8300C538();


unsigned __int64
fn_8300B140(double param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,float param_5,
             float param_6,float param_7)

{
  float *pfVar2;
  unsigned __int64 uVar1;
  
  pfVar2 = (float *)fn_8300C538(param_2 + 0x5c);
  if (pfVar2 == (float *)0x0) {
    uVar1 = 2;
  }
  else {
    *pfVar2 = (float)param_1;
    pfVar2[3] = param_7;
    uVar1 = 1;
    pfVar2[2] = param_6;
    pfVar2[1] = param_5;
  }
  return uVar1;
}

