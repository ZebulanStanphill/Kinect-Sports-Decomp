extern int fn_82668DC0();
extern int fn_82669C68();
extern int fn_8266A4A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


unsigned int fn_8266A420(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_82669C68((unsigned __int64)param_3 + 4,*(unsigned int *)(param_2 + 4),param_3);
  fn_82668DC0(iStack0000001c,(unsigned __int64)*(unsigned int *)(iStack0000001c + 4) - 4,
                *(unsigned int *)(iStack0000001c + 4));
  *(int *)(iStack0000001c + 4) = *(int *)(iStack0000001c + 4) + -4;
  fn_8266A4A8(uStack00000014,iStack0000001c,uStack00000024);
  return uStack00000014;
}

