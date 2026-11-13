typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BE5A70();
extern int fn_82BE6148();


bool fn_82BF4EE8(int *param_1,__int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  bool bVar3;
  
  iVar2 = (**(int (***)())(*param_1 + 0xc))();
  if (iVar2 + (-0x40 - param_1[9]) < (int)param_2) {
    bVar3 = false;
  }
  else {
    iVar2 = fn_82BE5A70(param_1,param_2);
    if (iVar2 == 0) {
      lVar1 = fn_82BE6148(param_1,(unsigned __int64)(unsigned int)param_1[9] + param_2,0);
      bVar3 = lVar1 != 0;
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

