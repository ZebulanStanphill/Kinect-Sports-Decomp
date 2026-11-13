typedef struct State_829C5960 {
    char pad[0x50];
    unsigned int state;
} State_829C5960;

extern State_829C5960 lbl_83214DB0;
extern void fn_829CB870(void);

void fn_829C5960(void)
{
    if (lbl_83214DB0.state != 1) {
        return;
    }
    lbl_83214DB0.state = 4;
    fn_829CB870();
}
