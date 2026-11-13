extern int fn_82CDA000();
extern int fn_82CDA0F0();
extern int fn_82CDA118();
extern int fn_82CDA168();
extern int fn_82CDA950();
extern int fn_82CDB1B8();
extern int fn_82CDB2B8();
extern int fn_82CDEFA0();
extern int fn_830C0538();
extern int fn_830C06C0();


void fn_82CDB3B8(int param_1)

{
  *(int (***)())(param_1 + 0x3e28) = fn_82CDA168;
  *(int (***)())(param_1 + 0xc64) = fn_82CDA118;
  *(int (***)())(param_1 + 0x50f0) = fn_82CDA950;
  *(int (***)())(param_1 + 0x50e8) = fn_82CDB1B8;
  *(int (***)())(param_1 + 0x50ec) = fn_82CDB2B8;
  *(int (***)())(param_1 + 0x3e18) = fn_82CDA0F0;
  *(int (***)())(param_1 + 0x3e1c) = fn_830C06C0;
  *(int (***)())(param_1 + 0x3e20) = fn_830C0538;
  *(int (***)())(param_1 + 0x3e24) = fn_82CDA000;
  *(int (***)())(param_1 + 0xc60) = fn_82CDEFA0;
  return;
}

