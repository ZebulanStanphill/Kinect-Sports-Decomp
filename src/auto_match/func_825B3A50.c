extern void *fn_8265C9E0(int);
extern void fn_827D84F8(void *, void *);
extern char lbl_821C8424[];
extern void *lbl_83265A24;

typedef struct Obj_825B3A50 {
  void *vt;
  int a, b, c, d;
} Obj_825B3A50;

void fn_825B3A50(int a, int b, int c, int d)
{
  Obj_825B3A50 *mem = (Obj_825B3A50 *)fn_8265C9E0(0x14);
  Obj_825B3A50 *o;
  if (mem != 0) {
    mem->a = a;
    mem->b = b;
    mem->c = c;
    mem->d = d;
    mem->vt = lbl_821C8424;
    o = mem;
  } else {
    o = 0;
  }
  fn_827D84F8(lbl_83265A24, o);
}
