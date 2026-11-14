typedef struct Record_825D2CA8 {
    int id;
    unsigned char size;
} Record_825D2CA8;

typedef struct Records_825D2CA8 {
    int count;
    Record_825D2CA8 first;
} Records_825D2CA8;

struct Node_825D2CA8;

typedef struct NodeVtbl_825D2CA8 {
    char pad[0x44];
    Records_825D2CA8 *(*getRecords)(struct Node_825D2CA8 *self);
} NodeVtbl_825D2CA8;

typedef struct Entry_825D2CA8 {
    struct Node_825D2CA8 *node;
    char pad[0x19c];
} Entry_825D2CA8;

typedef struct List_825D2CA8 {
    Entry_825D2CA8 *data;
    int count;
} List_825D2CA8;

typedef struct Node_825D2CA8 {
    NodeVtbl_825D2CA8 *vt;
    char pad[0x94];
    List_825D2CA8 children;
} Node_825D2CA8;

typedef struct Queue_825D2CA8 {
    char pad[0xc];
    unsigned short elemSize;
} Queue_825D2CA8;

typedef struct Self_825D2CA8 {
    char pad[0xc];
    Queue_825D2CA8 queue;
} Self_825D2CA8;

typedef struct Event_825D2CA8 {
    Record_825D2CA8 *record;
    Entry_825D2CA8 *entry;
} Event_825D2CA8;

extern void *fn_8251E4D0(Queue_825D2CA8 *queue);
extern void fn_82A1DD38(void *dst, const void *src, unsigned int size);

void fn_825D2CA8(Self_825D2CA8 *self, List_825D2CA8 *list)
{
    int count;
    int i;

    if (list != 0 && (count = list->count) > 0) {
        for (i = 0; i < count; i++) {
            Entry_825D2CA8 *entry = &list->data[i];
            Node_825D2CA8 *node = entry->node;
            Records_825D2CA8 *records = node->vt->getRecords(node);
            if (records != 0) {
                int n = records->count;
                Record_825D2CA8 *rec = &records->first;
                int j;
                for (j = 0; j < n; j++) {
                    Event_825D2CA8 ev;
                    Queue_825D2CA8 *queue = &self->queue;
                    void *dst;
                    ev.entry = entry;
                    ev.record = rec;
                    dst = fn_8251E4D0(queue);
                    fn_82A1DD38(dst, &ev, queue->elemSize);
                    rec = (Record_825D2CA8 *)((char *)rec + rec->size);
                }
            }
            fn_825D2CA8(self, &node->children);
        }
    }
}
