extern void *fn_82CEE578(void *, void *, int);
extern void *fn_82CEDB38(void *, ...);
extern void *fn_82CEDCF0(void *, ...);
extern void fn_82CED958(void *);
extern void __debugbreak(void);
typedef struct Err_82D0BAA8 { int (**vt)(void *, int, int, void *, const char *, int); } Err_82D0BAA8;
extern Err_82D0BAA8 *lbl_8323B464;
extern char lbl_821C24F0[];

typedef struct Obj_82D0BAA8 { int a, b; char *c; } Obj_82D0BAA8;

char * fn_82D0BAA8(Obj_82D0BAA8 *p)
{
  char *s = p->c;
  if (*(char *)(s + 0x1b4) == 0) {
    char buf[16];
    char text[512];
    void *o;
    int r;
    int idx;
    fn_82CEE578(buf, text, 0x200);
    idx = *(int *)(s + 0x1b0);
    o = fn_82CEDB38(buf, "No mass properties available (");
    o = fn_82CEDCF0(o, idx);
    fn_82CEDB38(o, lbl_821C24F0);
    r = (*lbl_8323B464->vt[3])(lbl_8323B464, 3, 0x79f9d887, text, ".\\GeometryProcessing\\ConvexHull\\hkgpConvexHull.cpp", 0x14c);
    if (r != 0) __debugbreak();
    fn_82CED958(buf);
  }
  return p->c + 0x150;
}
