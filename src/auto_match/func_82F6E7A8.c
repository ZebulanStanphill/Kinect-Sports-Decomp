extern int fn_82F63BA0();
extern int fn_82F68240();
extern int __iob_func();
extern int fn_82F6ACF0();
extern int fn_82F6E870();
extern int fn_82F709B8();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


unsigned __int64 fn_82F6E7A8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar4;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (param_1 == 0) {
    puVar4 = (unsigned int *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    lVar2 = __iob_func();
    fn_82F6ACF0(1,lVar2 + 0x20);
    lVar2 = __iob_func();
    uVar3 = fn_82F816D0(lVar2 + 0x20);
    lVar2 = __iob_func();
    uVar5 = fn_82F709B8(lVar2 + 0x20,param_1,0,&stack0x00000018);
    lVar2 = __iob_func();
    fn_82F817C0(uVar3,lVar2 + 0x20);
    fn_82F6E870();
    uVar1 = (unsigned __int64)uVar5;
  }
  return uVar1;
}

