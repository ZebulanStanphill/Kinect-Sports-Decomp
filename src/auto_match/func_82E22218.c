typedef struct String_82E22218 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    int unk18;
} String_82E22218;

typedef struct Deque_82E22218 Deque_82E22218;
typedef struct Proxy_82E22218 {
    Deque_82E22218 *cont;
} Proxy_82E22218;
struct Deque_82E22218 {
    Proxy_82E22218 *proxy;
    String_82E22218 **map;
    unsigned int mapSize;
    unsigned int off;
    unsigned int size;
};

typedef struct CriticalSection_82E22218 {
    int v[7];
} CriticalSection_82E22218;

typedef struct Uploader_82E22218 {
    char data[0x10];
} Uploader_82E22218;

typedef struct Scope_82E22218 {
    char data[0x10];
} Scope_82E22218;

typedef struct LogUploadManager_82E22218 {
    String_82E22218 host;
    String_82E22218 path;
    String_82E22218 user;
    unsigned short port;
    unsigned char deleteAfter;
    unsigned char secure;
    int timeout;
    unsigned char quit;
    char pad5D[3];
    int unk60;
    void *idleEvent;
    void *wakeEvent;
    CriticalSection_82E22218 lock;
    Deque_82E22218 queue;
} LogUploadManager_82E22218;

extern char lbl_82196582[];
extern void fn_8251C390(Scope_82E22218 *s, const char *file, int line);
extern void fn_829E53B0(Scope_82E22218 *s);
extern unsigned int fn_82A1E650(void *h, unsigned int timeout);
extern void fn_82230110(String_82E22218 *s, const char *text);
extern void fn_82230218(String_82E22218 *s, String_82E22218 *src, unsigned int pos, unsigned int n);
extern void fn_82230300(String_82E22218 *s, int built, unsigned int size);
extern void fn_82E21FC8(Deque_82E22218 *d);
extern int fn_82A1E810(void *h);
extern int fn_82A1E7D8(void *h);
extern void RtlEnterCriticalSection(CriticalSection_82E22218 *cs);
extern void RtlLeaveCriticalSection(CriticalSection_82E22218 *cs);
extern void fn_82BA02A8(Uploader_82E22218 *u);
extern unsigned char fn_82E22B50(Uploader_82E22218 *u, const char *file, const char *host, unsigned char secure,
                                 int timeout, const char *path, const char *user, unsigned short port);
extern void *fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *sa,
                         unsigned int disposition, unsigned int flags, void *tmpl);
extern unsigned int fn_82A29D80(void *h, unsigned int *high);
extern int fn_82A1E658(void *h);
extern int fn_82A2A958(const char *name);
extern void fn_82A1E108(unsigned int ms);

static __forceinline const char *CStr_82E22218(String_82E22218 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline String_82E22218 *Front_82E22218(Deque_82E22218 *d)
{
    unsigned int off = d->off;
    Deque_82E22218 *c = d->proxy == 0 ? 0 : d->proxy->cont;

    if (c->mapSize <= off) {
        off -= c->mapSize;
    }
    return c->map[off];
}

int fn_82E22218(LogUploadManager_82E22218 *self)
{
    Scope_82E22218 scope;
    String_82E22218 file;
    Uploader_82E22218 up;
    unsigned char empty;
    unsigned char ok;
    void *h;
    unsigned int size;

    fn_8251C390(&scope, ".\\LogUploadManager.cpp", 0x76);
    while (!self->quit) {
        fn_82A1E650(self->wakeEvent, 0xFFFFFFFF);
        do {
            fn_82230110(&file, lbl_82196582);
            RtlEnterCriticalSection(&self->lock);
            empty = self->queue.size == 0;
            if (!empty) {
                fn_82230218(&file, Front_82E22218(&self->queue), 0, 0xFFFFFFFF);
                fn_82E21FC8(&self->queue);
            } else {
                fn_82A1E810(self->idleEvent);
                fn_82A1E7D8(self->wakeEvent);
            }
            RtlLeaveCriticalSection(&self->lock);
            if (file.size != 0) {
                fn_82BA02A8(&up);
                ok = fn_82E22B50(&up, CStr_82E22218(&file), CStr_82E22218(&self->host), self->secure,
                                 self->timeout, CStr_82E22218(&self->path), CStr_82E22218(&self->user),
                                 self->port);
                if (self->deleteAfter) {
                    if (ok) {
                        fn_82A2A958(CStr_82E22218(&file));
                    } else {
                        h = fn_82A29DE8(CStr_82E22218(&file), 0x80000000, 0, 0, 3, 0, 0);
                        if (h != (void *)-1) {
                            size = fn_82A29D80(h, 0);
                            fn_82A1E658(h);
                            if (size == 0) {
                                fn_82A2A958(CStr_82E22218(&file));
                            }
                        }
                    }
                }
                fn_82BA02A8(&up);
            }
            fn_82A1E108(1000);
            fn_82230300(&file, 1, 0);
        } while (!empty);
    }
    fn_829E53B0(&scope);
    return 0;
}
