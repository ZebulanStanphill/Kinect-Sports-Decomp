typedef struct { int v[5]; } Block_824ACCD8;
typedef struct Obj_824ACCD8 {
  void *vt;
  int base[14];
  Block_824ACCD8 data;
} Obj_824ACCD8;
typedef struct Src_824ACCD8 {
  int pad[18];
  Block_824ACCD8 data;
} Src_824ACCD8;

extern void *fn_8265C9E0(unsigned);
extern void fn_82F53A20(void *, void *);
extern char lbl_821BFE18[];

Obj_824ACCD8 *fn_824ACCD8(Src_824ACCD8 *src)
{
  Obj_824ACCD8 *p = (Obj_824ACCD8 *)fn_8265C9E0(0x50);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BFE18;
    p->data = src->data;
    return p;
  }
  return 0;
}
