extern unsigned int *auStack_80;
extern int fn_82A2AA90();
extern int fn_82A2AA98();
extern int fn_82A2AAA0();
extern unsigned int uRam8322b278;
extern unsigned int uRam8322b27c;
extern unsigned int uRam8322b280;
extern unsigned int uRam8322b284;
extern unsigned int uRam8322b288;
extern unsigned int uStack_88;


unsigned __int64 fn_82BF1C20(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 *puVar1;
  __int64 lVar2;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [128];
  
  puVar1 = &uStack_88;
  lVar2 = 0xb;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uRam8322b278 = 0;
  uRam8322b27c = 0;
  uRam8322b280 = 0;
  uRam8322b284 = 0;
  uRam8322b288 = 0;
  fn_82A2AA90(auStack_80);
  fn_82A2AA98(auStack_80,param_1,param_2);
  fn_82A2AAA0(auStack_80,0xffffffff8322b278);
  return 0xffffffff8322b278;
}

