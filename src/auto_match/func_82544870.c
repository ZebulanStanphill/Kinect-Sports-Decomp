extern unsigned int *auStack_40;
extern int fn_8263B758();
extern int fn_82A93C18();
extern int fn_82A93F08();
extern unsigned int lbl_8326AFE0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


unsigned __int64 fn_82544870(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned char auStack_40 [24];
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  fn_8263B758(0xffffffff8326afc0,0,auStack_40);
  uVar1 = lbl_8326AFE0 & 0xfffff000;
  fn_82A93C18(uStack_28,uStack_24,1,0,0x18280186,0,0,0);
  fn_82A93F08(param_1,uVar1,0);
  return param_1;
}

