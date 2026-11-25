class Stream_82C024C8
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Lock(); /* 0xc */
    virtual void Slot10();
    virtual void Unlock(); /* 0x14 */
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2C();
    virtual void Slot30();
    virtual int Seek(unsigned __int64 position);                                    /* 0x34 */
    virtual int Begin(int mode);                                                    /* 0x38 */
    virtual int Read(unsigned char *buffer, unsigned int size, unsigned int *read); /* 0x3c */
};

typedef struct Reader_82C024C8 {
    char pad0[0x34];
    Stream_82C024C8 *stream; /* 0x34 */
    char pad38[0x38];
    int locking; /* 0x70 */
    char pad74[0x198];
    unsigned char *buffer;     /* 0x20c */
    unsigned __int64 position; /* 0x210 */
    unsigned int length;       /* 0x218 */
} Reader_82C024C8;

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);
extern "C" void *memmove(void *dst, const void *src, unsigned int size);

/* Makes size bytes at position available in the read buffer; returns how many are there. */
extern "C" unsigned int fn_82C024C8(Reader_82C024C8 *self, unsigned __int64 position, unsigned int size,
                                    unsigned char **out)
{
    unsigned int kept;
    unsigned int read;
    unsigned __int64 available;
    unsigned __int64 result;

    *out = 0;
    if (size > 0x10000) {
        return 0;
    }
    if (position >= self->position && position + size <= self->position + self->length) {
        goto ready;
    }
    if (position >= self->position && position < self->position + self->length) {
        kept = (unsigned int)self->position - (unsigned int)position + self->length;
        if (kept <= self->length >> 1) {
            memcpy(self->buffer, self->buffer - kept + self->length, kept);
        } else {
            memmove(self->buffer, self->buffer - kept + self->length, kept);
        }
    } else {
        kept = 0;
    }
    if (self->locking != 0) {
        self->stream->Lock();
    }
    if (self->stream->Begin(1) < 0) {
        if (self->locking != 0) {
            self->stream->Unlock();
        }
        return 0;
    }
    if (self->stream->Seek(position + kept) < 0) {
        if (self->locking != 0) {
            self->stream->Unlock();
        }
        return 0;
    }
    read = 0;
    if (self->stream->Read(self->buffer + kept, 0x10000 - kept, &read) < 0) {
        if (self->locking != 0) {
            self->stream->Unlock();
        }
        return 0;
    }
    if (self->locking != 0) {
        self->stream->Unlock();
    }
    self->position = position;
    self->length = read + kept;
ready:
    available = self->length - position + self->position;
    if (size < available) {
        result = size;
    } else {
        result = available;
    }
    *out = self->buffer - (unsigned int)self->position + (unsigned int)position;
    return (unsigned int)result;
fail:
    if (self->locking != 0) {
        self->stream->Unlock();
    }
    return 0;
}
