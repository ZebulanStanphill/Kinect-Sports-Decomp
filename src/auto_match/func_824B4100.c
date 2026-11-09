typedef struct { void *vt; char pad[0x38]; void *child; } Obj_824B4100;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern void *fn_824B2C78(void *, void *);
extern char lbl_821C01B4[];

Obj_824B4100 *fn_824B4100(void *src)
{
  Obj_824B4100 *p = (Obj_824B4100 *)fn_8265C9E0(0x40);
  if (p != 0) {
    void *mem;
    fn_82F53A20(p, src);
    p->vt = lbl_821C01B4;
    mem = fn_8265C9E0(0xa0);
    p->child = mem ? fn_824B2C78(mem, src) : 0;
    return p;
  }
  return 0;
}
