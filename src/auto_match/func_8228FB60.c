typedef struct Self_8228FB60 {
    char pad0[0x4];
    int state;              /* 0x4 */
    int prevState;          /* 0x8 */
    char padc[0x14 - 0xc];
    void *movie;            /* 0x14 */
    char pad18[0x68 - 0x18];
    int paused;             /* 0x68 */
    char pad6c[0x94 - 0x6c];
    float timer;            /* 0x94 */
} Self_8228FB60;

extern void fn_8228F078(Self_8228FB60 *self);
extern void fn_8228F478(Self_8228FB60 *self, const char *name);
extern void fn_8228F648(Self_8228FB60 *self, int arg);
extern void fn_82672C20(void *movie, const char *path, int a, int b);

void fn_8228FB60(Self_8228FB60 *self)
{
    if (self->prevState == self->state)
        return;
    switch (self->state) {
    case 1:
        fn_8228F478(self, "gamepause");
        self->paused = 1;
        break;
    case 3:
    case 7:
        self->timer = 0.0f;
        break;
    case 5:
        fn_82672C20(self->movie, "_root.tutorialCtrl.startVideo", 0, 0);
        break;
    case 9:
        self->timer = 0.0f;
        fn_8228F648(self, 0);
        break;
    case 10:
        fn_8228F078(self);
        break;
    }
    self->prevState = self->state;
}
