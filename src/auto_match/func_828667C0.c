typedef struct Settings_828667C0 {
    int maxPools;
    int pad[3];
} Settings_828667C0;

typedef struct Obj_828667C0 {
    char pad0[0x8];
    int maxPools;
    char padc[0x59 - 0xc];
    unsigned char initialized;
} Obj_828667C0;

extern int fn_82FA5458(Settings_828667C0 *settings);
extern void fn_82230110(void *s, const char *p);
extern void *fn_8223B688(void *dst, void *src);
extern void fn_82230300(void *s, int built, int newsize);
extern void *fn_82868378(void);
extern void fn_8286DA10(void *log, void *msg, int result);

int fn_828667C0(Obj_828667C0 *self)
{
    int result;
    Settings_828667C0 settings;
    char a[32];
    char e[40];

    settings.maxPools = self->maxPools;
    result = fn_82FA5458(&settings);
    if (result != 1) {
        fn_82230110(a, "AK::MemoryMgr::Init( )");
        fn_8286DA10(fn_82868378(), fn_8223B688(e, a), result);
        fn_82230300(a, 1, 0);
        return 0xa00a0000;
    }
    self->initialized = 1;
    return 0x200a0000;
}
