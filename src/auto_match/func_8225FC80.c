// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
extern unsigned int *auStack_20;
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();


void fn_8225FC80(unsigned int *param_1)

{
  unsigned char cVar1;
  unsigned char auStack_20 [16];
  
  cVar1 = fn_82E1CAD0(3);
  if (cVar1 != '\0') {
    fn_82526C70(auStack_20,10,"0x%08x",*param_1);
    fn_82E1CB08("Script",auStack_20,0);
    fn_82E1CCA8();
  }
  return;
}

