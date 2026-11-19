/* Shows the video-upload title and the highlights on/off text for the current player settings. */
typedef struct Settings_8228D2D0 {
    char pad0[8];
    unsigned char unused : 4;
    unsigned char highlights : 1; /* 0x8, bit 3 */
} Settings_8228D2D0;

typedef struct Profile_8228D2D0 {
    char pad0[8];
    Settings_8228D2D0 *settings; /* 0x8 */
} Profile_8228D2D0;

typedef struct Player_8228D2D0 {
    char pad0[0xf0];
    Profile_8228D2D0 *profile; /* 0xf0 */
} Player_8228D2D0;

typedef struct Globals_8228D2D0 {
    Player_8228D2D0 *player; /* 0x0 */
    char pad4[0x45 - 4];
    unsigned char signedIn; /* 0x45 */
} Globals_8228D2D0;

typedef struct Strings_8228D2D0 {
    int f0;
    void *table; /* 0x4 */
} Strings_8228D2D0;

typedef struct Self_8228D2D0 {
    char pad0[0x144];
    void *panel; /* 0x144 */
    char pad148[0x164 - 0x148];
    int highlightsOff; /* 0x164 */
    char pad168[0x184 - 0x168];
    int canUpload; /* 0x184 */
} Self_8228D2D0;

extern void *memset(void *, int, unsigned int);
extern unsigned short lbl_820E975C;
extern Globals_8228D2D0 lbl_83265988;
extern Strings_8228D2D0 lbl_83276728;
extern int fn_82528BF8(void *table, const char *key, unsigned short *buf, int size, int a, int b);
extern void fn_82284A40(void *panel, unsigned short *title, unsigned short *text);

static __forceinline int HighlightsOn(Settings_8228D2D0 *settings)
{
    if (settings->highlights)
        return 1;
    return 0;
}

void fn_8228D2D0(Self_8228D2D0 *self)
{
    unsigned short title[0x100];
    unsigned short text[0x100];
    int off;
    Strings_8228D2D0 *strings;

    title[0] = lbl_820E975C;
    memset(title + 1, 0, 0x1fe);
    text[0] = lbl_820E975C;
    memset(text + 1, 0, 0x1fe);
    off = 0;
    if (lbl_83265988.signedIn) {
        off = !HighlightsOn(lbl_83265988.player->profile->settings);
    }
    strings = &lbl_83276728;
    if (self->canUpload != 0 && off) {
        fn_82528BF8(strings->table, "video_upload", title, 0x100, 0, 1);
    }
    fn_82528BF8(strings->table, off ? "video_highlightsoff" : "video_highlightson", text, 0x100, 0, 1);
    fn_82284A40(self->panel, title, text);
    self->highlightsOff = off;
}
