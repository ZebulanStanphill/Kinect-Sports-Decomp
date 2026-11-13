extern int fn_82C06C18();
extern int fn_82C08290();
extern int fn_82C10F40();


void fn_82C08550(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int *aiStack_30;
  
  aiStack_30 = 0;
  if (param_3 == 0) {
    iVar1 = (*(int (**)())(*param_1 + 0xc))(*param_1,param_2,0);
    if (iVar1 >= 0) {
      fn_82C06C18(param_1,param_2);
    }
  }
  else {
    fn_82C10F40(param_1[0x8e],param_2,&aiStack_30);
    if ((((aiStack_30 == 0) || (aiStack_30[1] != 1)) &&
        (iVar1 = fn_82C08290(param_1,param_2,param_4), iVar1 >= 0)) &&
       ((iVar1 = (*(int (**)())(*param_1 + 0xc))(*param_1,param_2,1), iVar1 >= 0 &&
        (iVar1 = fn_82C10F40(param_1[0x8e],param_2,&aiStack_30), iVar1 >= 0)))) {
      aiStack_30[1] = 1;
    }
  }
  return;
}

