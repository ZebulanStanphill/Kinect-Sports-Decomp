struct Name_822FC130 {
    int words[7];
};

struct String_822FC130 {
    int words[7];

    String_822FC130(const char *text);
    String_822FC130(const Name_822FC130 &name);
    String_822FC130(const String_822FC130 &source);
    ~String_822FC130();
};

extern "C" {
void fn_82230300(String_822FC130 *self, int built, unsigned int newSize);
unsigned char fn_822BD338(const void *name, const char *text);
extern char lbl_82196582[];
}

__forceinline String_822FC130::~String_822FC130()
{
    fn_82230300(this, 1, 0);
}

struct Item_822FC130 {
    int pad0;
    Name_822FC130 name; /* 0x4 */
};

struct Scene_822FC130 {
    char pad000[0x20];
    Item_822FC130 *target; /* 0x20 */
    char pad024[0x4];
    Item_822FC130 *source; /* 0x28 */
};

struct World_822FC130 {
    char pad000[0x114];
    Scene_822FC130 *scene; /* 0x114 */
};

struct Self_822FC130 {
    char pad000[0xc];
    World_822FC130 *world; /* 0xc */
};

struct Entry_822FC130 {
    const char *name;
    int value;
    int flags;
};

extern "C" Entry_822FC130 lbl_831CB86C[];

extern "C" bool fn_822FC130(Self_822FC130 *self)
{
    Item_822FC130 *source = self->world->scene->source;
    String_822FC130 name((int)source != 0 ? String_822FC130(source->name) : String_822FC130(lbl_82196582));
    const Name_822FC130 *target = &self->world->scene->target->name;
    unsigned int i;

    for (i = 0; i < 5; i++) {
        if (fn_822BD338(&name, lbl_831CB86C[i].name) || fn_822BD338(target, lbl_831CB86C[i].name)) {
            return true;
        }
    }
    return false;
}
