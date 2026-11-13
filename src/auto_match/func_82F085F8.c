extern int fn_82ED3520();
extern unsigned char lbl_82161238[];



void fn_82F085F8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  ,unsigned int *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  if (((param_2 & 2) != 0) &&
     (iVar1 = fn_82ED3520(*(unsigned int *)(param_1 + 0x7b40),param_3,param_4,param_5), iVar1 == 0
     )) {
    *param_6 = (lbl_82161238+12);
  }
  if (((param_2 & 4) != 0) &&
     (iVar1 = fn_82ED3520(*(unsigned int *)(param_1 + 0x7b40),param_3,param_4,param_5), iVar1 != 0
     )) {
    *param_6 = lbl_82161238;
  }
  return;
}

