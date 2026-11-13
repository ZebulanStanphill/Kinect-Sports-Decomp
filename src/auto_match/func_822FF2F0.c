extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AFA08;
extern unsigned int lbl_821AFAE8;


unsigned int * fn_822FF2F0(unsigned int *param_1,float *param_2,float *param_3)

{
  unsigned int *puVar1;
  float dVar2;
  float dVar3;
  unsigned char auStack_50 [32];
  
  param_1[1] = 1;
  puVar1 = param_1 + 3;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (puVar1 != (unsigned int *)0x0) {
    dVar3 = *param_2;
    dVar2 = *param_3;
    fn_82230110(auStack_50,"LinearInputsLessThanAndAngularInputsGreaterThan");
    *puVar1 = &lbl_821AFA08;
    fn_8223B688(puVar1 + 1,auStack_50);
    fn_82230300(auStack_50,1,0);
    *(float *)(puVar1 + 8) = (float)dVar3;
    *(float *)(puVar1 + 9) = (float)dVar2;
    *puVar1 = &lbl_821AFAE8;
  }
  return param_1;
}

