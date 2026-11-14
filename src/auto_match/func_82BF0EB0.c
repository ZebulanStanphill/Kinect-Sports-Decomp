typedef struct Request_82BF0EB0 Request_82BF0EB0;
typedef struct {
    void (*destroy)(Request_82BF0EB0 *, int);
} RequestVt_82BF0EB0;
struct Request_82BF0EB0 {
    RequestVt_82BF0EB0 *vt;
};

typedef struct Item_82BF0EB0 {
    char pad[0x28];
    unsigned int size;      /* 0x28 */
    char *name;             /* 0x2c */
} Item_82BF0EB0;

typedef struct Ref_82BF0EB0 {
    int f0;
    int f4;
    Item_82BF0EB0 *item;    /* 0x08 */
} Ref_82BF0EB0;

typedef struct Client_82BF0EB0 {
    char pad0[0x10];
    int state;              /* 0x10 */
    char pad14[0x18];
    Ref_82BF0EB0 ref;       /* 0x2c */
    char pad38[0x34];
    void *target;           /* 0x6c */
} Client_82BF0EB0;

extern char lbl_82196582[];
extern void *fn_82BE56B0(unsigned int size);
extern Request_82BF0EB0 *fn_82BF8AB8(void *mem);
extern int fn_82BF8BD0(Request_82BF0EB0 *req, Client_82BF0EB0 *client, char *name, void *target, unsigned int size);
extern int fn_82BE6590(Request_82BF0EB0 *req);
extern int fn_82BEB9B8(Client_82BF0EB0 *client, Request_82BF0EB0 *req);
extern void fn_82BE66A0(Request_82BF0EB0 *req);
extern int fn_82BE5240(Client_82BF0EB0 *client, int code, const char *message);

static __forceinline unsigned int GetSize(Ref_82BF0EB0 *ref)
{
    return ref->item != 0 ? ref->item->size : 0;
}

static __forceinline char *GetName(Ref_82BF0EB0 *ref)
{
    return ref->item != 0 ? ref->item->name : 0;
}

static __forceinline int IsEmpty(const char *s)
{
    return s == 0 || *s == 0;
}

int fn_82BF0EB0(Client_82BF0EB0 *self)
{
    void *mem;
    Request_82BF0EB0 *req;
    Ref_82BF0EB0 *ref;
    char *name;
    int hr;

    if (self->state != 0x17) {
        ref = &self->ref;
        if (GetSize(ref) == 0)
            return fn_82BE5240(self, 0x25d, lbl_82196582);
        name = GetName(ref);
        if (IsEmpty(name))
            return fn_82BE5240(self, 0x25b, lbl_82196582);
        if (self->target == 0)
            return fn_82BE5240(self, 0x25c, lbl_82196582);
        mem = fn_82BE56B0(0x58);
        if (mem != 0)
            req = fn_82BF8AB8(mem);
        else
            req = 0;
        if (req == 0) {
            self->state = 0;
            return fn_82BE5240(self, 0x65, "ALLOCATION Failed for CRequestDownloadBinary");
        }
        if (fn_82BF8BD0(req, self, GetName(ref), self->target, GetSize(ref)) == 0) {
            self->state = 0;
            req->vt->destroy(req, 1);
            return fn_82BE5240(self, 0x452, ": Failed To Create DownloadBinary Request");
        }
        hr = fn_82BE6590(req);
        if (hr != 0) {
            self->state = 0;
            req->vt->destroy(req, 1);
            return fn_82BE5240(self, hr, ": Failed To submit DownloadBinary Request");
        }
        hr = fn_82BEB9B8(self, req);
        if (hr != 0) {
            self->state = 0;
            fn_82BE66A0(req);
            req->vt->destroy(req, 1);
            return fn_82BE5240(self, hr, ": Failed To add DownloadBinary request to request collection");
        }
        self->state = 0x16;
    }
    return 0;
}
