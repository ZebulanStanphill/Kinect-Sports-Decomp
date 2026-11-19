struct Object_8229E090;

struct SharedPtr_8229E090 {
    ~SharedPtr_8229E090();
    Object_8229E090 *ptr;
    void *rep;
};

extern "C" void fn_822315A0(void *rep);

inline SharedPtr_8229E090::~SharedPtr_8229E090()
{
    if (rep != 0) {
        fn_822315A0(rep);
    }
}

SharedPtr_8229E090 Lock_8229E090(Object_8229E090 *object);

typedef void (*Callback_8229E090)(int event, void *context);

struct Session_8229E090 {
    Object_8229E090 *object; /* 0x000 */
    char pad4[0x404 - 0x4];
    Callback_8229E090 callback; /* 0x404 */
    void *callbackContext;      /* 0x408 */
    int pad40c;                 /* 0x40c */
    int closed;                 /* 0x410 */
    char pad414[0x430 - 0x414];
    void *timer; /* 0x430 */
};

extern "C" {
void fn_822848B8(void *timer);
void fn_8266F628(Object_8229E090 *object, int flag);
void fn_82672660(Object_8229E090 *object, Session_8229E090 *session);
void fn_8229E260(Session_8229E090 *session);
}

static __forceinline void Detach_8229E090(Session_8229E090 *self)
{
    if (self->object != 0 && (int)Lock_8229E090(self->object).ptr != 0) {
        fn_82672660(Lock_8229E090(self->object).ptr, self);
    }
    fn_8229E260(self);
}

extern "C" void fn_8229E090(Session_8229E090 *self, int detach, int notify)
{
    if (self->closed != 0) {
        if (detach != 0) {
            Detach_8229E090(self);
        }
    } else {
        self->closed = 1;
        if (Lock_8229E090(self->object).ptr != 0) {
            fn_8266F628(Lock_8229E090(self->object).ptr, 1);
        }
        fn_822848B8(self->timer);
        if (self->callback != 0 && notify != 0) {
            self->callback(2, self->callbackContext);
        }
        self->callback = 0;
        if (detach != 0) {
            Detach_8229E090(self);
        }
    }
}
