extern "C" void *fn_82B7BD28(void *heap, unsigned int size);
extern "C" void *lbl_83223EC4;
extern "C" void *fn_82BA0FD8(int bits, void *heap);
struct Graph_82BD0C10;

struct List_82BA03B8 {
    unsigned int capacity;
    unsigned int count;
    void *data;
    void *heap;

    List_82BA03B8(void *heap)
    {
        Initialize(heap);
    }

    List_82BA03B8 *Initialize(void *heap);

    static void *operator new(unsigned int size, void *heap)
    {
        void **block = (void **)fn_82B7BD28(heap, size + 4);
        *block = heap;
        return block + 1;
    }
};

struct Node_82BD0A18 {
    char data[20];
    Node_82BD0A18(int index, int zero, Graph_82BD0C10 *graph);

    static void *operator new(unsigned int size, void *heap)
    {
        void **block = (void **)fn_82B7BD28(heap, size + 4);
        *block = heap;
        return block + 1;
    }
};

struct Graph_82BD0C10 {
    char padding[0x5b0];
    void *heap;
};

struct Object_82BD0C10 {
    void *bits;
    List_82BA03B8 *nodes;
    Graph_82BD0C10 *graph;
    int flags;
    int count;
};

extern "C" Node_82BD0A18 **fn_82BC0088(List_82BA03B8 *list, unsigned int index);

extern "C" Object_82BD0C10 *fn_82BD0C10(Object_82BD0C10 *self, int flags, int count, Graph_82BD0C10 *graph)
{
    self->flags = flags;
    self->graph = graph;
    self->count = count;
    self->bits = 0;
    if (count != 0) {
        lbl_83223EC4 = fn_82B7BD28(graph->heap, count * 4);
        self->nodes = new (self->graph->heap) List_82BA03B8(self->graph->heap);
        for (int index = 0; index < self->count; ++index) {
            Node_82BD0A18 *node = new (self->graph->heap) Node_82BD0A18(index, 0, self->graph);
            *fn_82BC0088(self->nodes, self->nodes->count) = node;
        }
        self->bits = fn_82BA0FD8(((self->count - 1) * self->count) / 2, self->graph->heap);
    }
    return self;
}
