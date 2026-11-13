extern int fn_828008C0();


void fn_82800950(unsigned __int64 param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  char *pcVar1;
  unsigned __int64 uVar2;
  
  pcVar1 = strstr(param_2,"BLENDSHAPE");
  if (pcVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    pcVar1 = strstr(param_2,"TEXANIM");
    uVar2 = 2;
    if (pcVar1 != param_2) {
      uVar2 = 0;
    }
  }
  fn_828008C0(param_1,uVar2,param_3,param_4,param_5);
  return;
}

