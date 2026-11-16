typedef struct Object_82FF3468 Object_82FF3468;

typedef struct VTable_82FF3468 {
    void (*destroy)(Object_82FF3468 *, int);
    void *unused;
    void (*reset)(Object_82FF3468 *, int);
} VTable_82FF3468;

struct Object_82FF3468 {
    VTable_82FF3468 *vtable;
};

typedef struct Request_82FF3468 {
    Object_82FF3468 *object;
    int type;
    int value;
    float time;
} Request_82FF3468;

typedef struct Node_82FF3468 {
    struct Node_82FF3468 *next;
    Request_82FF3468 request;
} Node_82FF3468;

typedef struct Queue_82FF3468 {
    Node_82FF3468 *head;
    int unknown[4];
    unsigned int count;
} Queue_82FF3468;

extern Queue_82FF3468 lbl_831BC7B4;
extern int lbl_831BC768;
extern unsigned char lbl_83264580[];
extern unsigned char lbl_83264574[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82FEF778(Object_82FF3468 *, int, int, float);
extern void fn_83054338(void *, Object_82FF3468 *);
extern void fn_82FECE48(Object_82FF3468 *);
extern void fn_82FA5190(int, Object_82FF3468 *);
extern void fn_82FF3B98(Queue_82FF3468 *, Node_82FF3468 *, int);

void fn_82FF3468(void)
{
    RtlEnterCriticalSection(lbl_83264580);
    while (lbl_831BC7B4.count) {
        Request_82FF3468 *request = &lbl_831BC7B4.head->request;
        fn_82FEF778(request->object, request->type, request->value, request->time);
        if (request->type == 4) {
            Object_82FF3468 *object;
            fn_83054338(lbl_83264574, request->object);
            object = request->object;
            if (object) {
                int allocator;
                fn_82FECE48(object);
                object->vtable->reset(object, 0);
                allocator = lbl_831BC768;
                object->vtable->destroy(object, 0);
                fn_82FA5190(allocator, object);
            }
        }
        if (lbl_831BC7B4.head) {
            fn_82FF3B98(&lbl_831BC7B4, lbl_831BC7B4.head, 0);
        }
    }
    RtlLeaveCriticalSection(lbl_83264580);
}
