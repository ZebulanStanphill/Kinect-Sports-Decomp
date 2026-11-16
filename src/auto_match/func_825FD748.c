typedef struct Request_825FD748 {
    int first;
    int second;
    int third;
    void *handle;
    int fourth;
    int fifth;
    int sixth;
} Request_825FD748;

typedef struct Object_825FD748 {
    void *player;
    unsigned long deviceId;
    char content[0x230];
    int pending;
    Request_825FD748 request;
    int result;
} Object_825FD748;

typedef struct Owner_825FD748 {
    char pad[0xc];
    char *context;
} Owner_825FD748;

typedef struct Argument_825FD748 {
    void *value;
    void *reference;
} Argument_825FD748;

extern int lbl_83281150;
extern void fn_822315A0(void *);
extern void fn_8261BF58(Object_825FD748 **, void *, void *, void *);
extern void fn_82A1E658(void *);
extern void XMemSet(void *, int, unsigned int);
extern unsigned long fn_82A264D8(unsigned long, void *);
extern unsigned long fn_823AB478(void *);
extern unsigned long fn_82A264C0(unsigned long, void *, Request_825FD748 *);
extern void fn_8261C010(Object_825FD748 *);

int fn_825FD748(Owner_825FD748 *self, void *unused, Argument_825FD748 *argument)
{
    Object_825FD748 *storage;
    Object_825FD748 *object;
    if (lbl_83281150 != 0) {
        if (argument->reference != 0) {
            fn_822315A0(argument->reference);
        }
        return 0x3e5;
    }
    {
        char *context = self->context;
        lbl_83281150 = 1;
        fn_8261BF58(&storage, *(void **)(context + 0x19c), context + 0x170, context + 0x68);
    }
    object = storage;
    if (object->request.handle != 0) {
        fn_82A1E658(object->request.handle);
    }
    XMemSet(&object->request, 0, sizeof(object->request));
    if (fn_82A264D8(object->deviceId, 0) == 0) {
        unsigned long user = fn_823AB478(object->player);
        object->result = fn_82A264C0(user, &object->deviceId, &object->request);
    }
    if (object->result == 0x3e5) {
        object->pending = 1;
    }
    while (object->pending != 0) {
        fn_8261C010(object);
    }
    {
        void *reference = argument->reference;
        lbl_83281150 = 0;
        if (reference != 0) {
            fn_822315A0(reference);
        }
    }
    return 0;
}
