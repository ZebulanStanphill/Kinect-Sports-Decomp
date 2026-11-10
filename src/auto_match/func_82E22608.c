typedef struct String_82E22608 {
    char data[0x1c];
} String_82E22608;

typedef struct Uploader_82E22608 {
    String_82E22608 project;
    String_82E22608 webServer;
    String_82E22608 aspxPage;
    unsigned short webPort;
    unsigned char deleteLogAfterUpload;
    unsigned char useLsp;
    int titleId;
    int pad5c;
    void *thread;
    void *event64;
    void *event68;
    char lock[0x1c];
} Uploader_82E22608;

typedef struct Config_82E22608 {
    int pad[2];
    void *settings;
} Config_82E22608;

extern char lbl_82196582[];
extern void fn_82E22570(void);
extern unsigned strlen(const char *);
extern void fn_82230360(String_82E22608 *s, const char *text, unsigned len);
extern void *fn_82A1E0C0(int a, int b, void (*fn)(void), void *arg, int flags, int e);
extern void fn_82A1E2C0(void *thread);
extern void fn_82A1E508(void *thread, int cpu);
extern int fn_82A1E5B8(void);
extern void *fn_82A1E6A0(int a, int b, int c, int d);
extern Config_82E22608 *fn_82E1D550(void);
extern const char *fn_82E1DE08(void *settings, const char *name, const char *def);
extern int fn_82E1DE88(void *settings, const char *name, int def);
extern unsigned char fn_82E1DF00(void *settings, const char *name, int def);
extern void RtlInitializeCriticalSection(void *cs);

void fn_82E22608(Uploader_82E22608 *self)
{
    void *settings;
    const char *text;
    int cpu;

    settings = fn_82E1D550()->settings;
    text = fn_82E1DE08(settings, "Project", "Unknown");
    fn_82230360(&self->project, text, strlen(text));
    text = fn_82E1DE08(settings, "UploadWebServer", lbl_82196582);
    fn_82230360(&self->webServer, text, strlen(text));
    text = fn_82E1DE08(settings, "UploadAspxPage", lbl_82196582);
    fn_82230360(&self->aspxPage, text, strlen(text));
    self->webPort = fn_82E1DE88(settings, "WebPort", 0x50);
    self->deleteLogAfterUpload = fn_82E1DF00(settings, "DeleteLogAfterUpload", 0);
    self->useLsp = fn_82E1DF00(settings, "UseLSP", 0);
    self->titleId = fn_82E1DE88(settings, "TitleID", 0);
    cpu = fn_82E1DE88(settings, "UploadCPU", -1);
    RtlInitializeCriticalSection(self->lock);
    self->event64 = fn_82A1E6A0(0, 1, 1, 0);
    self->event68 = fn_82A1E6A0(0, 1, 0, 0);
    self->thread = fn_82A1E0C0(0, 0, fn_82E22570, self, 4, 0);
    if (cpu > 5) {
        cpu = -1;
    }
    if (cpu < 0) {
        cpu = fn_82A1E5B8();
    }
    fn_82A1E508(self->thread, cpu);
    fn_82A1E2C0(self->thread);
}
