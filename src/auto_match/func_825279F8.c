typedef unsigned char bool;
extern void fn_82522ED8();

typedef struct Req {
    char pad0[3];
    bool cancelled;
    char pad4[8];
    void *pending;
} Req;

typedef struct Obj {
    char pad0[0x40];
    int *queue;
    char pad44[0x1b4 - 0x44];
    int busy;
    Req *req;
} Obj;

int fn_825279F8(Obj *o)
{
    Req *req;

    if (o->busy != 0)
        return 3;
    req = o->req;
    if (req != 0 && !req->cancelled) {
        if (req->pending != 0)
            return 1;
        if (o->queue != 0 && *o->queue != 0)
            return 2;
        fn_82522ED8(o->req);
        o->req = 0;
    }
    return 0;
}
