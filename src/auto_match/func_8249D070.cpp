#include <vector>

struct Request_8249D070 {
    int a;      /* 0x00 */
    int b;      /* 0x04 */
    int c;      /* 0x08 */
    float time; /* 0x0c */
};

struct Element_8249D310 {
    Request_8249D070 request; /* 0x00 */
    int id;                   /* 0x10 */
};

struct Queue_8249D070 {
    char pad0[0x30];
    std::vector<Element_8249D310> pending; /* 0x30 */
    std::vector<Element_8249D310> other;   /* 0x40 */
    int nextId;                            /* 0x50 */
};

extern "C" float lbl_831D76EC;

extern "C" int fn_8249D070(Queue_8249D070 *queue, Request_8249D070 request)
{
    int id;
    Element_8249D310 element;

    request.time = request.time - lbl_831D76EC >= 0.0f ? lbl_831D76EC : request.time;
    id = queue->nextId++;
    element.request = request;
    element.id = id;
    queue->pending.push_back(element);
    return id;
}
