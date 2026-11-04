/* needs the LTCG lane with the variadic callee fn_82526C70 (func_82526C70.c): 100.0%; buf[16] */
typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern int fn_82526C70(char *, unsigned, const char *, ...);
extern int fn_82E1CB08(const char *, void *, int);
extern int fn_82E1CCA8(void);
extern int vsn(char *, unsigned, const char *, va_list);

void fn_82264E68(int *p, void *name, void *tag)
{
  char buf[16];
  char *c = fn_8225F670();
  if (*c != 0) {
    if (fn_8225FDE0(0x60, 1) == 0 && fn_82E1CAD0(0x60) != 0) {
      fn_82526C70(buf, 10, "0x%08x", *p);
      fn_82E1CB08("MenuId", buf, 0);
      fn_82E1CB08("ButtonName", name, 0);
      fn_82E1CB08("ButtonTag", tag, 0);
      fn_82E1CCA8();
    }
  }
}
