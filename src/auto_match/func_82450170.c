extern int fn_82337D48();
extern int fn_8242E688();
extern int fn_82440D08();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64
fn_82450170(double param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(int (***)())(*param_3 + 0x28))(param_3);
  if ((double)*(float *)param_3[0x11] <= param_1) {
    iVar3 = fn_8242E688(*(unsigned int *)param_3[0x10],param_5 & 0xff);
    fVar1 = ltcg_pool_0_0f;
    if ((iVar3 == 0) || (iVar3 = fn_82337D48(), fVar1 = ltcg_pool_0_0f, iVar3 == 0))
    goto LAB_824501f4;
    iVar2 = 1;
  }
  fVar1 = (float)((double)*(float *)param_3[0x11] - param_1);
LAB_824501f4:
  fn_82440D08((double)fVar1,param_2,(unsigned __int64)*(unsigned int *)(*(int *)param_3[0x10] + 0x174) + 4,
                  param_4,param_5,iVar2 == 0);
  return param_2;
}

