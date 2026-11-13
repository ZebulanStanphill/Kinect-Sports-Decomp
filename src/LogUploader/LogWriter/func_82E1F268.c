extern unsigned int *auStack_20;
extern int fn_8251C390();
extern int fn_829E53B0();
extern int fn_82E1EBB8();
extern int fn_82E1F010();


unsigned __int64 fn_82E1F268(int param_1)

{
  unsigned char auStack_20 [16];
  
  fn_8251C390(auStack_20,".\\LogWriter.cpp",0x376);
  fn_82E1EBB8(param_1);
  fn_82E1F010(param_1);
  *(unsigned char *)(param_1 + 0x5d) = 0;
  fn_829E53B0(auStack_20);
  return 0;
}

