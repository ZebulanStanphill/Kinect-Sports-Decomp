extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82522D98();
extern int fn_82536690();
extern int fn_8265C9E0();
extern unsigned int lbl_821BE9C0;


unsigned int * fn_824896F0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int auStack_50 [20];
  
  param_1[4] = (int)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 999999;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  fn_8223B688(param_1 + 0xd,param_3);
  param_1[0x14] = 0;
  lVar2 = 6;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 2;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  do {
    puVar1 = (unsigned int *)fn_8265C9E0(0x2c);
    if (puVar1 != (unsigned int *)0x0) {
      puVar1[4] = (int)param_2;
      puVar1[8] = param_1;
      puVar1[1] = 0;
      *puVar1 = &lbl_821BE9C0;
      puVar1[5] = 0xffffffff;
      puVar1[9] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82522D98(param_2 + 0x80);
    }
    auStack_50[0] = 0;
    fn_82536690(param_1,auStack_50);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_82230300(param_3,1,0);
  return param_1;
}

