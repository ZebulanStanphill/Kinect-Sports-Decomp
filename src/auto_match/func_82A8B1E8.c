struct O_82A8B1E8;
typedef struct VT_82A8B1E8 {
  char pad[0x10];
  unsigned char (*f10)(struct O_82A8B1E8 *, void *, int, void *);
} VT_82A8B1E8;
typedef struct O_82A8B1E8 { VT_82A8B1E8 *vt; } O_82A8B1E8;
typedef struct L_82A8B1E8 { char out[8]; char b[16]; char a[12]; } L_82A8B1E8;
extern void fn_82A86FF8(void *, void *, int);
extern void fn_82A8C620(void *, int, int, int);

int fn_82A8B1E8(O_82A8B1E8 *o, int x, int y, int z)
{
  L_82A8B1E8 L;
  if (!o->vt->f10(o, L.a, 0xc, L.out)) {
    return 0;
  }
  fn_82A86FF8(L.b, L.a, 0xc);
  fn_82A8C620(L.b, 0, 0x20, x);
  fn_82A8C620(L.b, 0x20, 0x20, y);
  fn_82A8C620(L.b, 0x40, 0x20, z);
  return 1;
}
