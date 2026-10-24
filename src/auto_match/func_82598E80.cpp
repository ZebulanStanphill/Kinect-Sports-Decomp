/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
extern "C" void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

inline void *operator new(unsigned int, void *p) { return p; }

template <typename BITS, typename STORAGE>
class hkFlags {
public:
    __forceinline hkFlags() {}
    __forceinline hkFlags(STORAGE s) { m_storage = s; }
private:
    STORAGE m_storage;
};

class hkMemoryRouter;
class hkMemorySystem;
extern "C" {
void fn_82CE5430(hkMemoryRouter *self);      // hkMemoryRouter::hkMemoryRouter()
hkMemoryRouter &fn_82CE5420(void);           // hkMemoryRouter::getInstance()
hkMemorySystem &fn_82CE7310(void);           // hkMemorySystem::getInstance()
}

class hkMemoryRouter {
public:
    __forceinline hkMemoryRouter() { fn_82CE5430(this); }
    char m_data[0x60];
};

class hkMemorySystem {
public:
    enum FlagBits {
        FLAG_PERSISTENT = 1,
        FLAG_TEMPORARY = 2,
        FLAG_ALL = FLAG_PERSISTENT | FLAG_TEMPORARY
    };
    typedef hkFlags<FlagBits, int> Flags;
    virtual ~hkMemorySystem();
    virtual hkMemoryRouter *mainInit(void *info, Flags f = FLAG_ALL);
    virtual int mainQuit(Flags f = FLAG_ALL);
    virtual void threadInit(hkMemoryRouter &r, const char *name, Flags f = FLAG_ALL);
};

struct ThreadState {
    int count;
    int pad;
    hkMemoryRouter router;
};

struct Message {
    int type;
    unsigned int arg;
    unsigned int queue;
    int p3;
    int p4;
    int p5;
    float p6;
    float p7;
};

extern "C" {
Message *fn_82522DF8(unsigned int size);
void fn_825990F0(void);
void fn_825991A0(int a, int b, float c, float d);
ThreadState *fn_82599308(void);
unsigned int fn_8259A230(void);
void fn_82A1BB18(void);
void fn_82BFE128(unsigned int queue, Message *m);
void fn_82CE7888(hkMemoryRouter *r);
extern unsigned int lbl_83296E18[];
}

static void post(Message *m)
{
    unsigned int *q = &m->queue;
    unsigned int v = *q;
    __lwsync();
    fn_82BFE128(lbl_83296E18[v], m);
}

static __forceinline void reply(void)
{
    Message *m = fn_82522DF8(0x40);
    m->type = 5;
    fn_82A1BB18();
    unsigned int t = fn_8259A230();
    m->queue = 0;
    m->arg = t;
    post(m);
}

extern "C" int fn_82598E80(Message *msg)
{
    switch (msg->type) {
    case 1:
        break;
    case 4:
        fn_825991A0(msg->p3, msg->p5, msg->p6, msg->p7);
        break;
    case 5: {
        int n = msg->arg;
        fn_82599308()->count -= n;
        break;
    }
    case 6:
        fn_82599308()->count = 0;
        new (&fn_82599308()->router) hkMemoryRouter;
        fn_82CE7310().threadInit(fn_82599308()->router, "hkCpuJobThreadPool");
        fn_82CE7888(&fn_82599308()->router);
        reply();
        break;
    case 7:
        fn_825990F0();
        reply();
        break;
    case 8:
        fn_82CE7310().threadInit(fn_82CE5420(), "hkCpuJobThreadPool");
        fn_82CE7888(&fn_82CE5420());
        reply();
        break;
    default:
        return 0;
    }
    return 1;
}
