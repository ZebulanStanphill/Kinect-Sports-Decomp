typedef unsigned char bool;
#define false 0
extern int fn_82535298();
extern int fn_82536288();


void fn_8260E0D0(int param_1,int *param_2)

{
  bool bVar1;
  int aiStack_10;
  
  if (param_2 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 != 0;
  }
  if (bVar1) {
    aiStack_10 = *param_2;
    aiStack_10 =
         fn_82535298(&aiStack_10,*(unsigned int *)(param_1 + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(&aiStack_10);
  }
  return;
}

