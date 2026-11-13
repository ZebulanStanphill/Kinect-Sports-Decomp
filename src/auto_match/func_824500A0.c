extern int fn_82337D48();
extern int fn_8242E688();
extern int fn_82440B28();


unsigned __int64
fn_824500A0(double param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,unsigned char param_5)

{
  int iVar1;
  
  (**(int (***)())(*param_3 + 0x28))(param_3);
  if (((double)*(float *)param_3[0x11] <= param_1) &&
     (iVar1 = fn_8242E688(*(unsigned int *)param_3[0x10],param_5), iVar1 != 0)) {
    fn_82337D48();
  }
  fn_82440B28((double)(float)((double)*(float *)param_3[0x11] - param_1),
                    (double)(*(float *)(*(int *)(*(int *)(*(int *)param_3[0x10] + 0x174) + 4) + 4) *
                            (float)param_5),param_2,*(int *)(*(int *)param_3[0x10] + 0x174) + 4);
  return param_2;
}

