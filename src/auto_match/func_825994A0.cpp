// Worker thread loop of the game's job thread pool (it names its Havok memory thread
// "hkCpuJobThreadPool"). Each pass frees the previous message, receives the next one from this
// thread's queue (lbl_83296E18[thread index]), signals the pool's event and handles the message:
// 6 = give this thread its own hkMemoryRouter, 8 = use the current one, 7 = quit the thread's
// memory (fn_825990F0); those three answer with a type-5 message to queue 0. 10 waits until
// two counters drain; anything else goes to fn_82598E80. It stops once the queue is gone or empty.
// Built with /O1 (flag file); the shapes follow the matched sibling fn_82598E80 (func_82598E80.cpp).
// Register and scheduling details depend on where things are first referenced: the queue array is
// passed into receive() from the loop and case 10 comes before the cases that use the thread name.
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
void fn_82CE7888(hkMemoryRouter *r);         // hkBaseSystem::initThread(hkMemoryRouter *)
}

class hkMemoryRouter {
public:
    __forceinline hkMemoryRouter() { fn_82CE5430(this); }
    char m_data[0x20];
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

// Per-thread state (fn_82599308 creates it on first use and keeps it in a TLS slot).
struct ThreadState {
    int count;
    int pad;
    hkMemoryRouter router;   // +0x8
};

struct Message {
    int type;
    unsigned int arg;
    unsigned int queue;
};

extern "C" {
Message *fn_82522DF8(unsigned int size);                  // allocate a message
void fn_82522ED8(Message *m);                             // free a message
void fn_825990F0(void);
int fn_82598E80(Message *msg);
ThreadState *fn_82599308(void);
unsigned int fn_8259A230(void);                           // thread index (after fn_82A1BB18)
void fn_82A1BB18(void);
void fn_82BFE128(unsigned int queue, Message *m);         // send
int fn_82BFE530(unsigned int queue, Message **out);       // receive (HRESULT)
int fn_82BFE460(unsigned int queue);                      // queue empty
int fn_82A1E810(unsigned int event);                      // SetEvent
void fn_82A1E108(int ms);                                 // Sleep
int fn_827D7CE0(unsigned int a);
int fn_827DAD60(unsigned int a);
extern unsigned int lbl_83296E18[];                       // message queue per thread
extern unsigned int lbl_8326C3A8;                         // pool event
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
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
    m->arg = fn_8259A230();
    m->queue = 0;
    post(m);
}

static __forceinline Message *receive(unsigned int *queues)
{
    fn_82A1BB18();
    unsigned int idx = fn_8259A230();
    Message *m = 0;
    Message *r;
    if (fn_82BFE530(queues[idx], &m) >= 0)
        r = m;
    else
        r = 0;
    if (r)
        __lwsync();
    fn_82A1E810(lbl_8326C3A8);
    return r;
}

static __forceinline int finished(void)
{
    fn_82A1BB18();
    unsigned int q = lbl_83296E18[fn_8259A230()];
    int empty = q ? fn_82BFE460(q) : 1;
    return empty;
}

extern "C" void fn_825994A0(void)
{
    Message *msg = 0;
    fn_82A1BB18();
    fn_8259A230();
    do {
        if (msg)
            fn_82522ED8(msg);
        msg = receive(lbl_83296E18);
        if (msg) {
            switch (msg->type) {
            case 10: {
                int n;
                do {
                    n = fn_827D7CE0(lbl_83265A24);
                    n += fn_827DAD60(lbl_8326B7C8);
                    fn_82A1E108(0);
                } while (n != 0);
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
                fn_82598E80(msg);
                break;
            }
        }
    } while (!finished());
    if (msg)
        fn_82522ED8(msg);
}
