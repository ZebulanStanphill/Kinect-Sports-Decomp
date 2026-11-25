typedef struct Stream_82C03700 Stream_82C03700;

class Stream_82C03700
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Lock();
    virtual void Slot10();
    virtual void Unlock();
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2C();
    virtual void Slot30();
    virtual int Seek(unsigned __int64);
    virtual int SetMode(int);
    virtual int Read(unsigned char *, unsigned int, unsigned int *);
};

typedef struct Cache_82C03700 {
    char pad0[0x2c];
    unsigned char *data;
    char pad30[4];
    Stream_82C03700 *stream;
    char pad38[0x38];
    int synchronized;
    char pad74[0x224];
    unsigned int start;
    unsigned int length;
} Cache_82C03700;

extern "C" void *memcpy(void *, const void *, unsigned int);
extern "C" void *memmove(void *, const void *, unsigned int);

extern "C" unsigned int fn_82C03700(Cache_82C03700 *self, unsigned int offset, unsigned int size,
                                    unsigned char **out)
{
    unsigned int retained;
    unsigned int received;
    unsigned int available;
    int sync;
    int result;
    unsigned int count;
    unsigned int start;
    unsigned int length;

    *out = 0;
    if (size > 0x10000)
        return 0;
    start = self->start;
    if (offset >= start) {
        length = self->length;
        if (offset + size <= start + length)
            goto cached;
    }
    if (offset >= self->start && offset < self->start + self->length) {
        retained = self->start + self->length - offset;
        if (retained <= self->length / 2)
            memcpy(self->data, self->data - retained + self->length, retained);
        else
            memmove(self->data, self->data - retained + self->length, retained);
    } else {
        retained = 0;
    }
    if (self->synchronized)
        self->stream->Lock();
    if (self->stream->SetMode(1) < 0) {
        if (self->synchronized)
            self->stream->Unlock();
        return 0;
    }
    if (self->stream->Seek(offset + retained) < 0) {
        if (self->synchronized)
            self->stream->Unlock();
        return 0;
    }
    received = 0;
    result = self->stream->Read(self->data + retained, 0x10000 - retained, &received);
    sync = self->synchronized;
    if (result < 0) {
        if (sync)
            self->stream->Unlock();
        return 0;
    }
    if (sync)
        self->stream->Unlock();
    self->start = offset;
    self->length = received + retained;
cached:
    available = self->length - offset + self->start;
    if (size >= available)
        count = available;
    else
        count = size;
    *out = self->data - self->start + offset;
    return count;
}
