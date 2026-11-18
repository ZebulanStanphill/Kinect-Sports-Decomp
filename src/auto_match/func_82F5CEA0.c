typedef struct Rate_82F5CEA0 {
    char pad0[0x20];
    float current;  /* 0x20 */
    float previous; /* 0x24 */
    float delta;    /* 0x28 */
    float average;  /* 0x2c */
    int count;      /* 0x30 */
} Rate_82F5CEA0;

extern float lbl_8326316C;

double fabs(double);

/* Updates the running average of the per-step delta; a delta far from the average restarts it. */
void fn_82F5CEA0(Rate_82F5CEA0 *rate)
{
    float current = rate->current;
    int count = rate->count;
    float delta = current - rate->previous;
    float weight;

    rate->delta = delta;
    if (count > 1) {
        if (count > 2 && fabs(rate->average / delta - 1.0f) > lbl_8326316C) {
            rate->count = 2;
        } else {
            weight = 1.0f / (count - 1);
            delta = weight * (delta - rate->average) + rate->average;
        }
        rate->average = delta;
    }
    rate->previous = current;
}
