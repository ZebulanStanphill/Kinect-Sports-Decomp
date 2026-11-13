extern int fn_82EF1220();


unsigned __int64 fn_82EF1480(__int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82EF1220(param_1 + 8,&param_2,&param_3);
    fn_82EF1220(param_1 + 0x94,&param_3,&param_2);
    uVar1 = 0;
  }
  return uVar1;
}

