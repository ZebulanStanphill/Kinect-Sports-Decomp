extern unsigned int lbl_821CA460;


void fn_82414EE0(double param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0x31] != 0) {
    param_2[0x45] = (int)(float)param_1;
    param_2[0x44] = param_2[param_4 + 0x3d];
    param_2[0x46] = param_2[0x2e];
    param_2[0x47] = param_2[0x2f];
    return;
  }
  iVar2 = *param_2;
  iVar1 = param_2[0x2e];
  if (*(int *)(iVar2 + 4) == 0) {
    return;
  }
  *(int *)(iVar2 + 0x1dc) = param_2[0x2f];
  *(float *)(iVar2 + 0x1d0) = (float)param_1;
  *(int *)(iVar2 + 0x1d8) = iVar1;
  *(int *)(iVar2 + 0x1cc) = param_4;
  *(unsigned int *)(iVar2 + 0x1d4) = 1;
  *(unsigned int *)(iVar2 + 0x1e0) = lbl_821CA460;
  return;
}

