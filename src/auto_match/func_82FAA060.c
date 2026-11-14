typedef struct Doc_82FAA060 Doc_82FAA060;
typedef struct Node_82FAA060 Node_82FAA060;
typedef struct List_82FAA060 List_82FAA060;

typedef struct Item_82FAA060 {
    char pad0[0x5c];
    unsigned int base;
    void *source;
} Item_82FAA060;

typedef struct Info_82FAA060 {
    char pad0[0xac];
    unsigned int value;
} Info_82FAA060;

typedef struct Iter_82FAA060 {
    List_82FAA060 *list;
    Node_82FAA060 *node;
} Iter_82FAA060;

typedef struct NodeVt_82FAA060 {
    void *pad0[3];
    Node_82FAA060 *(*Next)(Node_82FAA060 *self, Doc_82FAA060 *doc, Iter_82FAA060 *it, void *state);
} NodeVt_82FAA060;

struct Node_82FAA060 {
    NodeVt_82FAA060 *vt;
    char pad4[0x3c];
    Item_82FAA060 *item;
};

struct List_82FAA060 {
    void *pad0;
    Node_82FAA060 *first;
};

typedef struct DocVt_82FAA060 {
    void *pad0[6];
    List_82FAA060 *(*GetList)(Doc_82FAA060 *self);
    void *pad1c;
    Info_82FAA060 *(*GetInfo)(Doc_82FAA060 *self);
} DocVt_82FAA060;

struct Doc_82FAA060 { DocVt_82FAA060 *vt; };

typedef struct Self_82FAA060 {
    char pad0[8];
    Doc_82FAA060 *doc;
} Self_82FAA060;

extern unsigned int fn_82FAE140(void *source);

unsigned int fn_82FAA060(Self_82FAA060 *self)
{
    Iter_82FAA060 it;
    int state;
    Item_82FAA060 *item;
    List_82FAA060 *list;
    Node_82FAA060 *node;

    list = self->doc->vt->GetList(self->doc);
    if (list == 0)
        return 0;
    node = list->first;
    if (node == 0)
        return 0;
    it.list = list;
    it.node = node;
    for (;;) {
        item = it.node->item;
        if (item != 0) {
            void *source = item->source;
            unsigned int base = item->base;
            return base + fn_82FAE140(source);
        }
        it.node = it.node->vt->Next(it.node, self->doc, &it, &state);
        if (it.node == 0)
            break;
    }
    return self->doc->vt->GetInfo(self->doc)->value;
}
