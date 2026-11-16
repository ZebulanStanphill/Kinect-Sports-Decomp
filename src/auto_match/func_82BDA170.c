typedef struct Voice_82BDA170 Voice_82BDA170;

typedef struct Vtable_82BDA170 {
    void *unused[12];
    void (*setVolume)(Voice_82BDA170 *self, float volume, int flags);
} Vtable_82BDA170;

struct Voice_82BDA170 {
    Vtable_82BDA170 *vtable;
};

extern void *XMemSet(void *out, int value, unsigned int size);
extern int fn_82BD96A0(char *self, unsigned int mode);
extern int fn_82BD9BA0(char *self);
extern int fn_82BD9888(char *self, void *first, void *second, unsigned int mode);

void fn_82BDA170(char *self, unsigned __int64 id, void *first, void *second, unsigned int mode,
                 unsigned char flags)
{
    int result;
    XMemSet(self + 0x24, 0, 16);
    *(unsigned __int64 *)self = id;
    *(unsigned char *)(self + 0x40) = flags;
    if (first == 0 && second == 0) {
        result = fn_82BD96A0(self, mode);
        if (result == 1) {
            result = fn_82BD9BA0(self);
        }
    } else {
        result = fn_82BD9888(self, first, second, mode);
        if (result < 0) {
            return;
        }
    }
    if (result >= 0) {
        Voice_82BDA170 *voice = *(Voice_82BDA170 **)(self + 0x48);
        voice->vtable->setVolume(voice, 1.0f, 0);
    }
    *(int *)(*(char **)(self + 8) + 0x114) = 1;
}
