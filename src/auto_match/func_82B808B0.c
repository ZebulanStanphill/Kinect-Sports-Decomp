extern unsigned int *auStack_80;
extern int fn_82AA66A8();
extern int fn_82B80788();


unsigned __int64
fn_82B808B0(int param_1,int param_2,unsigned int param_3,char param_4,unsigned __int64 param_5,unsigned __int64 param_6
             )

{
  unsigned char auStack_80 [96];
  
  if ((param_3 == 0) && (*(int *)(param_1 + 0x38) != 0)) {
    *(unsigned int *)(*(int *)(param_1 + 0x38) + 0x1c) = 1;
  }
  if ((param_4 != '\0') && ((param_5 & 0xffffffff) != 0)) {
    fn_82B80788(param_1,auStack_80,100,param_5,param_6);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe2c,auStack_80);
  }
  *(unsigned int *)(param_2 + 4) = (param_3 & 3) << 0xe | *(unsigned int *)(param_2 + 4) & 0xffff3fff;
  return 1;
}

