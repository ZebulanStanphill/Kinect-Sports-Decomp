extern int fn_82A58310();


void fn_82E38B30(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  int *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*param_3;
  if ((uVar2 == 0x80) || ((*param_5 == 0 && (param_5[9] != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  trapWord(6,param_2,0);
  fn_82A58310(param_3[3],uVar1,
                    (uVar2 - 0x80) - ((uVar2 - 0x81) + (unsigned __int64)(uVar2 - 0x80 == 0)),param_3[2],
                    -(uVar2 / (param_2 & 0xffffffff) < 32000) & 1,param_4,*param_5,param_5[0xe]);
  return;
}

