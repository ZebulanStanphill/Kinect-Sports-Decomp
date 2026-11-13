extern unsigned int *auStack_20;
extern int fn_82A1F2F8();
extern int fn_82A29A40();
extern unsigned int uStack_12;
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;


unsigned __int64 fn_82E229F0(void)

{
  unsigned __int64 uVar1;
  unsigned char auStack_20 [8];
  unsigned short uStack_18;
  unsigned short uStack_16;
  unsigned short uStack_14;
  unsigned short uStack_12;
  
  uVar1 = fn_82A1F2F8();
  fn_82A29A40(auStack_20);
  return ((((unsigned __int64)uStack_18 << 8 ^ (unsigned __int64)uStack_16) << 8 ^ (unsigned __int64)uStack_14) &
         0xffffff) << 8 ^ (unsigned __int64)uStack_12 ^ uVar1 ^ 0x45732698;
}

