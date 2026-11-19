extern int fn_82A2B528();
extern int fn_82F70678();


void _NMSG_WRITE(void)

{
  unsigned int error_text;
  
  error_text = fn_82F70678();
  if (error_text != 0) {
    fn_82A2B528();
  }
  return;
}

