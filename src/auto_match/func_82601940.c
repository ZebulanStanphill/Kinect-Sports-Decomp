typedef unsigned char bool;
#define false 0
extern int fn_82535298();
extern int fn_82536288();
extern int fn_826243F0();
extern int iRam8326b900;
extern int iRam8328229c;


void fn_82601940(int param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int aiStack_30;
  
  piVar1 = param_2 + 0x9f;
  if (param_4 == 0) {
    piVar1 = param_2 + 0x9e;
  }
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if ((bVar2) && (5 < (unsigned int)(iRam8326b900 - iRam8328229c))) {
    aiStack_30 = *piVar1;
    aiStack_30 =
         fn_82535298(&aiStack_30,*(unsigned int *)(param_1 + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(&aiStack_30);
    iRam8328229c = iRam8326b900;
  }
  if (param_2[0xa0] != 0) {
    fn_826243F0(*(unsigned int *)(*param_2 + 0x1c),param_2 + 0xa0,param_3);
  }
  return;
}

