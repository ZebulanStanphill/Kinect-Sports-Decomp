typedef struct Request_82BEA938 Request_82BEA938;

typedef struct {
    void (*destroy)(Request_82BEA938 *, int);
    void (*slot4)(void);
    void (*process)(Request_82BEA938 *);
} Vt_82BEA938;

struct Request_82BEA938 {
    Vt_82BEA938 *vt;
};

typedef struct Queue_82BEA938 {
    int pad[2];
    int count;
} Queue_82BEA938;

typedef struct Client_82BEA938 {
    int pad0;
    int active;
    char pad8[8];
    int state;
    char pad14[0x24];
    unsigned int id;
    int pad3c;
    Queue_82BEA938 *queue;
} Client_82BEA938;

typedef struct Session_82BEA938 {
    char pad[0x10];
    int state;
    char pad14[0x38];
    unsigned int a, b, c;
} Session_82BEA938;

extern unsigned __int64 lbl_8322B1C8;
extern char lbl_82196582[];
extern Session_82BEA938 *fn_82BE1A10(void);
extern void fn_82BE31D0(Session_82BEA938 *, int, int);
extern void *fn_82BE56B0(unsigned int);
extern Request_82BEA938 *fn_82BF5710(void *);
extern unsigned int fn_82BE1FA0(Session_82BEA938 *);
extern int fn_82BF6188(Request_82BEA938 *, Client_82BEA938 *, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned short);
extern int fn_82BE6590(Request_82BEA938 *);
extern void fn_82BE2000(Session_82BEA938 *);
extern int fn_82BEB9B8(Client_82BEA938 *, Request_82BEA938 *);
extern void fn_82BE66A0(Request_82BEA938 *);
extern int fn_82BE5240(Client_82BEA938 *, int, const char *);
extern void fn_82BE5340(Queue_82BEA938 *);
extern Request_82BEA938 *fn_82BE5378(Queue_82BEA938 *);
extern void fn_82BE5350(Queue_82BEA938 *);

int fn_82BEA938(Client_82BEA938 *self)
{
    if (lbl_8322B1C8 && self->state) {
        self->active = 0;
        switch (self->state) {
        case 1: {
            Session_82BEA938 *session = fn_82BE1A10();
            Request_82BEA938 *req;
            void *mem;
            int hr;
            fn_82BE31D0(session, 0, 0);
            mem = fn_82BE56B0(0x70);
            if (mem)
                req = fn_82BF5710(mem);
            else
                req = 0;
            if (!req) {
                self->state = 0;
                fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestEnterZone");
                return 0;
            }
            if (!fn_82BF6188(req, self, self->id, fn_82BE1FA0(session), session->a, session->b,
                             (unsigned short)session->c)) {
                self->state = 0;
                req->vt->destroy(req, 1);
                fn_82BE5240(self, 0x452, ": Failed To Create EnterZone Request");
                return 0;
            }
            hr = fn_82BE6590(req);
            if (hr) {
                self->state = 0;
                req->vt->destroy(req, 1);
                fn_82BE5240(self, hr, ": Failed To submit EnterZone Request");
                return 0;
            }
            fn_82BE2000(session);
            hr = fn_82BEB9B8(self, req);
            if (hr) {
                self->state = 0;
                fn_82BE66A0(req);
                req->vt->destroy(req, 1);
                fn_82BE5240(self, hr, ": Failed To add EnterZone request to request collection");
                return 0;
            }
            self->state = 13;
            session->state = 13;
            break;
        }
        case 2:
            if (!self->queue) {
                fn_82BE5240(self, 0x130, lbl_82196582);
                return 0x130;
            }
            fn_82BE5340(self->queue);
            while (self->queue->count) {
                Request_82BEA938 *req = fn_82BE5378(self->queue);
                req->vt->process(req);
                fn_82BE5350(self->queue);
            }
            break;
        case 14:
            self->state = 15;
            break;
        }
        return 1;
    }
    return 0;
}
