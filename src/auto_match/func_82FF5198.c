typedef struct Node_82FF5198 {
    int field0;
    int refcount;
} Node_82FF5198;

typedef struct Obj_82FF5198 {
    int field0;
    char table[0x84];
    char cs[0x1C];
} Obj_82FF5198;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Node_82FF5198 *fn_82FF5200(void *table, int key);
extern void fn_82FF4970(Obj_82FF5198 *obj, int key, Node_82FF5198 *node);

void fn_82FF5198(Obj_82FF5198 *obj, int key)
{
    Node_82FF5198 *node;

    RtlEnterCriticalSection(obj->cs);
    node = fn_82FF5200(obj->table, key);
    if (node != 0) {
        node->refcount = node->refcount - 1;
        fn_82FF4970(obj, key, node);
    } else {
        RtlLeaveCriticalSection(obj->cs);
    }
}
