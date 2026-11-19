struct Node_8282D418 {
    unsigned int group; /* 0x00 */
    int key;            /* 0x04 */
    char pad8[0xc];
};

struct Graph_8282D418 {
    char pad0[0xac];
    int nodeCount; /* 0x0ac */
    char padb0[0x7c];
    Node_8282D418 **groups; /* 0x12c */
    unsigned int mode;      /* 0x130 */
};

struct Tree_8282D418 {
    Tree_8282D418(void *owner, Graph_8282D418 *graph);

    void *owner;
    unsigned int count;
    void **nodes;
};

class LinkSet_8282D418
{
  public:
    LinkSet_8282D418();
    ~LinkSet_8282D418();

  private:
    void *context;
    int group;
    unsigned int count;
    void *links;
};

struct Builder_8282D418 {
    Graph_8282D418 *graph;      /* 0x00 */
    Tree_8282D418 *tree;        /* 0x04 */
    unsigned int groupCount;    /* 0x08 */
    LinkSet_8282D418 *linkSets; /* 0x0c */
};

void *operator new(unsigned int size);
void *operator new[](unsigned int size);

extern "C" void fn_8282D3A8(Builder_8282D418 *self);
extern "C" int fn_8282D1C0(void *source, Builder_8282D418 *self);
extern "C" void fn_8282CF00(Graph_8282D418 *graph);
extern "C" void fn_82826B48(Graph_8282D418 *graph, unsigned int *count);
extern "C" void fn_828316A0(LinkSet_8282D418 *set, Builder_8282D418 *context, unsigned int group,
                            unsigned int count);

extern "C" int fn_8282D418(Builder_8282D418 *self, void *source)
{
    unsigned int group;
    unsigned int count;
    Node_8282D418 *node;
    Node_8282D418 *end;

    fn_8282D3A8(self);
    if (fn_8282D1C0(source, self) != 0) {
        return 0;
    }
    if (self->graph->mode == 1) {
        fn_8282CF00(self->graph);
        self->graph = 0;
        return 0;
    }
    self->tree = new Tree_8282D418(self, self->graph);
    fn_82826B48(self->graph, &self->groupCount);
    self->linkSets = new LinkSet_8282D418[self->groupCount];
    end = self->graph->groups[0] + self->graph->nodeCount;
    for (group = 1; group <= self->groupCount; group++) {
        count = 0;
        for (node = self->graph->groups[group - 1]; node != end; node++) {
            if (node->group != group) {
                break;
            }
            count++;
        }
        fn_828316A0(&self->linkSets[group - 1], self, group, count);
    }
    return 1;
}
