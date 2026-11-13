extern int fn_82539560();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8207F270;
extern unsigned int lbl_8207F524;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830790C0(int param_1,float *param_2,float *param_3,unsigned int *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 0x70f4);
  dVar2 = (double)fVar1;
  dVar3 = (double)lbl_821AAD20;
  if (*(char *)(param_1 + 0x70fc) == '\0') {
    *param_3 = fVar1;
    *param_2 = fVar1;
    *param_4 = *(unsigned int *)(param_1 + 0x70f4);
    return;
  }
  if (dVar2 < dVar3) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar2,(double)lbl_8207F524,(double)lbl_82002AE0,(double)lbl_820288B0,dVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar2,(double)lbl_82002AE0,(double)lbl_8207F270,dVar3,(double)lbl_82186E18);
}

