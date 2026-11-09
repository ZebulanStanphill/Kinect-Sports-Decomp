typedef struct { int v[5]; } Block_824A98F0;
typedef struct Obj_824A98F0 {
  void *vt;
  int base[14];
  Block_824A98F0 data;
} Obj_824A98F0;
typedef struct Src_824A98F0 {
  int pad[18];
  Block_824A98F0 data;
} Src_824A98F0;

extern void *fn_8265C9E0(unsigned);
extern void fn_82F53A20(void *, void *);
extern char lbl_821BF958[];

Obj_824A98F0 *fn_824A98F0(Src_824A98F0 *src)
{
  Obj_824A98F0 *p = (Obj_824A98F0 *)fn_8265C9E0(0x50);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF958;
    p->data = src->data;
    return p;
  }
  return 0;
}
