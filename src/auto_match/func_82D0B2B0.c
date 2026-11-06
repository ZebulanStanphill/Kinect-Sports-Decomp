extern void *fn_82CEE578(void *, void *, int);
extern void *fn_82CEDB38(void *, ...);
extern void *fn_82CEDCF0(void *, ...);
extern void fn_82CED958(void *);
extern void __debugbreak(void);
typedef struct Err_82D0B2B0 { int (**vt)(void *, int, int, void *, const char *, int); } Err_82D0B2B0;
extern Err_82D0B2B0 *lbl_8323B464;
extern char lbl_821C24F0[];

typedef struct Obj_82D0B2B0 { int a, b; char *c; } Obj_82D0B2B0;

int fn_82D0B2B0(Obj_82D0B2B0 *p)
{
  char *s = p->c;
  if (*(char *)(s + 0x1b5) == 0) {
    char buf[16];
    char text[512];
    void *o;
    int r;
    int idx;
    fn_82CEE578(buf, text, 0x200);
    idx = *(int *)(s + 0x1b0);
    o = fn_82CEDB38(buf, "No index available (");
    o = fn_82CEDCF0(o, idx);
    fn_82CEDB38(o, lbl_821C24F0);
    r = (*lbl_8323B464->vt[3])(lbl_8323B464, 3, 0x79f9d886, text, ".\\GeometryProcessing\\ConvexHull\\hkgpConvexHull.cpp", 0x146);
    if (r != 0) __debugbreak();
    fn_82CED958(buf);
  }
  return *(int *)(p->c + 0x58);
}
