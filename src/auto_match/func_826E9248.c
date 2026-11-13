extern unsigned int *auStack_210;
extern int fn_826BC900();
extern int fn_826C8C70();
extern unsigned int lbl_82005718;


void fn_826E9248(unsigned int param_1,float *param_2)

{
  unsigned char auStack_210 [512];
  
  fn_826BC900(auStack_210,0x200,"xmin = %g, ymin = %g, xmax = %g, ymax = %g\n",(double)(*param_2 * 0.05f),
                    (double)(param_2[1] * 0.05f),(double)(param_2[2] * 0.05f),
                    (double)(param_2[3] * 0.05f));
  fn_826C8C70(param_1,"%s",auStack_210);
  return;
}

