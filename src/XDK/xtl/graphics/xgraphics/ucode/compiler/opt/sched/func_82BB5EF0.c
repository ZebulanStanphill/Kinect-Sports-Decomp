extern int fn_82B7BD28();
extern int fn_82BB5420();
extern unsigned int lbl_820E0374;
extern unsigned int lbl_820E0394;
extern unsigned int lbl_820E03B4;


unsigned int * fn_82BB5EF0(unsigned int *param_1,unsigned param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  param_1[1] = 0;
  *param_1 = &lbl_820E03B4;
  puVar1 = (unsigned int *)fn_82B7BD28(param_2,0xc);
  puVar2 = puVar1 + 1;
  *puVar1 = (int)param_2;
  if (puVar2 != 0) { puVar2[1] = 0; *puVar2 = (unsigned)&lbl_820E0374; } else puVar2 = 0;
  param_1[2] = puVar2;
  puVar1 = (unsigned int *)fn_82B7BD28(param_2,0x10);
  puVar2 = puVar1 + 1;
  *puVar1 = (int)param_2;
  if (puVar2 != 0) { puVar2[1] = 0; *puVar2 = (unsigned)&lbl_820E0394; } else puVar2 = 0;
  param_1[3] = puVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82BB5420(param_1);
  return param_1;
}

