typedef unsigned char bool;
#define false 0
extern int fn_8267A0E0();


bool fn_82675CD0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,__int64 param_5)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1[7] == 0) || (*(int *)(param_1[7] + 0xd8) == 0)) {
LAB_82675d78:
    bVar2 = false;
  }
  else {
    (**(int (***)())(*param_1 + 0x44))();
    if ((param_4 == 1) || (param_4 == 2)) {
      iVar1 = 0x18280186;
    }
    else {
      if (param_4 != 9) goto LAB_82675d78;
      iVar1 = 0x4900102;
    }
    param_1[0xd] = iVar1;
    param_1[8] = (int)param_2;
    param_1[9] = (int)param_3;
    iVar1 = fn_8267A0E0(param_2,param_3,param_5 + 1,0,iVar1,param_1 + 10);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

