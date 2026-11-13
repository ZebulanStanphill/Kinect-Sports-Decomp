extern int fn_82536288();


typedef struct { void **vt; } Iface_82465548;

void fn_82465548(char *param_1)

{
  Iface_82465548 **pp;

  pp = (Iface_82465548 **)(param_1 + 0x24);
  if (*pp != 0) {
    unsigned char r = ((unsigned char (*)(Iface_82465548 *))(*pp)->vt[1])(*pp);
    if (r == 0) {
      ((void (*)(Iface_82465548 *))(*pp)->vt[0])(*pp);
    }
    fn_82536288(pp);
    *pp = 0;
  }
}
