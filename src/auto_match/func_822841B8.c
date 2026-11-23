typedef struct Slot_822841B8 {
    char pad000[0x1c];
    int active;  /* 0x1C */
    int visible; /* 0x20 */
    float time;  /* 0x24 */
    char pad028[0x20c];
} Slot_822841B8;

typedef struct Ticker_822841B8 {
    void *scene; /* 0x00 */
    char pad04[0x4];
    float cycleTime;        /* 0x08 */
    Slot_822841B8 slots[6]; /* 0x0C */
} Ticker_822841B8;

extern void fn_822842B0(Ticker_822841B8 *self, unsigned int index);
extern void fn_82672C20(void *scene, const char *event, int arg0, int arg1);

void fn_822841B8(Ticker_822841B8 *self, float elapsed)
{
    Slot_822841B8 *slots = self->slots;
    int waiting = 0;
    unsigned int i;

    for (i = 0; i < 6; i++) {
        if (slots[i].active != 0) {
            if (slots[i].visible != 0) {
                slots[i].time -= elapsed;
                if (slots[i].time <= 0.0f) {
                    slots[i].visible = 0;
                    fn_822842B0(self, i);
                }
            } else {
                waiting = 1;
            }
        }
    }
    if (waiting != 0) {
        self->cycleTime -= elapsed;
        if (self->cycleTime < 0.0f) {
            self->cycleTime = 3.0f;
            fn_82672C20(self->scene, "CycleText", 0, 0);
        }
    } else {
        self->cycleTime = 5.0f;
    }
}
