#include <string>

extern "C" {
typedef struct Temporary_8234EED8 {
    int words[4];
} Temporary_8234EED8;

static const float zero_8234EED8 = 0.0f;

extern float lbl_821CA45C[2];
extern float lbl_8218E8E8;
extern char *fn_82560010(void *self, const char *name);
extern void fn_8255F880(Temporary_8234EED8 *temporary, void *source);
extern int fn_8255F8D0(Temporary_8234EED8 *temporary, float low, float high, int flags);
extern unsigned char fn_827F22D0(void *self);
extern void fn_827F2D60(void *self, int value, float time, int mode, int flags);

extern void fn_827F3580(void *self, float delay, float time, int mode);
}

extern "C" void fn_8234EED8(char *self)
{
    Temporary_8234EED8 temporary;
    int value;
    float time;
    void **owner = *(void ***)(self + 0);
    char *entry = fn_82560010(*owner, ((std::string *)(self + 0xc))->c_str());
    if (entry != 0) {
        fn_8255F880(&temporary, entry + 0x40);
        value = fn_8255F8D0(&temporary, zero_8234EED8, lbl_821CA45C[1], 0);
        time = fn_827F22D0(*(void **)(self + 4)) ? zero_8234EED8 : lbl_8218E8E8;
        fn_827F2D60(*(void **)(self + 4), value, time, 0x12, 0);
    } else {
        fn_827F3580(*(void **)(self + 4), zero_8234EED8, lbl_8218E8E8, 0x12);
    }
    *(int *)(self + 0x30) = 0;
}
