extern "C" void fn_82E50CB8(void *);
extern "C" void fn_82E50F10(void *);

struct Lock_82E4AAB8 {
    void *cs;
    Lock_82E4AAB8(void *c) : cs(c) { fn_82E50CB8(cs); }
    ~Lock_82E4AAB8() { fn_82E50F10(cs); }
};

struct Stream_82E4AAB8 {
    char pad0[0x58];
    int cs[17];
    int handle;
    char padA0[0x28];
    __int64 position;
};

extern "C" int fn_82E4AAB8(Stream_82E4AAB8 *self, int origin, __int64 offset, int unused, __int64 *newPosition)
{
    Lock_82E4AAB8 lock(self->cs);
    if (newPosition == 0) {
        return 0x80070057;
    }
    if (self->handle == -1) {
        return 0xc00d36b2;
    }
    if (origin != 0 && origin != 1) {
        return 0x80070057;
    }
    if (origin == 0) {
        self->position = offset;
    } else {
        self->position += offset;
    }
    *newPosition = self->position;
    return 0;
}
