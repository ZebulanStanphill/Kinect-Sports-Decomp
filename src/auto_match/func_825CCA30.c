extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263CBB0();


void fn_825CCA30(unsigned __int64 param_1,int *param_2)

{
  fn_8263A1B8(param_1,0,*param_2);
  if (*param_2 != 0) {
    fn_8262FEC8();
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1,0,0,0x80000000);
}

