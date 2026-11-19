typedef struct Stream_827E7008 Stream_827E7008;

typedef struct Request_827E7008 {
    int handle;       /* 0x0 */
    int state[2];     /* 0x4 */
    int offset;       /* 0xc */
    int length;       /* 0x10 */
    int bufferOffset; /* 0x14 */
    char pad18[0xc];
    Stream_827E7008 *owner; /* 0x24 */
} Request_827E7008;

class Sink_827E7008
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual int Post(Request_827E7008 *request); /* 0x28 */
};

typedef struct Slot_827E7008 {
    char pad0[0x74];
    Sink_827E7008 *sink; /* 0x74 */
} Slot_827E7008;

typedef struct StreamVtbl_827E7008 {
    void *slots[7];
    void (*Prepare)(Stream_827E7008 *self);   /* 0x1c */
    int (*GetContext)(Stream_827E7008 *self); /* 0x20 */
} StreamVtbl_827E7008;

struct Stream_827E7008 {
    StreamVtbl_827E7008 *vt; /* 0x0 */
    int index;               /* 0x4 */
    int handle;              /* 0x8 */
    int padc[2];
    int state; /* 0x14 */
    int pad18[2];
    char *slots; /* 0x20 */
    int pad24[3];
    int fileOffset; /* 0x30 */
    int size;       /* 0x34 */
    int position;   /* 0x38 */
    int pad3c;
    int bufferOffset; /* 0x40 */
};

extern "C" unsigned int fn_827D9DC0(int handle);
extern "C" void fn_827D9DD8(int handle);
extern "C" void fn_827D50C0(int state, int code);
extern "C" int fn_827E3808(void);
extern "C" void fn_827E4218(int context, Request_827E7008 **out);
extern "C" void fn_82517A50(void *dst, int *src);

extern "C" int fn_827E7008(Stream_827E7008 *self, Request_827E7008 **out)
{
    int chunk;
    int length;
    int fileOffset;
    int bufferOffset;
    int result;
    if (self->position == 0) {
        if (fn_827D9DC0(self->handle) & 1) {
            return 0x3e4;
        }
        if ((fn_827D9DC0(self->handle) & 2) != 0) {
            fn_827D50C0(self->state, 0x3e5);
        } else {
            fn_827D50C0(self->state, 6);
            fn_827D9DD8(self->handle);
            return 6;
        }
    }
    self->vt->Prepare(self);
    chunk = fn_827E3808();
    length = self->size - self->position;
    if (chunk < length) {
        length = chunk;
    }
    bufferOffset = self->bufferOffset + self->position;
    fileOffset = self->fileOffset + self->position;
    fn_827E4218(self->vt->GetContext(self), out);
    (*out)->owner = self;
    (*out)->length = length;
    (*out)->handle = self->handle;
    fn_82517A50((*out)->state, &self->state);
    (*out)->offset = fileOffset;
    (*out)->bufferOffset = bufferOffset;
    result = ((Slot_827E7008 *)(self->slots + self->index * 0x28))->sink->Post(*out);
    self->position += length;
    if (result != 0x3e5 && result != 0x3e4 && result != 0) {
        fn_827D9DD8(self->handle);
        return result;
    }
    return self->position < self->size ? 0x3e5 : 0;
}
