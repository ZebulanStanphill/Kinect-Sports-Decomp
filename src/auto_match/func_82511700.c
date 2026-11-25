typedef struct Sound_82511700 {
    char pad0[4];
    void *voice;          /* 0x04 */
    unsigned char active; /* 0x08 */
    char pad09;
    unsigned char busy; /* 0x0a */
} Sound_82511700;

typedef struct Glob_83265988 {
    char pad0[0x44];
    unsigned char b44; /* 0x44 */
} Glob_83265988;

extern const float lbl_8327F880[];
extern Glob_83265988 lbl_83265988;
extern void *lbl_83297810;
extern void fn_828A5328(void);
extern void *fn_82511928(void);
extern void fn_82513BC8(void *manager, float volume);
extern void fn_828C0080(float value);
extern void fn_8288A340(void *voice, float value);
extern void fn_828AD798(void *voice, unsigned char value);
extern void fn_8288A320(void *voice, int value);
extern void fn_8288B060(void *voice, unsigned char value);

void fn_82511700(Sound_82511700 *self)
{
    float volume;

    self->busy = 1;
    volume = lbl_8327F880[5];
    if (self->active != 0) {
        fn_828A5328();
        fn_82513BC8(lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), volume);
        lbl_83265988.b44 = 0;
    }
    fn_828C0080(1.0f);
    if (self->voice != 0) {
        fn_8288A340(self->voice, 0.03f);
        fn_828AD798(self->voice, 0);
        fn_8288A320(self->voice, 0);
        fn_8288B060(self->voice, 0);
    }
    self->busy = 0;
}
