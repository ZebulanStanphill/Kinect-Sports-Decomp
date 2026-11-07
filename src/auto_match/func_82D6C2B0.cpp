extern "C" unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern "C" TimerStream *KeTlsGetValue(unsigned int);
extern "C" unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

class Shapes_82D6C2B0 { public: virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual int lookup(int, char *); };
class Source_82D6C2B0 { public: virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual Shapes_82D6C2B0 *getShapes(); };
struct Query_82D6C2B0 { Source_82D6C2B0 *src; int x4; int x8; };
struct Result_82D6C2B0 { int x0; unsigned char done; };
struct Info_82D6C2B0 { int shape; int key; int x8; Query_82D6C2B0 *query; };
class Handler_82D6C2B0 { public: virtual void s0(); virtual void s1(); virtual void s2(); virtual void handle(Info_82D6C2B0 *, int, int, Result_82D6C2B0 *); };
struct Item_82D6C2B0 { int key; Handler_82D6C2B0 *handler; };
struct Coll_82D6C2B0 { char pad[0xc]; Item_82D6C2B0 *items; int count; };

extern "C" void fn_82D6C2B0(Coll_82D6C2B0 *self, Query_82D6C2B0 *q, int a, int b, Result_82D6C2B0 *res)
{
    Shapes_82D6C2B0 *shapes;
    Item_82D6C2B0 *it;
    int i;
    Info_82D6C2B0 info;
    char buf[512];

    timer("TtShapeCollection");
    shapes = q->src->getShapes();
    info.x8 = q->x8;
    info.query = q;
    it = self->items;
    for (i = self->count - 1; i >= 0; i--) {
        int key = it->key;
        info.shape = shapes->lookup(key, buf);
        info.key = key;
        it->handler->handle(&info, a, b, res);
        if (res->done)
            break;
        it++;
    }
    timer("Et");
}
