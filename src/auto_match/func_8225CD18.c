extern int fn_8225CDB0(void *p, unsigned int v);
extern int fn_8225D388(void *p, unsigned int i);
extern int fn_8225D6A0(void *p, int v);
extern unsigned int lbl_83265988;

typedef struct {
  char pad[0x58];
  unsigned int cur;
  char pad2[0x68 - 0x5c];
  int busy;
} Obj;

void fn_8225CD18(Obj *p)
{
  unsigned int i;

  if (lbl_83265988 != 0) {
    fn_8225CDB0(p, lbl_83265988);
  }
  fn_8225D6A0(p, 1);
  if (p->busy == 0) {
    p->busy = 1;
    for (i = 0; i < 8; i++) {
      if (i != p->cur) {
        fn_8225D388(p, i);
      }
    }
    p->busy = 0;
  }
}
