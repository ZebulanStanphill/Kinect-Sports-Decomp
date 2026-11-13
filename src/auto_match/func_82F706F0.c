extern int fn_82A2B528();
extern int fn_82F70678();


void _FF_MSGBANNER(void)

{
  unsigned int iVar1;
  
  iVar1 = fn_82F70678(0xfc);
  if (iVar1 != 0) {
    fn_82A2B528();
  }
  iVar1 = fn_82F70678(0xff);
  if (iVar1 != 0) {
    fn_82A2B528();
  }
  return;
}

