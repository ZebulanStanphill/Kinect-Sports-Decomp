typedef unsigned char bool;
extern int fn_82CEA220();


bool fn_82CEA2F0(int *param_1,unsigned param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82CEA220(param_1,param_2);
  iVar1 = param_1[2];
  if (iVar2 <= iVar1) {
    *param_3 = *(unsigned int *)(iVar2 * 8 + *param_1 + 4);
  return 0;
  }
  return 1;
}

