extern int fn_82621800();
extern unsigned int lbl_821CA460;


void fn_825E0508(unsigned __int64 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  double extraout_f1;
  
  fVar1 = lbl_821CA460;
  *(float *)(param_2[3] + 4) =
       ((*(float *)(param_2[8] + 0xf4) * *(float *)(param_2[0xc] + 0x194) +
        *(float *)(param_2[2] + 4)) - *(float *)(param_2[7] + 4)) * *(float *)(param_2[0xc] + 4) +
       *(float *)(param_2[7] + 4);
  iVar2 = fn_82621800((double)*(float *)(param_2[1] + 0x38),
                            (double)((fVar1 - *(float *)(param_2[0xc] + 0xcc)) *
                                     *(float *)(param_2[3] + 4) + *(float *)(*param_2 + 0xc0)),
                            param_1);
  *(float *)(*(int *)(iVar2 + 4) + 0x38) = (float)extraout_f1;
  return;
}

