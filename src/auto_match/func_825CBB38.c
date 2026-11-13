extern int fn_82631578();
extern int fn_82631920();
extern int fn_82F6A548();
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327FA00;
extern unsigned int lbl_8327FA04;


void fn_825CBB38(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int in_stack_00000064;
  
  fn_82F6A548();
  if (in_stack_00000064 != 0) {
    fn_82631920(param_2,lbl_8327F8B8);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_2,lbl_8327FA00);
  }
  fn_82631920(param_2,lbl_8327F8B8);
                    /* WARNING: Subroutine does not return */
  fn_82631578(param_2,lbl_8327FA04);
}

