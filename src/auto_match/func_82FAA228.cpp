struct Block_82FAA228;

struct Cursor_82FAA228 {
    void *owner;
    struct Block_82FAA228 *block;
};
struct Source_82FAA228;

struct Source_82FAA228 {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void *GetOwner();
    char padding[0x10];
    unsigned int flags;
};

struct Block_82FAA228 {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual Block_82FAA228 *Next(Source_82FAA228 *source, Cursor_82FAA228 *cursor, int *count);
    char padding[0x3c];
    int enabled;
};

struct Context_82FAA228 {
    char padding[8];
    struct Source_82FAA228 *source;
    char padding0C[0x14];
    void *output;
};
extern "C" struct Block_82FAA228 *fn_82FAD0A8(void *owner);
extern "C" void fn_82FA9C60(struct Block_82FAA228 *self, unsigned int count, unsigned int flags,
                            void *output);

struct Iter_82FAA228 : Cursor_82FAA228 {
    Iter_82FAA228(void *o)
    {
        owner = o;
        block = owner != 0 ? fn_82FAD0A8(owner) : 0;
    }

    Block_82FAA228 *Get() const
    {
        return block;
    }

    Iter_82FAA228 Next(Source_82FAA228 *source, int *available) const
    {
        Iter_82FAA228 next(*this);
        next.block = block->Next(source, &next, available);
        return next;
    }
};

extern "C" void fn_82FAA228(struct Context_82FAA228 *self)
{
    Source_82FAA228 *source = self->source;
    unsigned int flags = source->flags & 0xff00;
    if (flags != 0) {
        Iter_82FAA228 cursor(source->GetOwner());
        int remaining = 0x400;
        while (cursor.Get() != 0) {
            Block_82FAA228 *block = cursor.Get();
            int available;
            unsigned int count;
            Iter_82FAA228 next = cursor.Next(self->source, &available);
            count = available;
            if (remaining < (int)count) {
                count = remaining;
            }
            if (block->enabled != 0 && (unsigned int)count != 0) {
                fn_82FA9C60(block, count, flags, self->output);
            }
            remaining -= count;
            if (remaining == 0) {
                break;
            }
            cursor = next;
        }
    }
}
