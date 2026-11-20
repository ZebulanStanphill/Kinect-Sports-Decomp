typedef struct Val_82469958 {
    int w0;   /* 0x0 */
    int type; /* 0x4 */

    union {
        void *p;
        double d;
    } u; /* 0x8 */
} Val_82469958;

typedef struct Board_82469958 {
    int state; /* 0x00 */
    int movie; /* 0x04 */
    char pad08[0x14 - 0x08];
    float winningScore; /* 0x14 */
} Board_82469958;

extern float lbl_831C6E20;
extern void fn_82273C88(Val_82469958 *value);
extern void fn_82672C20(int movie, const char *path, Val_82469958 *args, int count);

void fn_82469958(Board_82469958 *self, int state)
{
    int previous = self->state;
    Val_82469958 result;

    result.w0 = 0;
    result.type = 0;
    if (state != previous) {
        if (previous >= 6 && previous <= 8) {
            fn_82672C20(self->movie, "_root.winningScoreOut", 0, 0);
        }
        self->state = state;
        switch (state) {
        case 0:
            if (previous == 2) {
                fn_82672C20(self->movie, "_root.GoTo3out", 0, 0);
            } else if (previous == 1) {
                fn_82672C20(self->movie, "_root.GoTo2out", 0, 0);
            } else if (previous != 6 && previous != 7 && previous != 8) {
                fn_82672C20(self->movie, "_root.GoTonone", 0, 0);
            }
            break;
        case 1:
            if (previous == 3 || previous == 4 || previous == 5) {
                fn_82672C20(self->movie, "_root.CancelLoop", 0, 0);
            } else if (previous == 2) {
                fn_82672C20(self->movie, "_root.GoToMiddleout", 0, 0);
            } else {
                fn_82672C20(self->movie, "_root.GoTo2in", 0, 0);
            }
            break;
        case 2:
            if (previous == 0) {
                fn_82672C20(self->movie, "_root.GoTo3in", 0, 0);
            } else {
                fn_82672C20(self->movie, "_root.GoToMiddlein", 0, 0);
            }
            break;
        case 3:
            fn_82672C20(self->movie, "_root.GoToCountUp", 0, 0);
            break;
        case 4:
            fn_82672C20(self->movie, "_root.GoToRedCountUp", 0, 0);
            break;
        case 5:
            fn_82672C20(self->movie, "_root.GoToBlueCountUp", 0, 0);
            break;
        case 6:
        case 7:
        case 8:
            fn_82672C20(self->movie, "_root.winningScoreIn", 0, 0);
            self->winningScore = lbl_831C6E20;
            break;
        }
    }
    fn_82273C88(&result);
}
