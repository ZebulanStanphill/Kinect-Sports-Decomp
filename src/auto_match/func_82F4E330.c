extern int fn_824B4288();
extern unsigned int lbl_8326183C;


void fn_82F4E330(double param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lbl_8326183C;
  iVar2 = lbl_8326183C + 0x2c78;
  *(float *)(lbl_8326183C + 0x2d74) = (float)param_1;
  *(unsigned int *)(iVar1 + 0x2d70) = param_6;
  *(float *)(iVar1 + 0x2d7c) = (float)param_2;
  *(float *)(iVar1 + 0x2d78) = (float)param_3;
                    /* WARNING: Subroutine does not return */
  fn_824B4288(iVar2,0x1c);
}

