extern int fn_82800648();


void fn_827FE840(unsigned __int64 param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
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
    if (pcVar1 == param_2) {
      uVar2 = 2;
    }
    else {
      pcVar1 = strstr(param_2,"CUSTOMCHANNEL");
      uVar2 = 3;
      if (pcVar1 != param_2) {
        uVar2 = 0;
      }
    }
  }
  fn_82800648(param_1,uVar2,param_3,param_4,param_5);
  return;
}

