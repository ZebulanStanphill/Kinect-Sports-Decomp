typedef struct Handler Handler;
typedef struct HandlerVtbl {
    void *pad[5];
    unsigned char (*handle)(Handler *, void *);  /* 0x14 */
} HandlerVtbl;
struct Handler {
    HandlerVtbl *vtbl;
};

typedef struct Node {
    Handler *h;
    struct Node *next;
} Node;

typedef struct Dispatcher {
    char pad[0x14];
    Node *lists[5];     /* 0x14 */
} Dispatcher;

unsigned char fn_825774D0(Dispatcher *d, void *msg)
{
    Node *n;

    for (n = d->lists[0]; n != 0; n = n->next) {
        if (n->h != 0 && n->h->vtbl->handle(n->h, msg))
            return 1;
    }
    for (n = d->lists[1]; n != 0; n = n->next) {
        if (n->h != 0 && n->h->vtbl->handle(n->h, msg))
            return 1;
    }
    for (n = d->lists[2]; n != 0; n = n->next) {
        if (n->h != 0 && n->h->vtbl->handle(n->h, msg))
            return 1;
    }
    for (n = d->lists[3]; n != 0; n = n->next) {
        if (n->h != 0 && n->h->vtbl->handle(n->h, msg))
            return 1;
    }
    for (n = d->lists[4]; n != 0; n = n->next) {
        if (n->h != 0 && n->h->vtbl->handle(n->h, msg))
            return 1;
    }
    return 0;
}
