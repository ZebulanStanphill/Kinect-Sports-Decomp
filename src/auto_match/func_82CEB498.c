extern int fn_82CEB1F0();
extern int fn_82CEB8F0();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFD8C0();
extern unsigned int uStack_30;


unsigned __int64 fn_82CEB498(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uStack_30;
  int aiStack_2c;
  
  uVar1 = fn_82CEB1F0(param_1,param_2,&uStack_30,&aiStack_2c);
  if ((int)uVar1 == 0) {
    if (*(char *)(aiStack_2c + 0xc) == '\x14') {
      uVar2 = fn_82CFD5B0(aiStack_2c);
      param_3[5] = uVar2;
      *param_3 = 0x14;
      param_3[4] = uStack_30;
    }
    else if (*(char *)(aiStack_2c + 0xc) == '\x18') {
      uVar2 = fn_82CFD5B8(aiStack_2c);
      uVar3 = fn_82CFD8C0(aiStack_2c,uStack_30);
      param_3[4] = uVar3;
      param_3[5] = uVar2;
      *param_3 = 0x18;
    }
    else {
      uVar1 = fn_82CEB8F0(param_3,uStack_30);
    }
  }
  return uVar1;
}

