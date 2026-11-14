typedef struct {
    char pad[0x34];
    unsigned int adj[1];
} Graph_82D4B528;

void fn_82D4B528(Graph_82D4B528 *g, unsigned int a, unsigned int b)
{
    g->adj[a] &= ~(1 << b);
    g->adj[b] &= ~(1 << a);
}
