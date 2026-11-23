typedef struct Model_824792F8 {
    char pad0[0x84];
    struct Light_824792F8 *light; /* 0x84 */
} Model_824792F8;

typedef struct Light_824792F8 {
    char pad0[0xb0];
    unsigned char bright; /* 0xB0 */
} Light_824792F8;

typedef struct Screen_824792F8 {
    char pad0[0x10];
    Model_824792F8 *model; /* 0x10 */
    char pad14[0x10];
    void *title;    /* 0x24 */
    void *subtitle; /* 0x28 */
    char pad2c[0x38];
    unsigned int backId; /* 0x64 */
} Screen_824792F8;

typedef struct Profile_824792F8 {
    char pad0[0x100];
    int level; /* 0x100 */
} Profile_824792F8;

typedef struct Menu_824792F8 {
    char pad0[0x14];
    Screen_824792F8 *screen; /* 0x14 */
    char pad18[8];
    unsigned int selection; /* 0x20 */
    char pad24[4];
    int shown;  /* 0x28 */
    int active; /* 0x2C */
    char pad30[4];
    int showBack; /* 0x34 */
    char pad38[0x18];
    void *localizer;           /* 0x50 */
    void *panel;               /* 0x54 */
    Profile_824792F8 *profile; /* 0x58 */
} Menu_824792F8;

extern void fn_822815C8(Screen_824792F8 *screen);
extern int fn_82281530(Screen_824792F8 *screen);
extern int fn_825200A8(unsigned int *slot, unsigned int *pick);
extern int fn_82528BF8(void *mgr, const char *key, unsigned short *buf, int n, int a, int b);
extern void fn_82284A40(void *panel, unsigned short *title, unsigned short *text);
extern void fn_82280850(Model_824792F8 *model);
extern void fn_822A5480(void *obj, unsigned short *text);
extern void fn_822848B8(void *panel);
extern void fn_82284B08(void *panel, float dt);

void fn_824792F8(Menu_824792F8 *self, float dt, int lighting)
{
    Screen_824792F8 *screen;
    Light_824792F8 *light;

    if (self->screen != 0) {
        fn_822815C8(self->screen);
        if (self->panel != 0) {
            unsigned short text[0x20] = L"";
            int showBack = 0;

            if (fn_82281530(self->screen) == 0 && fn_825200A8(&self->selection, &self->screen->backId) == 0) {
                fn_82528BF8(self->localizer, "back", text, 0x20, 0, 1);
                showBack = 1;
            }
            if (showBack != self->showBack) {
                fn_82284A40(self->panel, text, 0);
                self->showBack = showBack;
            }
        }
    }
    if (self->profile != 0 && lighting != 0 && (light = self->screen->model->light) != 0) {
        if (self->profile->level > 0x32) {
            light->bright = 1;
        } else {
            light->bright = 0;
        }
    }
    if (self->active != 0 && fn_82281530(self->screen) == 0) {
        if (self->shown != 0) {
            screen = self->screen;
            fn_82280850(screen->model);
            if (screen->title != 0) {
                fn_822A5480(screen->title, L"");
            }
            if (screen->subtitle != 0) {
                fn_822A5480(screen->subtitle, L"");
            }
            if (self->panel != 0) {
                fn_822848B8(self->panel);
                self->panel = 0;
            }
        }
        self->shown = 0;
    }
    if (self->panel != 0) {
        fn_82284B08(self->panel, dt);
    }
}
