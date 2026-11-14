/* sched.cpp: a member function of the scheduler state; the assert texts name members
   (cur_state, yield_disabler) without "this->", so the text is passed separately. */
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern char lbl_82196F10[];
#define SCHED_FILE "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"
#define SCHED_ASSERT_TEXT(e, text, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", text, SCHED_FILE, line)

enum { SP_NORMAL = 1, SP_NOYIELD = 3 };

typedef struct YieldState_82BB5308 {
    void *yield_disabler;
    int cur_state;
} YieldState_82BB5308;

void fn_82BB5308(YieldState_82BB5308 *self, void *mova_sn)
{
    SCHED_ASSERT_TEXT(self->cur_state == SP_NORMAL || self->cur_state == SP_NOYIELD,
                      "cur_state == SP_NORMAL || cur_state == SP_NOYIELD", 0x1d2);
    if (self->cur_state == SP_NORMAL) {
        self->yield_disabler = mova_sn;
        self->cur_state = SP_NOYIELD;
    } else if (self->cur_state == SP_NOYIELD) {
        SCHED_ASSERT_TEXT(self->yield_disabler == mova_sn, "yield_disabler == mova_sn", 0x1d8);
    } else {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, SCHED_FILE, 0x1da);
    }
}
