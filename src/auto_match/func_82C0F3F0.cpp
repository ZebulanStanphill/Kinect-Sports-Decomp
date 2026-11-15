struct Owner;

struct Elem {
    virtual void v000();
    virtual void v004();
    virtual void Release();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void Enable(int value);
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual unsigned __int64 *Value();
    char pad[0x40 - 4];
};

struct Owner {
    virtual void v000();
    virtual void v004();
    virtual void Release();
    char pad[0x30 - 4];
    Elem *arr;
    unsigned int count;
    Elem *Get(int index);
};

struct Stream_82C0F3F0 {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void Acquire(Owner **out, int first, int second);
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual void v058();
    virtual void Submit(unsigned __int64 value);
};

struct Self_82C0F3F0 {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual void v058();
    virtual void v05c();
    virtual void v060();
    virtual void v064();
    virtual void v068();
    virtual void v06c();
    virtual void v070();
    virtual void v074();
    virtual void v078();
    virtual void v07c();
    virtual void v080();
    virtual void v084();
    virtual void v088();
    virtual void v08c();
    virtual void v090();
    virtual void v094();
    virtual void v098();
    virtual void v09c();
    virtual void v0a0();
    virtual void v0a4();
    virtual void v0a8();
    virtual void v0ac();
    virtual void v0b0();
    virtual void v0b4();
    virtual void v0b8();
    virtual void v0bc();
    virtual void v0c0();
    virtual void Update();
    virtual void v0c8();
    virtual void Complete();
    char pad[0x2c - 4];
    Stream_82C0F3F0 *stream;
    char pad30[0xf4 - 0x30];
    long pending;
    char padF8[8];
    unsigned int index;
};

extern "C" long _InterlockedDecrement(long volatile *value);

extern "C" void fn_82C0F3F0(Self_82C0F3F0 *self)
{
    Owner *owner;
    self->stream->Acquire(&owner, 0, 0);
    unsigned int count = owner->count;
    Elem *element = owner->Get(self->index);
    element->Enable(1);
    unsigned __int64 value = *element->Value();
    element->Release();
    if (owner != 0) {
        owner->Release();
        owner = 0;
    }
    _InterlockedDecrement(&self->pending);
    if (++self->index >= count)
        self->index = 0;
    self->stream->Submit(value);
    self->Update();
    self->Complete();
}
