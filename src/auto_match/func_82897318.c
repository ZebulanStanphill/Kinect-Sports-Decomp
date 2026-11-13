extern unsigned int *auStack_30;
extern int fn_8224EE50();
extern int fn_82511350();
extern int fn_8288BEC0();
extern int fn_8288C2E0();
extern int fn_8288C420();
extern int fn_8288C4B0();
extern int fn_828A2240();
extern int fn_828C61B8();
extern int fn_828C92E8();
extern unsigned int lbl_8202396C;


unsigned int * fn_82897318(unsigned int *param_1,unsigned int param_2)

{
  unsigned char auStack_30;
  
  *param_1 = &lbl_8202396C;
  fn_8224EE50(param_1 + 1,&auStack_30,&auStack_30);
  fn_8288C4B0(param_1 + 5,&auStack_30,&auStack_30);
  fn_8224EE50(param_1 + 9,&auStack_30,&auStack_30);
  fn_8288C4B0(param_1 + 0xd,&auStack_30,&auStack_30);
  fn_8288C2E0(param_1 + 0x11,&auStack_30);
  fn_8288C2E0(param_1 + 0x14,&auStack_30);
  fn_828C92E8(param_1 + 0x17,&auStack_30,&auStack_30);
  fn_828A2240(param_1 + 0x1b,&auStack_30,&auStack_30);
  fn_8288BEC0(param_1 + 0x1f,&auStack_30,auStack_30);
  *(unsigned char *)(param_1 + 0x24) = 0;
  fn_8288C420(param_1 + 0x25,&auStack_30,&auStack_30);
  fn_828C61B8(param_1 + 0x29);
  fn_82511350(param_1 + 0x30,&auStack_30,&auStack_30);
  param_1[0x35] = param_2;
  *(unsigned char *)(param_1 + 0x34) = 0;
  return param_1;
}

