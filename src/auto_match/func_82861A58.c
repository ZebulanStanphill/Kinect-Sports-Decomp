extern int fn_82809400();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern float lbl_8201F94C;


void fn_82861A58(int param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_2[10];
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0xfc;
  dVar4 = (double)lbl_82002AE0;
  dVar2 = (double)fn_82809400((double)(float)(dVar4 / (double)param_2[5]));
  *(float *)(param_1 + 0x114) = (float)(dVar2 * (double)lbl_82005344) * lbl_8201F94C;
  *(float *)(param_1 + 0x118) = param_2[5] / *param_2;
  fVar1 = param_2[0xe];
  *(float *)(param_1 + 0x11c) = (float)((double)fVar1 / dVar3);
  *(float *)(param_1 + 0x120) =
       (float)((double)(float)((double)fVar1 / dVar3) * dVar3) / (float)(dVar3 + dVar4);
  return;
}

