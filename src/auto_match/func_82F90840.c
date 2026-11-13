extern int fn_82F90960();
extern int fn_82F91510();
extern int fn_82F915E8();
extern int fn_82F93840();
extern int fn_82F96B00();
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern unsigned int lbl_8216BC9C;


unsigned int * fn_82F90840(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  puStack00000014 = param_1;
  fn_82F90960(param_1);
  fn_82F96B00(puStack00000014 + 2);
  *puStack00000014 = &lbl_8216BC9C;
  puStack00000014[1] = &lbl_8216B72C;
  puStack00000014[2] = &lbl_8216B770;
  fn_82F93840(puStack00000014 + 3);
  fn_82F91510(puStack00000014 + 0xc);
  puStack00000014[0x16] = 0;
  puStack00000014[0x17] = 0;
  puStack00000014[0x18] = 0;
  *(unsigned char *)(puStack00000014 + 0x19) = 0;
  fn_82F915E8(puStack00000014 + 0x1a);
  return puStack00000014;
}

