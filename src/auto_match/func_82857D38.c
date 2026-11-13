extern int fn_82857CB8();
extern int fn_82A1EFC0();


void fn_82857D38(int param_1,int param_2)

{
  *(unsigned char *)(param_2 + 0x20) = 3;
  *(unsigned char *)(param_2 + 0x21) = 0;
  fn_82857CB8();
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0xc,0xff,0x50);
  *(int *)(param_1+8) = *(int *)(param_2+4);
}

