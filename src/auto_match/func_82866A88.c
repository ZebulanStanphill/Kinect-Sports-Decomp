typedef struct MusicSettings_82866A88 {
    float streamingLookAheadRatio;
    int pad[3];
} MusicSettings_82866A88;

typedef struct Obj_82866A88 {
    char pad0[0x5c];
    unsigned char musicInitialized;
} Obj_82866A88;

extern void fn_82FA6A98(MusicSettings_82866A88 *settings);
extern int fn_82FA7B00(MusicSettings_82866A88 *settings);
extern void fn_82230110(void *s, const char *p);
extern void *fn_8223B688(void *dst, void *src);
extern void fn_82230300(void *s, int built, int newsize);
extern void *fn_82868378(void);
extern void fn_8286DA10(void *log, void *msg, int result);

int fn_82866A88(Obj_82866A88 *self)
{
    int result;
    MusicSettings_82866A88 settings;
    char a[32];
    char e[40];

    settings.streamingLookAheadRatio = 0.0f;
    fn_82FA6A98(&settings);
    result = fn_82FA7B00(&settings);
    if (result != 1) {
        fn_82230110(a, "AK::MusicEngine::Init( ... )");
        fn_8286DA10(fn_82868378(), fn_8223B688(e, a), result);
        fn_82230300(a, 1, 0);
        return 0xa00a0000;
    }
    self->musicInitialized = 1;
    return 0x200a0000;
}
