extern int fn_8265C990();
extern int fn_8291CB48();

typedef struct {
  int pad0;
  void *a;
  void *b;
  char pad1[0x2c];
  int fa;
  int fb;
  char pad2[0xc];
  void *c;
  void *d;
} S;

void fn_8291CAB8(S *p)
{
  if (p->a != 0 && p->fa != 0) {
    fn_8265C990(p->a, 0x24810000);
  }
  if (p->b != 0 && p->fb != 0) {
    fn_8265C990(p->b, 0x24810000);
  }
  if (p->c != 0) {
    fn_8291CB48(p->c, 1);
  }
  if (p->d != 0) {
    fn_8291CB48(p->d, 1);
  }
}
