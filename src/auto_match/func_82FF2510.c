extern unsigned int *auStack_30;
extern int fn_82FF2248();
extern int fn_8301B248();


float * fn_82FF2510(double param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 *puVar1;
  float *pfVar2;
  unsigned int auStack_30;
  
  fn_82FF2248(&auStack_30,param_2,param_3);
  pfVar2 = (float *)(-(unsigned int)(*(unsigned int *)(param_2 + 4) != auStack_30) & auStack_30 + 8);
  if (pfVar2 == (float *)0x0) {
    puVar1 = (unsigned __int64 *)fn_8301B248(param_2);
    if (puVar1 != (unsigned __int64 *)0x0) {
      *(float *)(puVar1 + 1) = (float)param_1;
      pfVar2 = (float *)(puVar1 + 1);
      *puVar1 = param_3;
    }
  }
  else {
    *pfVar2 = (float)param_1;
  }
  return pfVar2;
}

