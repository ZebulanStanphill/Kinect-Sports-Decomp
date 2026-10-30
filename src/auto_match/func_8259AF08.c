typedef struct Node { char pad[0xc]; char *v; } Node;
typedef struct Map { int pad; Node *head; } Map;
typedef struct S { char pad[0x34]; Map map; char pad2[0x60 - 0x3c]; char lock[4]; } S;
extern int fn_82A1BB18(void);
extern void fn_8259C5D8(void *lock, int a, int id);
extern void fn_8259BB38(Node **out, Map *m, int key);
extern void fn_8259C738(void *lock);

char *fn_8259AF08(S *s, int key)
{
    Node *it;
    void *lock = s->lock;
    fn_8259C5D8(lock, 1, fn_82A1BB18() + 1);
    fn_8259BB38(&it, &s->map, key);
    fn_82A1BB18();
    fn_8259C738(lock);
    if (it == s->map.head)
        return 0;
    return it->v + 0x18;
}
