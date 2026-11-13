extern unsigned int *auStack_5c0;
extern int fn_82A1EFC0();
extern unsigned int uStack_48;


unsigned __int64 fn_829DE440(int param_1,int param_2,int *param_3,int param_4)

{
  unsigned char auStack_5c0 [1400];
  unsigned __int64 uStack_48;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) &&
     (((param_4 != 0 && (*param_3 < param_3[2])) && (param_3[1] < param_3[3])))) {
    uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_5c0,0,0x578);
  }
  return 0xffffffff80070057;
}

