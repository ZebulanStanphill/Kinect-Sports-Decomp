// Accumulates elapsed system ticks for an eligible event and its statistics
// entry. The placeholder structures reflect the fields used by this routine.
struct System_8287D950 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
struct Stats_8287D950 { int pad[2]; unsigned int elapsed, count; };
struct Node_8287D950 { char pad[0x18]; Stats_8287D950 stats; };
struct Event_8287D950 { char pad[0x18]; void *key; char pad1c[0x24]; unsigned __int64 tick; };
struct State_8287D950 { Stats_8287D950 stats; char pad[0xe0]; char entries; };
struct Iterator_8287D950 { Node_8287D950 *node; };
extern "C" {
System_8287D950 *fn_825089A0();
bool fn_828821A0(void *);
bool fn_82882218(void *);
void fn_8287D6D8(Iterator_8287D950 *, void *, void **);
}
static __forceinline Stats_8287D950 *find(void *tree, void **key) { Iterator_8287D950 it; fn_8287D6D8(&it, tree, key); return &it.node->stats; }
extern "C" void fn_8287D950(State_8287D950 *self, Event_8287D950 *event)
{
    void *key = event->key;
    if (!fn_828821A0(key) && !fn_82882218(key)) {
        void *searchKey = key;
        Stats_8287D950 *stats = find(&self->entries, &searchKey);
        unsigned int elapsed = (unsigned int)fn_825089A0()->vf0C() - (unsigned int)event->tick;
        stats->elapsed += elapsed;
        ++stats->count;
        self->stats.elapsed = elapsed + self->stats.elapsed;
        ++self->stats.count;
    }
}
