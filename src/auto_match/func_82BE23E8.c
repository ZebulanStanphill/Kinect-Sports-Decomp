typedef struct Request_82BE23E8 Request_82BE23E8;
typedef struct {
    void (*destroy)(Request_82BE23E8 *, int);
} RequestVt_82BE23E8;
struct Request_82BE23E8 {
    RequestVt_82BE23E8 *vt;
};

typedef struct Client_82BE23E8 {
    char pad0[0x10];
    Request_82BE23E8 *pending;
} Client_82BE23E8;

extern unsigned __int64 lbl_8322B1C8;
extern void *fn_82BE56B0(unsigned int size);
extern Request_82BE23E8 *fn_82BEBA68(void *mem);
extern int fn_82BEBC98(Request_82BE23E8 *req, Client_82BE23E8 *client);
extern int fn_82BE6590(Request_82BE23E8 *req);
extern int fn_82BEB9B8(Client_82BE23E8 *client, Request_82BE23E8 *req);
extern void fn_82BE66A0(Request_82BE23E8 *req);
extern int fn_82BE5240(Client_82BE23E8 *client, int code, const char *message);

int fn_82BE23E8(Client_82BE23E8 *self)
{
    void *mem;
    Request_82BE23E8 *req;
    int hr;

    if (lbl_8322B1C8 == 0)
        return fn_82BE5240(self, 0xd4, "No Session to Close");
    mem = fn_82BE56B0(0x50);
    if (mem != 0)
        req = fn_82BEBA68(mem);
    else
        req = 0;
    if (req == 0) {
        self->pending = 0;
        return fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestCloseSession");
    }
    if (fn_82BEBC98(req, self) == 0) {
        self->pending = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, 0x452, ": Failed To Create CloseSession Request");
    }
    hr = fn_82BE6590(req);
    if (hr != 0) {
        self->pending = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To submit CloseSession Request");
    }
    hr = fn_82BEB9B8(self, req);
    if (hr != 0) {
        self->pending = 0;
        fn_82BE66A0(req);
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To add CloseSession request to request collection");
    }
    return 0;
}
