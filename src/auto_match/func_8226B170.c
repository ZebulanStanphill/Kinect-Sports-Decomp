extern int fn_8280A580();


void fn_8226B170(double param_1,int param_2)

{
  float fVar1;
  double dVar2;
  
  *(float *)(param_2 + 0x1c) =
       (float)((double)*(float *)(param_2 + 0x48) * param_1 + (double)*(float *)(param_2 + 0x1c));
  dVar2 = (double)fn_8280A580();
  fVar1 = (float)((double)*(float *)(param_2 + 0x60) * param_1 + (double)*(float *)(param_2 + 0x20))
  ;
  *(float *)(param_2 + 0x1c) = (float)dVar2;
  *(float *)(param_2 + 0x20) = fVar1;
  dVar2 = (double)fn_8280A580((double)fVar1);
  fVar1 = (float)((double)*(float *)(param_2 + 0x78) * param_1 + (double)*(float *)(param_2 + 0x24))
  ;
  *(float *)(param_2 + 0x20) = (float)dVar2;
  *(float *)(param_2 + 0x24) = fVar1;
  dVar2 = (double)fn_8280A580((double)fVar1);
  *(float *)(param_2 + 0x24) = (float)dVar2;
  return;
}

