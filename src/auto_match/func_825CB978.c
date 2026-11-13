extern int fn_82630750();
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_831C1CEC;
extern unsigned int lbl_8327F900;
extern unsigned int lbl_8327F944;


void fn_825CB978(int param_1,int param_2)

{
  *(unsigned int *)(param_2 + 0x2948) = *(unsigned int *)(param_2 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40;
  fn_82630750(param_2,0,*(unsigned int *)(param_1 + 0xa0),0);
  *(unsigned int *)(param_2 + 0x2ed8) = lbl_831C1CEC;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x80000;
  fn_82631920(param_2,lbl_8327F900);
                    /* WARNING: Subroutine does not return */
  fn_82631578(param_2,lbl_8327F944);
}

