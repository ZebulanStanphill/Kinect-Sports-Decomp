extern void *fn_82CEE578(void *, void *, int);
extern void *fn_82CEDB38(void *, ...);
extern void *fn_82CEDC88(void *, ...);
extern void fn_82CED958(void *);
extern int fn_82D2B1E8(void *, int);
extern void __debugbreak(void);
typedef struct Err_82D20378 { int (**vt)(void *, int, int, void *, const char *, int); } Err_82D20378;
extern Err_82D20378 *lbl_8323B464;
extern char lbl_821C24F0[];

unsigned char fn_82D20378(void *mesh, unsigned char report)
{
  int n = fn_82D2B1E8(mesh, 1);
  if (report && n != 0) {
    char buf[16];
    char text[512];
    void *o;
    int r;
    fn_82CEE578(buf, text, 0x200);
    o = fn_82CEDB38(buf, "Invalid mesh topology (");
    o = fn_82CEDC88(o, n);
    fn_82CEDB38(o, lbl_821C24F0);
    r = (*lbl_8323B464->vt[3])(lbl_8323B464, 3, 0x4c5c2afa, text, ".\\GeometryProcessing\\Mesh\\hkgpMesh.cpp", 0x98d);
    if (r != 0) __debugbreak();
    fn_82CED958(buf);
  }
  return n == 0;
}
