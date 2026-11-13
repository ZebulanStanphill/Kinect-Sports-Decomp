extern unsigned int *auStack_20;
extern int fn_822A0C98();
extern int fn_82359698();
extern int fn_82535298();
extern int fn_82536288();


void fn_823A1758(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_20 [4];
  
  iVar2 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar2 + 0x58) == *(int *)(iVar2 + 0x54)) || (*(int *)(iVar2 + 0x58) == 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1c) + param_1);
    *(float *)(param_2 + 0x1c) = fVar1;
    if (*(float *)(param_2 + 0x18) <= fVar1) {
      if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 0)) {
        auStack_20[0] = *(unsigned int *)(param_2 + 0x10);
        auStack_20[0] =
             fn_82535298(auStack_20,*(unsigned int *)(*(int *)(iVar2 + 0x174) + 0x84c),
                               0xffffffff83296bc0,0xffffffff83296bd0);
        fn_82536288(auStack_20);
        *(unsigned int *)(param_2 + 0x14) = 1;
      }
      uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
      iVar2 = fn_822A0C98(*(unsigned int *)(*(unsigned int *)(param_2 + 8) + 0xd4));
      if (iVar2 == 0) {
        fn_82359698(uVar3,8);
      }
    }
  }
  return;
}

