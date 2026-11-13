typedef unsigned char bool;
#define false 0
extern int fn_82535298();
extern int fn_82536288();


void fn_8260E140(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  int aiStack_10 [4];
  
  if (param_5 != 0) {
    return;
  }
  piVar1 = (int *)(param_3 + 0x10);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    aiStack_10[0] = *piVar1;
    aiStack_10[0] =
         fn_82535298(aiStack_10,*(unsigned int *)(**(int **)(param_1 + 0x60) + 0x84c),
                           0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(aiStack_10);
  }
  return;
}

