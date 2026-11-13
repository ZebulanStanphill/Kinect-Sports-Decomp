extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f8;
extern int fn_82A86F50();
extern int fn_82A8C620();
extern int fn_82A8CF10();
extern unsigned int iStack_100;
extern unsigned int iStack_fc;


unsigned __int64 fn_82A8A9F8(int param_1,int *param_2)

{
  char cVar1;
  int iStack_100;
  int iStack_fc;
  unsigned char auStack_f8 [8];
  unsigned char auStack_c0 [48];
  unsigned char auStack_90 [144];

  cVar1 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_90,0x21,auStack_f8), cVar1 != '\0')) {
    fn_82A86F50(auStack_c0,auStack_90,0x21);
    fn_82A8C620(auStack_c0,0,0x20,param_1);
    fn_82A8C620(auStack_c0,0x20,5,auStack_f8);
    fn_82A8C620(auStack_c0,0x25,0x20,param_1 + 0x1e4);
    fn_82A8C620(auStack_c0,0x45,0x20,param_1 + 0x1e8);
    fn_82A8C620(auStack_c0,0x65,0x20,param_1 + 0x1ec);
    fn_82A8C620(auStack_c0,0x85,0x20,param_1 + 0x1f0);
    fn_82A8C620(auStack_c0,0xa5,0x20,param_1 + 500);
    fn_82A8C620(auStack_c0,0xc5,0x20,&iStack_100);
    fn_82A8C620(auStack_c0,0xe5,0x20,&iStack_fc);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x200) + iStack_100;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x200) + iStack_fc;
                    /* WARNING: Subroutine does not return */
    fn_82A8CF10(param_1 + 4,0,0x1e0);
  }
  return 0;
}
