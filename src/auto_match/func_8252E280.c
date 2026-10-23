extern void fn_82580F90(void *, void *);
extern void *lbl_83281124;

typedef struct S {
  unsigned char f0;
  unsigned char active;
  unsigned char pad2[2];
  void *items[13];
} S;

void fn_8252E280(S *p)
{
  void *m = lbl_83281124;
  if (m) {
    fn_82580F90(m, p->items[0]);
    fn_82580F90(m, p->items[1]);
    fn_82580F90(m, p->items[2]);
    fn_82580F90(m, p->items[3]);
    fn_82580F90(m, p->items[4]);
    fn_82580F90(m, p->items[5]);
    fn_82580F90(m, p->items[6]);
    fn_82580F90(m, p->items[7]);
    fn_82580F90(m, p->items[8]);
    fn_82580F90(m, p->items[9]);
    fn_82580F90(m, p->items[10]);
    fn_82580F90(m, p->items[11]);
    fn_82580F90(m, p->items[12]);
  }
  p->active = 0;
}
