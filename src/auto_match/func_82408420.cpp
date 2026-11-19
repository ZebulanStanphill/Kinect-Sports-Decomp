struct Handler_82408420 {
    void *vt; /* 0x00 */
};

typedef struct Callback_82408420 {
    const void *vt;           /* 0x00 */
    Handler_82408420 *target; /* 0x04 */
    char pad08[0x8];
    void *impl; /* 0x10 */
} Callback_82408420;

typedef struct State_82408420 {
    char pad00[0xbc];
    int active;        /* 0xbc */
    int index;         /* 0xc0 */
    float startTime;   /* 0xc4 */
    float currentTime; /* 0xc8 */
    char padcc[0x24];
    int dirty; /* 0xf0 */
} State_82408420;

typedef struct Config_82408420 {
    char pad00[0xec];
    int enabled; /* 0xec */
} Config_82408420;

typedef struct Context_82408420 {
    char pad00[0x84];
    char *listener; /* 0x84 */
} Context_82408420;

extern "C" const char lbl_821B7F9C[];
extern "C" void fn_824550A8(void *resource);
extern "C" unsigned char fn_8288B760(char *listener);
extern "C" void fn_82F56790(char *list, Callback_82408420 *callback);
extern "C" void fn_82359C18(Callback_82408420 *callback);

struct ControllerBase_82408420 {
    char pad04[0x4];
    State_82408420 *state; /* 0x08 */
    char pad0c[0x4];
    Config_82408420 *config; /* 0x10 */
    char pad14[0x4];
};

struct Controller_82408420;
extern "C" void fn_82408A28(Controller_82408420 *self, unsigned int mode);

static __forceinline void Register_82408420(Context_82408420 *context, Handler_82408420 *handler)
{
    char *listener = context->listener;
    Callback_82408420 callback;

    if (listener != 0 && fn_8288B760(listener) == 0) {
        callback.vt = lbl_821B7F9C;
        callback.target = handler;
        callback.impl = &callback;
        fn_82F56790(listener + 0x88, &callback);
        fn_82359C18(&callback);
    }
}

struct Controller_82408420 : ControllerBase_82408420, Handler_82408420 {
    float time;                /* 0x1c */
    Context_82408420 *context; /* 0x20 */
    char pad24[0x18];
    void *resource; /* 0x3c */

    virtual void Unknown0();
    virtual void Activate();
};

void Controller_82408420::Activate()
{
    State_82408420 *state;
    float time;

    fn_824550A8(this->resource);
    Register_82408420(this->context, this);
    state = this->state;
    time = this->time;
    state->currentTime = time;
    state->active = 1;
    state->startTime = time;
    state->index = -1;
    if (this->config->enabled != 0) {
        fn_82408A28(this, 1);
    } else {
        fn_82408A28(this, 0);
    }
    this->state->dirty = 1;
}
