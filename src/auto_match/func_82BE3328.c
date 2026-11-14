typedef struct Request_82BE3328 Request_82BE3328;
typedef struct {
    void (*destroy)(Request_82BE3328 *, int);
} RequestVt_82BE3328;
struct Request_82BE3328 {
    RequestVt_82BE3328 *vt;
};

typedef struct Client_82BE3328 {
    char pad0[0x10];
    int state;
    char pad14[0x144];
    int f158;
    int f15c;
} Client_82BE3328;

extern unsigned __int64 lbl_8322B1C8;
typedef struct Session_82BE3328 Session_82BE3328;
extern Session_82BE3328 *lbl_8322B130;
extern char lbl_82196582[];
extern int fn_82BE23E8(Client_82BE3328 *self);
extern int fn_82BE31D0(Session_82BE3328 *session, unsigned char notify, unsigned char report);
extern void *fn_82BE56B0(unsigned int size);
extern Request_82BE3328 *fn_82BEE260(void *mem);
extern int fn_82BEE670(Request_82BE3328 *req, Client_82BE3328 *client, int a, int b, int c);
extern int fn_82BE6590(Request_82BE3328 *req);
extern int fn_82BEB9B8(Client_82BE3328 *client, Request_82BE3328 *req);
extern void fn_82BE66A0(Request_82BE3328 *req);
extern int fn_82BE5240(Client_82BE3328 *client, int code, const char *message);

int fn_82BE3328(Client_82BE3328 *self)
{
    void *mem;
    Request_82BE3328 *req;
    int hr;

    if (lbl_8322B1C8 != 0) {
        hr = fn_82BE23E8(self);
        if (hr != 0)
            return fn_82BE5240(self, hr, lbl_82196582);
    }
    fn_82BE31D0(lbl_8322B130, 0, 0);
    mem = fn_82BE56B0(0x60);
    if (mem != 0)
        req = fn_82BEE260(mem);
    else
        req = 0;
    if (req == 0) {
        self->state = 0;
        return fn_82BE5240(self, 0x65, lbl_82196582);
    }
    if (fn_82BEE670(req, self, self->f158, self->f15c, 1) == 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, 0x452, ": Failed To Create OpenSession Request");
    }
    hr = fn_82BE6590(req);
    if (hr != 0) {
        self->state = 0;
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To submit OpenSession Request");
    }
    hr = fn_82BEB9B8(self, req);
    if (hr != 0) {
        self->state = 0;
        fn_82BE66A0(req);
        req->vt->destroy(req, 1);
        return fn_82BE5240(self, hr, ": Failed To add OpenSession request to request collection");
    }
    return 0;
}
