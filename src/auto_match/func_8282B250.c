typedef struct Node_8282B250 {
    char pad0[0xc];
    int id; /* 0x0c */
} Node_8282B250;

typedef struct Query_8282B250 {
    void *key;           /* 0x00 */
    unsigned int value;  /* 0x04 */
    unsigned char found; /* 0x08 */
} Query_8282B250;

typedef struct Edge_8282B250 {
    char pad0[0x10];
    void **key;             /* 0x10 */
    int fromId;             /* 0x14 */
    int toId;               /* 0x18 */
    unsigned int fromValue; /* 0x1c */
    unsigned int toValue;   /* 0x20 */
} Edge_8282B250;

typedef struct Request_8282B250 {
    char pad0[0x10];
    int id;             /* 0x10 */
    unsigned int value; /* 0x14 */
    void **key;         /* 0x18 */
    int option1c;       /* 0x1c */
    int option20;       /* 0x20 */
    int option24;       /* 0x24 */
} Request_8282B250;

typedef struct Graph_8282B250 {
    char pad0[0x30];
    int removedCount; /* 0x30 */
    int pad34;
    int edgeCount; /* 0x38 */
    char pad3C[0x2dc];
    char requests[0x2c]; /* 0x318 */
    char edges[4];       /* 0x344 */
} Graph_8282B250;

extern void fn_828299A8(Query_8282B250 *query, Graph_8282B250 *graph, Node_8282B250 **node);
extern Edge_8282B250 *fn_828252E8(Graph_8282B250 *graph, unsigned int size);
extern void fn_828233A8(void *set, void **removed, void (*compare)(void), Request_8282B250 *request);
extern void fn_82822E38(void *removed);
extern int fn_82822F60(void *set, Edge_8282B250 *edge, void (*compare)(void), Edge_8282B250 **slot);
extern void fn_8282B9A0(void);
extern void fn_8282AF50(void);

void fn_8282B250(Graph_8282B250 *graph, void **key)
{
    Edge_8282B250 *edge;
    Node_8282B250 *node;
    void *removed;
    Query_8282B250 query;
    Request_8282B250 request;

    if (*key == 0) {
        return;
    }
    query.key = key;
    fn_828299A8(&query, graph, &node);
    if (query.found != 0) {
        return;
    }
    edge = fn_828252E8(graph, 0x24);
    edge->fromId = node->id;
    edge->fromValue = query.value;
    request.key = key;
    request.value = query.value;
    request.id = node->id;
    request.option20 = 4;
    request.option24 = 4;
    request.option1c = 1;
    fn_828233A8(graph->requests, &removed, fn_8282B9A0, &request);
    if (removed != 0) {
        fn_82822E38(removed);
        graph->removedCount--;
    }
    query.key = *key;
    fn_828299A8(&query, graph, &node);
    edge->key = key;
    edge->toId = node->id;
    edge->toValue = query.value;
    if (fn_82822F60(graph->edges, edge, fn_8282AF50, &edge) != 0) {
        graph->edgeCount++;
    }
}
