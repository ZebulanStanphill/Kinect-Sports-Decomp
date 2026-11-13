extern int fn_825200A8();
extern int fn_82560100();
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000020;


void fn_82421510(double param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  
  if ((*(int *)(param_2 + 0x40) == 0) &&
     ((double)*(float *)(**(unsigned int **)(param_2 + 0xc) + 0x89c) < param_1)) {
    lVar2 = (unsigned __int64)**(unsigned int **)(param_2 + 0xc) + 0xd48;
    iVar1 = fn_825200A8(lVar2,0xffffffff82196288);
    if (iVar1 == 0) {
      fn_82560100((double)lbl_821CA460,*(unsigned int *)(*(int *)(param_2 + 0x10) + 0x4c),lVar2,
                        &stack0x00000020);
      *(unsigned int *)(param_2 + 0x40) = 1;
    }
  }
  return;
}

