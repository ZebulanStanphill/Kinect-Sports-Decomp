class Buffer_82E76EB0 {
public:
    virtual long QueryInterface(const void *iid, void **out) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual long Lock(unsigned char **data, unsigned long *maxLength, unsigned long *currentLength) = 0;
    virtual long Unlock() = 0;
    virtual long GetCurrentLength(unsigned long *length) = 0;
    virtual long SetCurrentLength(unsigned long length) = 0;
};

class Sample_82E76EB0 {
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void Slot02() = 0;
    virtual void Slot03() = 0;
    virtual void Slot04() = 0;
    virtual void Slot05() = 0;
    virtual void Slot06() = 0;
    virtual void Slot07() = 0;
    virtual void Slot08() = 0;
    virtual void Slot09() = 0;
    virtual void Slot10() = 0;
    virtual void Slot11() = 0;
    virtual void Slot12() = 0;
    virtual void Slot13() = 0;
    virtual void Slot14() = 0;
    virtual void Slot15() = 0;
    virtual void Slot16() = 0;
    virtual void Slot17() = 0;
    virtual void Slot18() = 0;
    virtual void Slot19() = 0;
    virtual void Slot20() = 0;
    virtual void Slot21() = 0;
    virtual void Slot22() = 0;
    virtual void Slot23() = 0;
    virtual void Slot24() = 0;
    virtual void Slot25() = 0;
    virtual void Slot26() = 0;
    virtual void Slot27() = 0;
    virtual void Slot28() = 0;
    virtual void Slot29() = 0;
    virtual void Slot30() = 0;
    virtual void Slot31() = 0;
    virtual void Slot32() = 0;
    virtual void Slot33() = 0;
    virtual void Slot34() = 0;
    virtual void Slot35() = 0;
    virtual void Slot36() = 0;
    virtual void Slot37() = 0;
    virtual void Slot38() = 0;
    virtual void Slot39() = 0;
    virtual void Slot40() = 0;
    virtual void Slot41() = 0;
    virtual long AddBuffer(Buffer_82E76EB0 *buffer) = 0;            // 0xa8
    virtual void Slot43() = 0;
    virtual void Slot44() = 0;
    virtual long GetTotalLength(unsigned long *totalLength) = 0;    // 0xb4
};

struct Obj_82E76EB0 {
    char pad[0x148];
    unsigned long expectedLength;   // 0x148
    char pad14c[0x14];
    unsigned int started;           // 0x160
    int pad164;
    unsigned long paddingLength;    // 0x168
};

extern "C" long fn_82E65EE8(unsigned long maxLength, Buffer_82E76EB0 **buffer);
extern "C" void *memset(void *dst, int value, unsigned int size);

extern "C" long fn_82E76EB0(Obj_82E76EB0 *self, Sample_82E76EB0 *sample)
{
    long hr;
    Buffer_82E76EB0 *buffer;
    unsigned long totalLength;
    unsigned char *data;

    if (sample == 0)
        return (long)0x80070057;
    if (self->paddingLength == 0)
        return 0;
    buffer = 0;
    totalLength = 0;
    if (self->started == 0) {
        sample->GetTotalLength(&totalLength);
        if (self->paddingLength + totalLength != self->expectedLength) {
            hr = (long)0xC00D36BB;
            goto done;
        }
    }
    hr = fn_82E65EE8(self->paddingLength, &buffer);
    if (hr >= 0) {
        hr = buffer->SetCurrentLength(self->paddingLength);
        if (hr >= 0) {
            data = 0;
            hr = buffer->Lock(&data, 0, 0);
            if (hr >= 0) {
                memset(data, 0xcc, self->paddingLength);
                buffer->Unlock();
                hr = sample->AddBuffer(buffer);
            }
        }
    }
done:
    if (buffer != 0)
        buffer->Release();
    return hr;
}
