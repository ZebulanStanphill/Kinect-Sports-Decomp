typedef struct { int v[5]; } Block_824AC648;
typedef struct Obj_824AC648 {
  void *vt;
  int base[14];
  Block_824AC648 data;
} Obj_824AC648;
typedef struct Src_824AC648 {
  int pad[18];
  Block_824AC648 data;
} Src_824AC648;

extern void *fn_8265C9E0(unsigned);
extern void fn_82F53A20(void *, void *);
extern char lbl_821BFD9C[];

Obj_824AC648 *fn_824AC648(Src_824AC648 *src)
{
  Obj_824AC648 *p = (Obj_824AC648 *)fn_8265C9E0(0x50);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BFD9C;
    p->data = src->data;
    return p;
  }
  return 0;
}
