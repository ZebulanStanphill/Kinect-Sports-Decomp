extern int memcpy();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


int * fn_82414898(int *param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  
  *param_1 = param_3;
  memcpy(param_1 + 1,param_2,0x104);
  param_1[0x49] = param_1[0x2a];
  param_1[0x42] = param_4;
  param_1[0x48] = 1;
  iVar1 = lbl_821CA460;
  param_1[0x45] = ltcg_pool_0_0f;
  param_1[0x46] = iVar1;
  param_1[0x47] = iVar1;
  param_1[0x43] = param_1[0x32];
  param_1[0x44] = param_1[0x32];
  param_1[0x4a] = param_1[0x24];
  if ((param_1[0x31] != 0) && (*(int *)(param_3 + 4) != 0)) {
    *(int *)(param_3 + 0x1e0) = iVar1;
    *(unsigned int *)(param_3 + 0x1d4) = 0;
    *(unsigned int *)(param_3 + 0x1cc) = 0;
    *(unsigned int *)(param_3 + 0x1d0) = lbl_82192734;
  }
  return param_1;
}

