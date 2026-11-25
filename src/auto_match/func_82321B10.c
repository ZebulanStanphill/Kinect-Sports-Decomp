typedef struct Tuning_82321B10 {
    float f00;          /* 0x00 */
    float retryChance;  /* 0x04 */
    float finishChance; /* 0x08 */
    float f0C;          /* 0x0C */
    float maxCharge;    /* 0x10 */
    char pad14[0x8];
    float inMax;  /* 0x1C */
    float outMin; /* 0x20 */
    float outMax; /* 0x24 */
} Tuning_82321B10;

typedef struct Throw_82321B10 {
    int f00;                 /* 0x00 */
    int f04;                 /* 0x04 */
    float timer;             /* 0x08 */
    float charge;            /* 0x0C */
    float power;             /* 0x10 */
    int canRetry;            /* 0x14 */
    int done;                /* 0x18 */
    int ready;               /* 0x1C */
    int powered;             /* 0x20 */
    Tuning_82321B10 *tuning; /* 0x24 */
} Throw_82321B10;

typedef struct Player_82321B10 {
    char pad000[0x7a0];
    int blocked; /* 0x7A0 */
    int limited; /* 0x7A4 */
} Player_82321B10;

extern const double lbl_821954B0[];
extern double __fsel(double test, double positive, double negative);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern int fn_82520780(unsigned int *seed, float chance);
extern int fn_822C0880(Player_82321B10 *player);
extern unsigned int lbl_83265A28;

int fn_82321B10(Throw_82321B10 *self, Player_82321B10 *player, int kind, int mode, float dt)
{
    int result = 0;

    switch (mode) {
    case 3:
        if (self->ready != 0 && player->blocked == 0) {
            result = 2;
            break;
        }
    case 2:
        result = 1;
        break;
    case 0:
        result = 9;
        break;
    }
    if (player->limited != 0 && result == 2) {
        result = 1;
    }
    if (self->done != 0) {
        return result;
    }
    switch (kind) {
    case 2: {
        Tuning_82321B10 *tuning = self->tuning;

        self->power = fn_82539560(dt, 0.0f, tuning->inMax, tuning->outMin, tuning->outMax) + self->power;
        self->powered = 1;
        break;
    }
    case 1:
        if (player->blocked == 0) {
            int charging;
            charging = mode != 1 && mode != 0;
            if (charging) {
                self->charge = dt + self->charge;
            }
            if (self->charge >= self->tuning->maxCharge) {
                result = 6;
            }
            {
                double difference = self->charge - self->tuning->maxCharge;

                self->charge = (float)__fsel(difference, self->tuning->maxCharge, self->charge);
            }
        }
        break;
    }
    switch (kind) {
    case 1:
    case 2:
        self->timer = self->timer - dt;
        if (mode == 3 && self->canRetry != 0 && fn_82520780(&lbl_83265A28, self->tuning->retryChance) != 0) {
            self->timer = 0.0f;
            return 3;
        }
        if (self->timer <= 0.0f) {
            self->timer = 0.0f;
            if (kind == 1 || kind == 2) {
                if (fn_82520780(&lbl_83265A28, self->tuning->finishChance) != 0 && player->blocked == 0 &&
                    fn_822C0880(player) != 0) {
                    result = 5;
                } else {
                    result = 4;
                }
            }
        }
        /* max(timer, 0.0) against the link-time pool's double 0.0 */
        self->timer = (float)__fsel(-self->timer, lbl_821954B0[13], self->timer);
        break;
    case 4:
        result = 4;
        break;
    }
    return result;
}
