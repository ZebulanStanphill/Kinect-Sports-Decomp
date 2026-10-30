struct Iface_82DEFEE8;
typedef struct VT_82DEFEE8 {
  void *s[8];
  int (*get)(struct Iface_82DEFEE8 *);
} VT_82DEFEE8;
typedef struct Iface_82DEFEE8 { VT_82DEFEE8 *vt; } Iface_82DEFEE8;
typedef struct Obj_82DEFEE8 {
  char pad[0xc];
  Iface_82DEFEE8 *iface;
  char pad2[4];
  char *a;
  char *b;
} Obj_82DEFEE8;
extern unsigned int fn_82D7C120(char *, char *);
extern void fn_82DB06D0(void);

void fn_82DEFEE8(int param_1, Obj_82DEFEE8 *param_2)
{
  char *x; char *y; unsigned int r;
  if (param_2->iface->vt->get(param_2->iface) != 0xb) {
    y = param_2->b; x = param_2->a;
    r = fn_82D7C120(x + 0x10, y + 0x10);
    if (r != 0)
    fn_82DB06D0();
  }
}
