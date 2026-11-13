typedef struct Item_82F52C20 Item_82F52C20;
typedef struct {
    void *slots[6];
    void (*destroy)(Item_82F52C20 *self, int flags);
    void *slot1c;
    void (*detach)(Item_82F52C20 *self);
} ItemVt_82F52C20;
struct Item_82F52C20 {
    ItemVt_82F52C20 *vt;
    int pad4;
    int refs;
};
typedef struct Sink_82F52C20 Sink_82F52C20;
typedef struct {
    void *slots[4];
    void (*remove)(Sink_82F52C20 *self, Item_82F52C20 *item);
} SinkVt_82F52C20;
struct Sink_82F52C20 {
    SinkVt_82F52C20 *vt;
};
typedef struct {
    int pad[2];
    Sink_82F52C20 *sink;
} Owner_82F52C20;

void fn_82F52C20(Owner_82F52C20 *o, Item_82F52C20 *item, int destroy)
{
    if (o->sink != 0) {
        item->refs--;
        if (destroy != 0) {
            if (item->refs == 0) {
                item->vt->detach(item);
                o->sink->vt->remove(o->sink, item);
                item->vt->destroy(item, 1);
            }
        } else {
            o->sink->vt->remove(o->sink, item);
        }
    }
}
