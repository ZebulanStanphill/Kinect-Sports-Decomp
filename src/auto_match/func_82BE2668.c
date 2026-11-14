typedef struct Request_82BE2668 Request_82BE2668;
typedef struct {
    void (*destroy)(Request_82BE2668 *, int);
} RequestVt_82BE2668;
struct Request_82BE2668 {
    RequestVt_82BE2668 *vt;
};

typedef struct Client_82BE2668 {
    char pad0[0x10];
    int state;
} Client_82BE2668;

extern void *fn_82BE56B0(unsigned int size);
extern Request_82BE2668 *fn_82BEC4C8(void *mem);
extern int fn_82BEC708(Request_82BE2668 *req, Client_82BE2668 *client);
extern int fn_82BE6590(Request_82BE2668 *req);
extern int fn_82BEB9B8(Client_82BE2668 *client, Request_82BE2668 *req);
extern void fn_82BE66A0(Request_82BE2668 *req);
extern int fn_82BE5240(Client_82BE2668 *client, int code, const char *message);

int fn_82BE2668(Client_82BE2668 *self)
{
    void *mem;
    Request_82BE2668 *req;
    int hr;

    mem = fn_82BE56B0(0x50);
    if (mem != 0)
        req = fn_82BEC4C8(mem);
    else
        req = 0;
    if (req == 0) {
        self->state = 0;
        return fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestPlayerUpdate");
    }
    if (fn_82BEC708(req, self) == 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, 0x452, ": Failed To Create PlayerUpdate Request");
    }
    hr = fn_82BE6590(req);
    if (hr != 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To submit PlayerUpdate Request");
    }
    hr = fn_82BEB9B8(self, req);
    if (hr != 0) {
        self->state = 0;
        fn_82BE66A0(req);
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To add PlayerUpdate request to request collection");
    }
    return 0;
}
