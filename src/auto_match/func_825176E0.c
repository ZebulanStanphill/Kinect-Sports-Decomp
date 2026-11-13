extern char lbl_821969CC[];
extern void *fn_8265C9E0(int);
extern void fn_828A8C08(void *, void *);
extern void fn_825165E0(void *);

typedef struct Obj_825176E0 {
  void *vt;
  char pad[0x64];
  int f68, f6c, f70, f74, f78, f7c, f80, f84;
} Obj_825176E0;

Obj_825176E0 *fn_825176E0(void *a)
{
  Obj_825176E0 *p = (Obj_825176E0 *)fn_8265C9E0(0x88);
  int *z;
  if (p != 0) {
    fn_828A8C08(p, a);
    p->vt = lbl_821969CC;
    z = &p->f68;
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    z[4] = 0;
    z[5] = 0;
    z[6] = 0;
    fn_825165E0(p);
    return p;
  }
  return 0;
}
