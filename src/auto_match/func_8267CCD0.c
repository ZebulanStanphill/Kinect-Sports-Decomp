struct N_8267CCD0 { int p; struct N_8267CCD0 *next; };
struct O_8267CCD0 { char p0[0x1c]; struct N_8267CCD0 *head; int f20; int f24; };
extern void fn_82A1E658(int);
extern void fn_8267BE38(void *);
extern void fn_826EA050(void *);
void fn_8267CCD0(struct O_8267CCD0 *o)
{
  struct N_8267CCD0 *n, *e;
  n = o->head;
  while (n != 0) {
    e = n;
    n = e->next;
    fn_82A1E658(e->p);
    fn_8267BE38(e);
  }
  o->head = 0;
  o->f24 = 0;
  o->f20 = 0;
  fn_826EA050(o);
}
