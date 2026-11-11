typedef struct Collector_82D6A7B0 Collector_82D6A7B0;
typedef struct {
    void *dtor;
    void (*addCdBodyPair)(Collector_82D6A7B0 *self, const void *bodyA, const void *bodyB);
} CollectorVtbl_82D6A7B0;
struct Collector_82D6A7B0 { CollectorVtbl_82D6A7B0 *vt; };

void fn_82D6A7B0(void *self, const void *bodyA, const void *bodyB, const void *input, Collector_82D6A7B0 *collector)
{
    collector->vt->addCdBodyPair(collector, bodyA, bodyB);
}
