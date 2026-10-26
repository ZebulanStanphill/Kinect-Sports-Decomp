extern void fn_82F10F08(void);
extern void fn_82F10FD0(void);
extern void fn_82F11098(void);
extern void fn_82F11170(void);

void fn_82F11900(char *p)
{
  *(void (**)(void))(p + 0x6d44) = fn_82F10F08;
  *(void (**)(void))(p + 0x6d48) = fn_82F10FD0;
  *(void (**)(void))(p + 0x6d4c) = fn_82F11098;
  *(void (**)(void))(p + 0x6d50) = fn_82F11170;
}
