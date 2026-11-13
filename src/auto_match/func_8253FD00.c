extern int fn_82809400();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192680;
extern unsigned int lbl_821956B0;
extern unsigned int lbl_831C1E78;
extern unsigned int lbl_831C1E7C;


void fn_8253FD00(double param_1,int param_2,float *param_3)

{
  double dVar1;
  
  if (param_1 == (double)lbl_82192680) {
    param_1 = (double)*(float *)(&lbl_831C1E7C + param_2 * 0xc);
  }
  dVar1 = (double)fn_82809400((double)(*(float *)(&lbl_831C1E78 + param_2 * 0xc) /
                                       (float)(param_1 * (double)lbl_821916FC)));
  *param_3 = (float)(dVar1 * (double)lbl_821956B0);
  return;
}

