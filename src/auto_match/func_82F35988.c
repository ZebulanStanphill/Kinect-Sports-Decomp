typedef struct { int v[0x1a]; } List;
typedef struct { List list; int n; } W;
typedef struct { char pad[200]; W w; } S;

extern int fn_82F37588(List *l, int all);

int fn_82F35988(S *p)
{
  W *w = &p->w;
  fn_82F37588(&w->list, 0);
  w->n = 0;
  return 0;
}
