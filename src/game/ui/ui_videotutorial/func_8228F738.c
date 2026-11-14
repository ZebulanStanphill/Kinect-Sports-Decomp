typedef struct Function_8228F738 {
    void *storage[4];
    void *impl;
} Function_8228F738;

typedef struct {
    int f0;
    int f4;
    void (*traceFn)(const char *func, const char *file, int line);
} Glob_83276774;

typedef struct VideoTutorial_8228F738 {
    char pad0[0x58];
    int active;
    int wipe;
    int closing;
} VideoTutorial_8228F738;

extern Glob_83276774 lbl_83276774;
extern const float lbl_8218E8E8;
extern void fn_825521F0(float from, float to, Function_8228F738 *done);

void fn_8228F738(VideoTutorial_8228F738 *self, int effect)
{
    if (self->active != 0 && self->closing != 0) {
        if (self->wipe != 0) {
            if (effect != 0) {
                Function_8228F738 done;
                done.impl = 0;
                fn_825521F0(0.0f, lbl_8218E8E8, &done);
            }
        } else {
            if (lbl_83276774.traceFn != 0) {
                lbl_83276774.traceFn("ui::VideoTutorial::CloseWipeEffect",
                    "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\ui\\ui_videotutorial.cpp", 0x2d3);
            }
        }
        self->closing = 0;
    }
}
