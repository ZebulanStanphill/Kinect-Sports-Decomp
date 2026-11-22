/* Updates the music state, then eases the master bus volume towards its target. */
typedef struct Music_822931D8 {
    int request[4]; /* 0x00 */
    int playing;    /* 0x10 */
} Music_822931D8;

typedef struct Volume_822931D8 {
    char pad[0x58];
    float current; /* 0x58 */
    float target;  /* 0x5c */
} Volume_822931D8;

typedef struct Mixer_822931D8 Mixer_822931D8;

typedef struct MixerVt_822931D8 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void (*SetVolume)(Mixer_822931D8 *self, void *name, float volume); /* 0x10 */
} MixerVt_822931D8;

struct Mixer_822931D8 {
    MixerVt_822931D8 *vt;
};

typedef struct Name_822931D8 {
    int words[8];
} Name_822931D8;

extern void fn_82292DB8(Music_822931D8 *music);
extern void fn_82293000(Music_822931D8 *music);
extern void fn_82293088(Music_822931D8 *music);
extern void fn_822930F8(Music_822931D8 *music);
extern Volume_822931D8 *fn_82292AE8(void);
extern void *fn_82864988(Name_822931D8 *name, const char *text);
extern void fn_82864898(Name_822931D8 *name);
extern float fn_82809CB0(float x);
extern Mixer_822931D8 *lbl_8327F848;

void fn_822931D8(Music_822931D8 *music)
{
    Volume_822931D8 *volume;
    float current;
    float next;
    Name_822931D8 name;

    if ((music->request[0] != 0 || music->request[1] != 0 || music->request[2] != 0 ||
         music->request[3] != 0) &&
        music->playing == 0) {
        fn_82292DB8(music);
    } else {
        fn_82293000(music);
        fn_82293088(music);
        fn_822930F8(music);
    }
    volume = fn_82292AE8();
    current = volume->current;
    if (current != volume->target) {
        lbl_8327F848->vt->SetVolume(lbl_8327F848, fn_82864988(&name, "main_bus_volume_master"), current);
        fn_82864898(&name);
        if (fn_82809CB0(volume->current - volume->target) < 0.00001f) {
            next = volume->target;
        } else {
            next = (volume->target - volume->current) * 0.08f + volume->current;
        }
        volume->current = next;
    }
}
