extern int fn_82873A50(int);
extern void fn_82865170(void);
extern void fn_82866418(void);
typedef struct VT_82873BB8 { void *f[3]; int (*f0c)(struct Obj_82873BB8 *, int); } VT_82873BB8;
typedef struct Obj_82873BB8 { VT_82873BB8 *vt; } Obj_82873BB8;
int fn_82873BB8(int p1, Obj_82873BB8 *o, int p3)
{
  if (fn_82873A50(p1) < 0) return 0xa0120000;
  if (o->vt->f0c(o, p3) < 0) {
    fn_82865170();
    fn_82866418();
    return 0xa0120000;
  }
  return 0x20120000;
}
