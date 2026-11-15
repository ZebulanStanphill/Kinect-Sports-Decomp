typedef struct State_824F8CF8 {
    char pad0[0x34];
    float elapsed; /* 0x34 */
    char pad38[0x214 - 0x38];
    float previous; /* 0x214 */
    float current;  /* 0x218 */
} State_824F8CF8;

extern int lbl_831C3100[9];
extern void fn_824F6818(State_824F8CF8 *);
extern void fn_824F6C80(State_824F8CF8 *);
extern void fn_824F7138(State_824F8CF8 *);
extern void fn_824F7718(State_824F8CF8 *, float);
extern void fn_824F8890(State_824F8CF8 *);
extern void fn_824F7E38(State_824F8CF8 *);

void fn_824F8CF8(State_824F8CF8 *self, float delta)
{
    self->previous = self->current;
    switch (lbl_831C3100[8]) {
    case 1:
        fn_824F6818(self);
        break;
    case 2:
        fn_824F6C80(self);
        break;
    case 3:
        fn_824F7138(self);
        break;
    case 4:
        fn_824F7718(self, delta);
        break;
    case 5:
        fn_824F8890(self);
        break;
    case 6:
        fn_824F7E38(self);
        break;
    }
    self->elapsed += delta;
}
