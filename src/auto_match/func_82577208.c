extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;


void fn_82577208(double param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = lbl_8320A898;
  uVar1 = lbl_821CA460;
  *(unsigned int *)(lbl_8320A898 + 0x2380) = lbl_821CA460;
  *(unsigned int *)(iVar2 + 0x2384) = uVar1;
  *(unsigned int *)(iVar2 + 0x2388) = uVar1;
  *(float *)(iVar2 + 0x238c) = (float)param_1;
  *(unsigned __int64 *)(iVar2 + 8) = *(unsigned __int64 *)(iVar2 + 8) | 0x8000;
  iVar2 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,*(unsigned int *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,*(unsigned int *)(param_2 + 0x5c));
}

