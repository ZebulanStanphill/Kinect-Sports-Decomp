extern int fn_824B4288();
extern unsigned int lbl_8209A96C;
extern unsigned int lbl_8326183C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4E760(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lbl_8326183C;
  uVar1 = lbl_8209A96C;
  iVar3 = lbl_8326183C + 0x2c78;
  *(float *)(lbl_8326183C + 0x2d74) = (float)param_1;
  *(unsigned int *)(iVar2 + 0x2d70) = param_5;
  *(float *)(iVar2 + 0x2d7c) = (float)param_2;
  *(unsigned int *)(iVar2 + 0x2d78) = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_824B4288(iVar3,0x1c);
}

