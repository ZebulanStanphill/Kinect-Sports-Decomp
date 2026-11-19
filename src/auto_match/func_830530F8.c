typedef struct Item_830530F8 {
    char pad00[0x10];
    __int64 size; /* 0x10 */
} Item_830530F8;

typedef struct Entry_830530F8 {
    char pad00[0x18];
    Item_830530F8 *item; /* 0x18 */
} Entry_830530F8;

typedef struct Request_830530F8 Request_830530F8;

typedef struct RequestVtbl_830530F8 {
    void *slots[5];
    Entry_830530F8 *(*Find)(Request_830530F8 *self, unsigned int key, unsigned int *handle); /* 0x14 */
    void *slot18;
    void (*Complete)(Request_830530F8 *self, Item_830530F8 *item, __int64 size, unsigned int key, int unused,
                     int status); /* 0x1c */
} RequestVtbl_830530F8;

struct Request_830530F8 {
    RequestVtbl_830530F8 *vtbl; /* 0x00 */
    char pad04[0x6c];
    unsigned char channel; /* 0x70 */
    char pad71[0x3];
    unsigned int flags0 : 2; /* 0x74 */
    unsigned int streamed : 1;
    unsigned int flags3 : 29;
};

typedef struct Params_830530F8 {
    float priority;        /* 0x00 */
    unsigned char channel; /* 0x04 */
} Params_830530F8;

typedef struct Handler_830530F8 Handler_830530F8;

typedef struct HandlerVtbl_830530F8 {
    void *slots[4];
    int (*Start)(Handler_830530F8 *self, unsigned int handle, Params_830530F8 *params,
                 Entry_830530F8 *entry); /* 0x10 */
    int (*StartStreamed)(Handler_830530F8 *self, unsigned int handle, Params_830530F8 *params,
                         Entry_830530F8 *entry); /* 0x14 */
} HandlerVtbl_830530F8;

struct Handler_830530F8 {
    HandlerVtbl_830530F8 *vtbl;
};

typedef struct Player_830530F8 {
    char pad00[0x80];
    Handler_830530F8 *handler; /* 0x80 */
} Player_830530F8;

extern void fn_83056200(Player_830530F8 *self);
extern int fn_83050008(Request_830530F8 *request);
extern void fn_8304F0A8(int a, int b);

void fn_830530F8(Player_830530F8 *self, Request_830530F8 *request, unsigned int key, float priority)
{
    Entry_830530F8 *entry;
    Handler_830530F8 *handler;
    unsigned int handle;
    Params_830530F8 params;
    int status;

    fn_83056200(self);
    if (fn_83050008(request) != 1) {
        request->vtbl->Complete(request, 0, 0, key, 0, 2);
        return;
    }
    entry = request->vtbl->Find(request, key, &handle);
    if (entry == 0) {
        request->vtbl->Complete(request, 0, 0, key, 0, 0x35);
        fn_8304F0A8(0, 100);
        return;
    }
    params.priority = priority;
    params.channel = request->channel;
    handler = self->handler;
    if ((unsigned char)request->streamed) {
        status = handler->vtbl->StartStreamed(handler, handle, &params, entry);
    } else {
        status = handler->vtbl->Start(handler, handle, &params, entry);
    }
    if (status == 1) {
        return;
    }
    request->vtbl->Complete(request, entry->item, entry->item->size, key, 0, status);
}
