extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8275D2B8();
extern int fn_8275FD58();
extern int fn_8275FDB0();


void fn_82760BF8(unsigned int *param_1)

{
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [112];
  
  fn_8275D2B8(auStack_80,*param_1);
  fn_8275FD58(auStack_90,auStack_80);
  fn_8275FDB0(auStack_90);
  return;
}

