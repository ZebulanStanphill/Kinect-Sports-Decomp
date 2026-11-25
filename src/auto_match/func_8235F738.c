typedef struct Controller_8235F738 {
    char pad0[0x19c];
    int active; /* 0x19c */
} Controller_8235F738;

typedef struct Obj_8235F738 {
    char pad0[0x60c];
    float speedB; /* 0x060c */
    float speedA; /* 0x0610 */
    char pad614[0x608];
    int soundEnabled; /* 0x0c1c */
    char padc20[0x168];
    int soundD88; /* 0x0d88 */
    char padd8c[0x6f8];
    int sound1484; /* 0x1484 */
    int sound1488; /* 0x1488 */
    char pad148c[0x48];
    int sound14d4; /* 0x14d4 */
    int sound14d8; /* 0x14d8 */
    char pad14dc[0x1644];
    Controller_8235F738 *controller; /* 0x2b20 */
    float speedTimer;                /* 0x2b24 */
    float soundTimer;                /* 0x2b28 */
    char pad2b2c[4];
    int useB; /* 0x2b30 */
    char pad2b34[0xc];
    int locked; /* 0x2b40 */
    char pad2b44[0x5c];
    int pendingStop; /* 0x2ba0 */
    char pad2ba4[0x14];
    float delay; /* 0x2bb8 */
    char pad2bbc[0xe0];
    int phase;        /* 0x2c9c */
    float phaseTimer; /* 0x2ca0 */
    char pad2ca4[0x18];
    float idleTime; /* 0x2cbc */
    int busy;       /* 0x2cc0 */
} Obj_8235F738;

extern void fn_8235EDE8(Obj_8235F738 *self, float speed);
extern void fn_8235F5F0(Obj_8235F738 *self, float dt);
extern void fn_8235FBC8(Obj_8235F738 *self, float dt);
extern void fn_82360050(Obj_8235F738 *self, float dt);
extern void fn_823602F0(Obj_8235F738 *self, float dt);
extern void fn_82536590(int *sound, int value);

void fn_8235F738(Obj_8235F738 *self, float dt)
{
    float remaining;

    if (self->speedTimer > 0.0f && self->locked == 0) {
        self->speedTimer -= dt;
        if (self->speedTimer <= 0.0f) {
            fn_8235EDE8(self, self->useB != 0 ? self->speedB : self->speedA);
            self->speedTimer = 0.0f;
        }
    }
    if (self->soundTimer > 0.0f) {
        self->soundTimer -= dt;
        if (self->soundTimer <= 0.0f) {
            if (self->soundEnabled != 0) {
                if (self->useB != 0) {
                    fn_82536590(&self->sound14d8, 0);
                } else {
                    fn_82536590(&self->sound14d4, 0);
                }
            }
            self->soundTimer = 0.0f;
        }
    }
    fn_8235F5F0(self, dt);
    if (self->pendingStop != 0 && self->controller != 0 && self->controller->active == 0) {
        fn_82536590(&self->soundD88, 0);
        self->pendingStop = 0;
    }
    fn_8235FBC8(self, dt);
    fn_82360050(self, dt);
    if (self->phase != 0) {
        if (self->phase == 2 && self->delay <= 0.0f && self->speedTimer <= 0.0f) {
            fn_82536590(&self->sound1484, 0);
            self->phase = 3;
        }
    } else {
        remaining = self->phaseTimer - dt;
        self->phaseTimer = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->phaseTimer == 0.0f) {
            fn_82536590(&self->sound1488, 0);
            self->phase = 1;
        }
    }
    fn_823602F0(self, dt);
    if (self->busy == 0) {
        self->idleTime = 0.0f;
    }
    self->busy = 0;
}
