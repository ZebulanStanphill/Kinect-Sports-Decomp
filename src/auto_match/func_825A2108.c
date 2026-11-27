typedef struct Emitter_825A2108 Emitter_825A2108;

typedef struct EmitterVtbl_825A2108 {
    void (*Destroy)(Emitter_825A2108 *self, int flags); /* 0x0 */
} EmitterVtbl_825A2108;

struct Emitter_825A2108 {
    EmitterVtbl_825A2108 *vtbl;
};

typedef struct Scene_825A2108 {
    char pad0[0x14c];
    char listener[4]; /* 0x14c */
} Scene_825A2108;

typedef struct Sound_825A2108 {
    char pad0[0x4];
    Scene_825A2108 **scene; /* 0x4 */
    char pad8[0x4];
    Emitter_825A2108 *emitter; /* 0xc */
} Sound_825A2108;

typedef struct Owner_825A2108 {
    char pad0[0x7ac];
    Sound_825A2108 sound; /* 0x7ac */
} Owner_825A2108;

extern int lbl_8329755C;

extern void *fn_8265C9E0(unsigned int size);
extern Emitter_825A2108 *fn_825FF9D0(void *memory, Owner_825A2108 *owner, Scene_825A2108 **scene,
                                     void *source);
extern void fn_827F0FB8(void *bank, Emitter_825A2108 *emitter, int flags);
extern void fn_827F0F58(void *bank, void *voice, int flags);
extern void *fn_827F46E8(unsigned int size);
extern void *fn_827F5C20(void *memory, int kind, Emitter_825A2108 *emitter, void *source,
                         Emitter_825A2108 *listener, int flags, float volume, float pitch, float pan,
                         int group, void *sceneListener, unsigned short channel, int userData, int callback);

Emitter_825A2108 *fn_825A2108(Owner_825A2108 *self, void *bank, void *source)
{
    Sound_825A2108 *sound = &self->sound;
    Emitter_825A2108 *emitter;
    void *voice;
    void *memory;

    if (sound->emitter != 0) {
        sound->emitter->vtbl->Destroy(sound->emitter, 1);
    }
    memory = fn_8265C9E0(0x160);
    if (memory != 0) {
        emitter = fn_825FF9D0(memory, self, sound->scene, source);
    } else {
        emitter = 0;
    }
    sound->emitter = emitter;
    fn_827F0FB8(bank, emitter, 1);
    memory = fn_827F46E8(0xe8);
    if (memory != 0) {
        voice = fn_827F5C20(memory, 0, sound->emitter, source, sound->emitter, 0, 1.0f, 1.0f, 0.0f,
                            lbl_8329755C, (*sound->scene)->listener, 0, 0, 0);
    } else {
        voice = 0;
    }
    fn_827F0F58(bank, voice, 1);
    return sound->emitter;
}
