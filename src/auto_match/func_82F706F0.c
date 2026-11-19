extern int fn_82A2B528();
extern int fn_82F70678();


void _FF_MSGBANNER(void)

{
  unsigned int error_text;
  
  error_text = fn_82F70678(0xfc);
  if (error_text != 0) {
    fn_82A2B528();
  }
  error_text = fn_82F70678(0xff);
  if (error_text != 0) {
    fn_82A2B528();
  }
  return;
}

