typedef void (*code)();
extern int fn_8267BE38();
extern int fn_82759498();
extern int fn_8275CEE0();
extern unsigned int lbl_820147E0;
extern unsigned int lbl_82014840;

typedef struct { char b[0x28]; } A28;
typedef struct { code *vt; char b[0x14]; } B18;

typedef struct {
  void *vt;
  int pad[10];
  A28 *a;
  B18 *b;
  unsigned int na;
  unsigned int nb;
} Obj;

void fn_82760C38(Obj *p)
{
  unsigned int i;

  p->vt = &lbl_82014840;
  for (i = 0; i < p->na; i++) {
    fn_82759498(&p->a[i]);
  }
  fn_8267BE38(p->a);
  for (i = 0; i < p->nb; i++) {
    (*p->b[i].vt[0])(&p->b[i], 0);
  }
  fn_8267BE38(p->b);
  p->vt = &lbl_820147E0;
  fn_8275CEE0(p);
}
