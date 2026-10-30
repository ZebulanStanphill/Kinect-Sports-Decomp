typedef struct Edge_82D58B20 { int from; int to; } Edge_82D58B20;
typedef struct Graph_82D58B20 {
  unsigned char pad[0x110];
  unsigned int mask[1];
  unsigned char pad2[0x1e24 - 0x114];
  Edge_82D58B20 *edges;
  int nedges;
} Graph_82D58B20;

void fn_82D58B20(Graph_82D58B20 *g, int a, int b, int depth)
{
  int i;
  g->mask[a] |= g->mask[b];
  for (i = 0; i < g->nedges; i++) { Edge_82D58B20 *e = &g->edges[i]; if (e->to == a) fn_82D58B20(g, e->from, e->to, depth + 1); }
}
