typedef struct Queue_82C008E8 Queue_82C008E8;
typedef struct Buffer_82C008E8 Buffer_82C008E8;
typedef struct Output_82C008E8 Output_82C008E8;

typedef struct Packet_82C008E8 {
    int unused;
    unsigned int token;
    unsigned int size;
    char pad[0x14];
    Queue_82C008E8 *queue;
} Packet_82C008E8;

typedef struct BufferVt_82C008E8 {
    char pad[0x34];
    int (*release)(Buffer_82C008E8 *, unsigned __int64);
    char pad2[0x18];
    unsigned int (*getSize)(Buffer_82C008E8 *);
} BufferVt_82C008E8;

struct Buffer_82C008E8 {
    BufferVt_82C008E8 *vt;
};

struct Output_82C008E8 {
    virtual void reserved00();
    virtual void reserved04();
    virtual void reserved08();
    virtual void reserved0c();
    virtual void reserved10();
    virtual void reserved14();
    virtual void reserved18();
    virtual void reserved1c();
    virtual void reserved20();
    virtual void reserved24();
    virtual void reserved28();
    virtual void reserved2c();
    virtual void reserved30();
    virtual void reserved34();
    virtual void reserved38();
    virtual void reserved3c();
    virtual void reserved40();
    virtual void reserved44();
    virtual void reserved48();
    virtual int start(unsigned int, unsigned int);
    virtual void reserved50();
    virtual int submit(Packet_82C008E8 *, unsigned int);
};

struct Queue_82C008E8 {
    char pad[0x2c];
    Buffer_82C008E8 *buffer;
    char pad2[8];
    Output_82C008E8 *output;
    Packet_82C008E8 packets[16];
    unsigned int capacity;
    volatile long pending; // Updated atomically by the submit and completion paths.
    unsigned int next;
    int started;
};

extern "C" long _InterlockedIncrement(volatile long *);
extern "C" long _InterlockedDecrement(volatile long *);

extern "C" int fn_82C008E8(Queue_82C008E8 *self, unsigned int token)
{
    int result;
    volatile long *pending = &self->pending; // Shared pending count.
    if ((unsigned long)*pending >= self->capacity) {
        if (self->started == 0) {
            self->output->start(0, 0);
            self->started = 1;
        }
        return 0x8000000a;
    }

    _InterlockedIncrement(pending);
    self->packets[self->next].size = self->buffer->vt->getSize(self->buffer);
    self->packets[self->next].token = token;
    self->packets[self->next].queue = self;
    result = self->output->submit(&self->packets[self->next], 0);
    if (result >= 0) {
        if (self->started == 0) {
            result = self->output->start(0, 0);
        }
        if (result < 0) {
            return result;
        }
        self->started = 1;
    } else {
        _InterlockedDecrement(pending);
    }
    if (result >= 0) {
        if (++self->next >= self->capacity) {
            self->next = 0;
        }
        result = self->buffer->vt->release(self->buffer, token);
    }
    return result;
}
