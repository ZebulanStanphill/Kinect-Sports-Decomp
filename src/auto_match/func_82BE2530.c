typedef struct Request_82BE2530 Request_82BE2530;
typedef struct {
    void (*destroy)(Request_82BE2530 *, int);
} RequestVt_82BE2530;
struct Request_82BE2530 {
    RequestVt_82BE2530 *vt;
};

typedef struct Client_82BE2530 {
    char pad0[0x10];
    int state;
    char pad14[0x144];
    int f158;
    int f15c;
} Client_82BE2530;

extern void *fn_82BE56B0(unsigned int size);
extern Request_82BE2530 *fn_82BEBD00(void *mem);
extern int fn_82BEC428(Request_82BE2530 *req, Client_82BE2530 *client, int a, int b);
extern int fn_82BE6590(Request_82BE2530 *req);
extern int fn_82BEB9B8(Client_82BE2530 *client, Request_82BE2530 *req);
extern void fn_82BE66A0(Request_82BE2530 *req);
extern int fn_82BE5240(Client_82BE2530 *client, int code, const char *message);

int fn_82BE2530(Client_82BE2530 *self)
{
    void *mem;
    Request_82BE2530 *req;
    int hr;

    mem = fn_82BE56B0(0x98);
    if (mem != 0)
        req = fn_82BEBD00(mem);
    else
        req = 0;
    if (req == 0) {
        self->state = 0;
        return fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestLocateService");
    }
    if (fn_82BEC428(req, self, self->f158, self->f15c) == 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, 0x452, ": Failed To Create LocateService Request");
    }
    hr = fn_82BE6590(req);
    if (hr != 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To submit LocateService Request");
    }
    hr = fn_82BEB9B8(self, req);
    if (hr != 0) {
        self->state = 0;
        fn_82BE66A0(req);
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To add LocateService request to request collection");
    }
    self->state = 8;
    return 0;
}
