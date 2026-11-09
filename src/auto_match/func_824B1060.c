typedef struct { void *vt; char pad[0x38]; void *child; } Obj_824B1060;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern void *fn_824AFD70(void *, void *);
extern char lbl_821C0090[];

Obj_824B1060 *fn_824B1060(void *src)
{
  Obj_824B1060 *p = (Obj_824B1060 *)fn_8265C9E0(0x40);
  if (p != 0) {
    void *mem;
    fn_82F53A20(p, src);
    p->vt = lbl_821C0090;
    mem = fn_8265C9E0(0xb0);
    p->child = mem ? fn_824AFD70(mem, src) : 0;
    return p;
  }
  return 0;
}
