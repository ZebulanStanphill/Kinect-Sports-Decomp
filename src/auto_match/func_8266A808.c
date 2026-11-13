extern unsigned int *auStack_30;
extern int fn_82230180();
extern int fn_8223F658();
extern int fn_8265F4B8();
extern int fn_826660E8();
extern int fn_8266A700();
extern int fn_8266ACB8();
extern int fn_82A1D7A8();
extern int fn_82A1E230();
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_c;


unsigned int fn_8266A808(void)

{
  unsigned char auStack_30 [28];
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  fn_826660E8(0xffffffff831e7af8,4);
  fn_8266ACB8(0xffffffff831e7af4,1);
  uStack_10 = fn_82A1E230();
  uStack_14 = fn_82A1D7A8();
  fn_8265F4B8(auStack_30,uStack_10,uStack_14);
  fn_8223F658(auStack_30);
  fn_8266A700();
  uStack_c = 1;
  fn_82230180(auStack_30);
  return uStack_c;
}

