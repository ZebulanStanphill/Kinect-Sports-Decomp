typedef struct Text_8288EE68 {
    void *data;
    void *extra;
} Text_8288EE68;

typedef struct Node_8288EE68 Node_8288EE68;

typedef struct NodeVtbl_8288EE68 {
    void (*Destroy)(Node_8288EE68 *self, int flags); /* 0x00 */
    int (*GetType)(Node_8288EE68 *self);             /* 0x04 */
} NodeVtbl_8288EE68;

struct Node_8288EE68 {
    NodeVtbl_8288EE68 *vtbl; /* 0x00 */
    char pad4[0x7c];
    char name[0x1d];      /* 0x80 */
    unsigned char active; /* 0x9d */
};

typedef struct Iterator_8288EE68 {
    void *table;         /* 0x00 */
    Node_8288EE68 *node; /* 0x04 */
} Iterator_8288EE68;

typedef struct Self_8288EE68 {
    char pad0[0x10];
    void *target; /* 0x10 */
    char name[4]; /* 0x14 */
} Self_8288EE68;

void *fn_82897BD0(void *key);
void fn_82882F30(Iterator_8288EE68 *it);
void fn_82882FB8(Iterator_8288EE68 *it);
void fn_828B5580(Text_8288EE68 *text, void *source);
unsigned char fn_828B5738(Text_8288EE68 *a, Text_8288EE68 *b);
void fn_828B55B0(Text_8288EE68 *text);
void *fn_8265C9E0(unsigned int size);
void *fn_823AA970(void *key);
void *fn_8288D9D8(void *mem, Self_8288EE68 *self, void *a, int b);
void fn_82886518(void *p, int a, int b);
void fn_828BE158(void *a, void *b, void *c, int d);

void fn_8288EE68(Self_8288EE68 *self, void *key)
{
    Iterator_8288EE68 it;
    Node_8288EE68 *node;
    Text_8288EE68 ownName;
    Text_8288EE68 nodeName;
    unsigned char same;
    void *mem;
    void *created;
    void *target;

    it.table = fn_82897BD0(key);
    it.node = 0;
    fn_82882F30(&it);
    while (it.node != 0) {
        node = it.node;
        if (node->vtbl->GetType(node) == 0xd && node->active != 0) {
            fn_828B5580(&ownName, self->name);
            fn_828B5580(&nodeName, node->name);
            same = fn_828B5738(&nodeName, &ownName);
            fn_828B55B0(&nodeName);
            fn_828B55B0(&ownName);
            if (same != 0) {
                node->vtbl->Destroy(node, 1);
                break;
            }
        }
        fn_82882FB8(&it);
    }

    mem = fn_8265C9E0(0xa0);
    created = mem != 0 ? fn_8288D9D8(mem, self, fn_823AA970(key), 0) : 0;
    fn_82886518(created, 1000, -1);
    target = self->target;
    fn_828BE158(target, created, fn_82897BD0(key), 0);
}
