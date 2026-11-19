struct Node_828316A0 {
    int f0;  /* 0x00 */
    int key; /* 0x04 */
    char pad8[0xc];
};

struct Graph_828316A0 {
    char pad0[0xac];
    int nodeCount; /* 0x0ac */
    char padb0[0x7c];
    Node_828316A0 **groups; /* 0x12c */
};

struct Context_828316A0 {
    Graph_828316A0 *graph; /* 0x00 */
};

class Link_828316A0
{
  public:
    Link_828316A0();
    ~Link_828316A0();

  private:
    Node_828316A0 *node;
    unsigned int value;
};

struct LinkSet_828316A0 {
    Context_828316A0 *context; /* 0x00 */
    int group;                 /* 0x04 */
    unsigned int count;        /* 0x08 */
    Link_828316A0 *links;      /* 0x0c */
};

void *operator new[](unsigned int size);

extern "C" unsigned int fn_8282D300(Context_828316A0 *context, int key);
extern "C" void fn_82835BF0(Link_828316A0 *link, Node_828316A0 *node, unsigned int value);

extern "C" void fn_828316A0(LinkSet_828316A0 *self, Context_828316A0 *context, int group, unsigned int count)
{
    Node_828316A0 *node;
    Node_828316A0 *end;
    unsigned int i;
    Graph_828316A0 *graph;

    self->context = context;
    self->group = group;
    self->count = count;
    if (count != 0) {
        self->links = new Link_828316A0[count];
        i = 0;
        graph = self->context->graph;
        end = graph->groups[0] + graph->nodeCount;
        for (node = graph->groups[self->group - 1]; node != end; node++) {
            fn_82835BF0(&self->links[i], node, fn_8282D300(self->context, node->key));
            i++;
            if (i == self->count) {
                break;
            }
        }
    } else {
        self->links = 0;
    }
}
