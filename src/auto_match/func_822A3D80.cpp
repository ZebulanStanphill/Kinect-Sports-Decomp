struct Slot_822A3D80;
struct Resource_822A3D80;

extern "C" int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern "C" int fn_8266F6B8(void);
extern "C" void fn_826728E8(int view, const char *name, unsigned int texture);
extern "C" void fn_8243E0D8(Slot_822A3D80 *slot);
extern "C" void fn_822315A0(void *p);
extern "C" void fn_8265CA20(void *p);

struct Slot_822A3D80 {
    unsigned char data[0x18];
    __forceinline ~Slot_822A3D80() { fn_8243E0D8(this); }
};

struct Resource_822A3D80 {
    void *p;
    __forceinline ~Resource_822A3D80() { if (p != 0) fn_822315A0(p); }
};

struct Avatars_822A3D80 {
    char pad0[0x28];
    int view;
    Resource_822A3D80 resource;
    char pad30[0x28];
    Slot_822A3D80 slots[3];
    Slot_822A3D80 extra;
};

struct Self_822A3D80 {
    Avatars_822A3D80 *avatars;
};

extern "C" void fn_822A3D80(Self_822A3D80 *self)
{
    char name[32];
    Avatars_822A3D80 *avatars;
    if (self->avatars->view != 0) {
        for (int i = 0; i < 8; i++) {
            fn_82526C70(name, 0x20, "avator_0%d", i + 1);
            int view = self->avatars->view;
            fn_826728E8(view, name, fn_8266F6B8());
        }
    }
    avatars = self->avatars;
    if (avatars != 0) {
        avatars->~Avatars_822A3D80();
        fn_8265CA20(avatars);
    }
}
