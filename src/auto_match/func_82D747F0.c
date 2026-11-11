typedef struct Agent_82D747F0 Agent_82D747F0;
typedef struct {
    void *f[10];
    void (*slot10)(Agent_82D747F0 *self, float a, float b, void *c);
} AgentVtbl_82D747F0;
struct Agent_82D747F0 { AgentVtbl_82D747F0 *vt; };

void fn_82D747F0(void *self, Agent_82D747F0 **child, float a, float b, void *c)
{
    (*child)->vt->slot10(*child, a, b, c);
}
