typedef struct { void *vt; char pad[0x38]; void *child; } Obj_824AFBF0;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern void *fn_824AE8C0(void *, void *);
extern char lbl_821C0044[];

Obj_824AFBF0 *fn_824AFBF0(void *src)
{
  Obj_824AFBF0 *p = (Obj_824AFBF0 *)fn_8265C9E0(0x40);
  if (p != 0) {
    void *mem;
    fn_82F53A20(p, src);
    p->vt = lbl_821C0044;
    mem = fn_8265C9E0(0x90);
    p->child = mem ? fn_824AE8C0(mem, src) : 0;
    return p;
  }
  return 0;
}
