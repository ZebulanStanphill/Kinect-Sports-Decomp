extern unsigned int *auStack_d8;
extern int fn_82F691F0();


void fn_82A1C808(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_d8 [72];
  char acStack_90 [144];
  
  _snprintf(acStack_90,0x40,"\\Device\\Harddisk0\\Cache%u",param_1);
  RtlInitAnsiString(auStack_d8,acStack_90);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3,0,0x58);
}

