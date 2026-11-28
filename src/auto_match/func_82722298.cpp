typedef struct {
    unsigned char type;
    unsigned char storage[15];
} Value_82722298;

typedef struct {
    unsigned int reserved;
    int id; /* 0x04 */
    int mode;
    int start;
    int count;
    int flags;
    unsigned char enabled; /* 0x18 */
} Action_82722298;

typedef struct {
    unsigned char pad[8];
    int begin; /* 0x08 */
    int end;   /* 0x0c */
    unsigned char padding[12];
    int group; /* 0x1c */
} Target_82722298;

typedef struct {
    const void *vtable;
    Value_82722298 *value;
    unsigned int token;
    unsigned int reserved0;
    unsigned int reserved1;
    unsigned char flags;
    Target_82722298 *target;
    int result;
    int index;
    int *cursor;
} Callback_82722298;

class Listener_82722298
{
  public:
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual void Slot8();
    virtual void Slot9();
    virtual void Notify(Callback_82722298 *, unsigned int, int);
};

typedef struct {
    Listener_82722298 *listener;
    unsigned int key;
    unsigned int rest[2];
} Receiver_82722298;

extern "C" void fn_82695750(Value_82722298 *, Receiver_82722298 *);
extern "C" void fn_82696330(Value_82722298 *);
extern "C" int fn_82721D00(Target_82722298 *, int, int, Value_82722298 *, int, int, int, unsigned char);
extern "C" void fn_826828D8(Callback_82722298 *);
extern "C" void fn_82683270(void *, int);
extern "C" const unsigned char lbl_8200579C[];

extern "C" void fn_82722298(Action_82722298 *self, Target_82722298 *target, unsigned int token,
                            Receiver_82722298 *receiver)
{
    Value_82722298 input;
    Value_82722298 callbackValue;
    Callback_82722298 callback;
    int result;
    int index;
    int *cursor;

    fn_82695750(&input, receiver);
    result = fn_82721D00(target, self->id, self->mode, &input, self->start, self->count, self->flags,
                         self->enabled);
    fn_82696330(&input);
    if (result < 0)
        return;

    index = ((target->begin - target->end) >> 4) + target->group * 32 - 32;
    callback.target = target;
    callbackValue.type = 0;
    callback.vtable = lbl_8200579C;
    callback.flags = 0;
    callback.reserved0 = 0;
    callback.reserved1 = 0;
    callback.token = token;
    callback.result = result;
    callback.value = &callbackValue;
    cursor = &target->begin;
    callback.index = index;
    receiver->listener->Notify(&callback, receiver->key, 0);
    fn_826828D8(&callback);
    fn_82683270(cursor, result);
    fn_82696330(&callbackValue);
}
