typedef struct Iface Iface;
typedef struct IfaceVt { void *pad[4]; int (*f10)(Iface *); } IfaceVt;
struct Iface { IfaceVt *vt; };
extern int fn_82CFBBF0(int, unsigned);
extern int fn_82E0E658(void);
extern int fn_82E14238(int, unsigned);
extern Iface *lbl_8323FD9C;
extern int lbl_8323FDE4;

int fn_82E0A398(unsigned p)
{
  if (p == 0)
    return p;
  if (fn_82CFBBF0(fn_82E0E658(), p) == 0)
    return lbl_8323FD9C->vt->f10(lbl_8323FD9C);
  return fn_82E14238(lbl_8323FDE4, p);
}
