extern void *fn_82AC6560(unsigned int, int, int);
typedef struct W_82AD17B0 {
  unsigned int x0:1;
  unsigned int f1:1;
  unsigned int x2:2;
  unsigned int a:3;
  unsigned int c:12;
  unsigned int b:8;
  unsigned int d:5;
} W_82AD17B0;
typedef struct N_82AD17B0 { W_82AD17B0 w; struct N_82AD17B0 *p4; struct N_82AD17B0 *next; unsigned int owner; } N_82AD17B0;
typedef struct O_82AD17B0 { int p0; N_82AD17B0 *head; unsigned int flags; } O_82AD17B0;

void fn_82AD17B0(unsigned int param_1, O_82AD17B0 *o)
{
  N_82AD17B0 *n;
  N_82AD17B0 *c;

  n = (N_82AD17B0 *)fn_82AC6560(param_1, 0x14, 0x1a);
  n->owner = (unsigned int)o;
  n->w.a = 1;
  n->w.b = 0xe4;
  c = o->head;
  n->next = c;
  o->head = n;
  n->w.a = (o->flags >> 14) & 7;
  for (; c != 0; c = c->next) {
    if (c->w.a != 0) {
      if ((unsigned char)c->w.f1 != 0) {
        n->w.c = c->w.c;
        n->w.f1 = 1;
      }
      break;
    }
  }
  if ((o->flags & 1) != 0) {
    n->w.d = 1;
  }
}
