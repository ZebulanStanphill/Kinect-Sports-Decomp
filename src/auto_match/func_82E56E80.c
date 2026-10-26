typedef struct { int v[0x1a]; } List;
typedef struct { List list; int n; } W;
typedef struct { char pad[0x44]; W w; } S;

extern int fn_82E569B0(List *l, int all);

int fn_82E56E80(S *p)
{
  W *w = &p->w;
  fn_82E569B0(&w->list, 0);
  w->n = 0;
  return 0;
}
