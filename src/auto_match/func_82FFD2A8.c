typedef struct Obj_82FFD2A8 Obj_82FFD2A8;
typedef struct VT_82FFD2A8 {
  void *s[2];
  void (*Release)(Obj_82FFD2A8 *);
} VT_82FFD2A8;
struct Obj_82FFD2A8 { VT_82FFD2A8 *vt; };
extern Obj_82FFD2A8 *fn_82FAB9C0(char *);
extern void fn_82FFCAC8(void *, Obj_82FFD2A8 *, int);
extern char *lbl_832642E0;
int fn_82FFD2A8(void *self)
{
  int r = 1;
  Obj_82FFD2A8 *p = fn_82FAB9C0(lbl_832642E0 + 0x674);
  if (p != 0) {
    fn_82FFCAC8(self, p, 0);
    p->vt->Release(p);
  } else {
    r = 0xf;
  }
  return r;
}
