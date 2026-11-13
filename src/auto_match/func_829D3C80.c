extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_829D3AB0();
extern int fn_82A2B130();


int fn_829D3C80(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int lVar1;
  int iVar2;
  unsigned int auStack_a0 [4];
  unsigned char auStack_90 [120];
  
  auStack_a0[0] = 0x78;
  lVar1 = fn_82A2B130(2,0x101,param_1,param_2,auStack_90,auStack_a0);
  if ((lVar1 < 0) || (iVar2 = fn_829D3AB0(auStack_90,param_3), iVar2 < 0)) {
    lVar1 = fn_829D3AB0("45,90,30,1,1,0,033333333333133,033333333133,0333,01",param_3);
  }
  return lVar1;
}

