extern void fn_8267C488(void *);
extern void fn_827B5EA8(void *);
void fn_82772608(char *p)
{
  char *s = p + 8;
  fn_827B5EA8(s + 0x18);
  fn_827B5EA8(s + 8);
  fn_8267C488(p);
}
