// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
extern unsigned int strlen(const char *);
extern int fn_82526C70(char *, int, const char *, ...);
extern void fn_82536070(void *, char *);
extern void fn_82536590(void *, int);

void fn_8235FA10(char *self, char *name, int force)
{
  char buf[128];

  if ((*(int *)(self + 0x2b80) == 0 && *(int *)(self + 0x2b84) == 0) || force != 0) {
    if (*(int *)(self + 0xc0c) != 0 && *(int *)(self + 0xcb8) != 0) {
      if (strlen(name) == 0) {
        switch (*(int *)(self + 0x2b98)) {
        case 3:
          name = self + 0xf7c;
          break;
        case 4:
          name = self + 0xfbc;
          break;
        default:
          name = self + 0xf3c;
          break;
        }
      }
      fn_82526C70(buf, 0x80, "%s_%s", self + 0xebc, name);
      fn_82536070(self + 0xe3c, buf);
      fn_82536590(self + 0xd6c, 0);
    }
    *(int *)(self + 0x2b80) = 1;
  }
}
