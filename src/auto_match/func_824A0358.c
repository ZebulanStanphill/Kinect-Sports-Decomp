extern void fn_8225F160(void);
extern void fn_8225F3C0(void);
extern const float lbl_821CA45C[2];

typedef struct Selection_824A0358 {
    int selected;
    float values[1];
} Selection_824A0358;

void fn_824A0358(void *self, Selection_824A0358 *state, int index)
{
    if (state->selected == 0) {
        fn_8225F160();
        fn_8225F3C0();
        if (state->values[index + 2] >= lbl_821CA45C[1]) {
            fn_8225F160();
            fn_8225F3C0();
            if (state->values[index + 2] < *(float *)((char *)self + 0x80) + lbl_821CA45C[1]) {
                state->selected = index;
            }
        }
    }
}
