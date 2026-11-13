extern int fn_826944C8();
extern int fn_826D2B68();


void fn_826F6458(int param_1,int *param_2)

{
  int iVar1;
  int lVar2;
  int aiStack_20 [2];
  int arg=0;
  
  iVar1 = (*(int (**)())(*param_2 + 0x5c))(param_2);
  aiStack_20[0] = *(int *)(*(int *)(iVar1 + 0x78) + 8);
  *(int *)(aiStack_20[0] + 8) = *(int *)(aiStack_20[0] + 8) + 1;
  fn_826D2B68(param_2,param_1 + 4,aiStack_20,0,0,-1,4,0,arg);
  { int *obj=(int *)aiStack_20[0]; int n=obj[2]-1; obj[2]=n; if(n==0) fn_826944C8(obj); }
  return;
}

