extern int fn_829E43B8();
extern unsigned int lbl_82057B24;
extern unsigned int lbl_82057B4C;
extern unsigned int lbl_82057B50;


unsigned __int64
fn_829E4700(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             float *param_6,unsigned __int64 param_7,unsigned __int64 param_8,int param_9,float *param_10)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_9 == 0) {
    fVar1 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar1 = *(float *)(param_3 + 0x84);
  }
  dVar5 = (double)fVar1;
  dVar3 = (double)(float)((double)(float)(param_1 / dVar5) * param_2);
  dVar4 = (double)lbl_82057B24;
  if ((double)lbl_82057B24 <= dVar3) {
    dVar4 = dVar3;
  }
  if ((param_9 == 0) && (iVar2 = fn_829E43B8(), iVar2 != 0)) {
    dVar5 = (double)(float)(dVar5 * (double)lbl_82057B50);
    dVar4 = (double)(float)(dVar4 * (double)lbl_82057B4C);
  }
  *param_6 = (float)dVar5;
  *param_10 = (float)dVar4;
  return 0;
}

