typedef struct Request_82BEA590 Request_82BEA590;
typedef struct RequestVt_82BEA590 {
    void (*Destroy)(Request_82BEA590 *self, unsigned int flags);
} RequestVt_82BEA590;
struct Request_82BEA590 {
    RequestVt_82BEA590 *vt;
};

typedef struct Core_82BEA590 {
    char pad[0x10];
    int state;
} Core_82BEA590;

typedef struct Client_82BEA590 {
    char pad00[0x10];
    int ok;
    char pad14[0x4c - 0x14];
    Request_82BEA590 *request;
} Client_82BEA590;

extern int fn_82BE5240(Client_82BEA590 *self, int code, const char *format, ...);
extern Core_82BEA590 *fn_82BE1A10(void);
extern void *fn_82BE1FA0(Core_82BEA590 *core);
extern void *fn_82BE56B0(unsigned int size);
extern Request_82BEA590 *fn_82BF4D90(void *mem);
extern int fn_82BF4DF8(Request_82BEA590 *request, Client_82BEA590 *client, void *context);

int fn_82BEA590(Client_82BEA590 *self)
{
    void *mem;
    Request_82BEA590 *request;

    if (self->request != 0)
        return 0;
    if (fn_82BE1A10()->state == 4)
        return 0x12d;
    mem = fn_82BE56B0(0x58);
    if (mem != 0) {
        request = fn_82BF4D90(mem);
    } else {
        request = 0;
    }
    if (request == 0) {
        self->ok = 0;
        return fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestImpressionUpdate");
    }
    if (fn_82BF4DF8(request, self, fn_82BE1FA0(fn_82BE1A10())) == 0) {
        self->ok = 0;
        request->vt->Destroy(request, 1);
        return fn_82BE5240(self, 0x452, ": Failed To Create ImpressionUpdate Request");
    }
    self->request = request;
    return 0;
}
