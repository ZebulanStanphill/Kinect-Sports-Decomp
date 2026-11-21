typedef struct Data_8228A5F0 {
    char pad0[0x1498];
    int mode; /* 0x1498 */
    char pad149c[0x4];
    int playerId; /* 0x14a0 */
    char pad14a4[0x18b8 - 0x14a4];
    int state; /* 0x18b8 */
} Data_8228A5F0;

typedef struct Source_8228A5F0 {
    char pad0[0x8c4];
    int first;  /* 0x8c4 */
    int second; /* 0x8c8 */
} Source_8228A5F0;

typedef struct Slot_8228A5F0 {
    int state; /* 0x00 */
    char pad4[0x4];
    __int64 time;            /* 0x08 */
    int pending;             /* 0x10 */
    int active;              /* 0x14 */
    Source_8228A5F0 *source; /* 0x18 */
    int id;                  /* 0x1c */
    char pad20[0x20];
} Slot_8228A5F0;

typedef struct Game_8228A5F0 {
    char pad0[0x520];
    char table[0x188];         /* 0x520 */
    Slot_8228A5F0 slots[0x2d]; /* 0x6a8 */
    char pad11e8[0x8];
    Data_8228A5F0 *data; /* 0x11f0 */
} Game_8228A5F0;

extern unsigned int lbl_83265A28;
extern const float lbl_8218E8E8[5];
extern int fn_82520780(unsigned int *seed, float chance);
extern void fn_82486098(Data_8228A5F0 *data, int index, int choice, char *text);
extern void fn_8228ABB8(Game_8228A5F0 *self, int index, char *text, int *first, int *second);
extern void fn_8228ACD0(Game_8228A5F0 *self, int index, char *table);

void fn_8228A5F0(Game_8228A5F0 *self)
{
    int next;

    if (self->data->state != 1)
        return;
    if (self->slots[1].state == 4) {
        if (self->slots[3].state != 4)
            self->slots[3].state = 4;
        return;
    }
    next = self->slots[2].state;
    if (next == self->slots[3].state)
        return;
    switch (next) {
    case 2: {
        int sourceFirst = self->slots[2].source->first;
        int sourceSecond = self->slots[2].source->second;
        int second = sourceSecond;
        int first = sourceFirst;
        char text[1000];
        int choice;
        Data_8228A5F0 *data;
        int id;

        choice = fn_82520780(&lbl_83265A28, lbl_8218E8E8[0]);
        data = self->data;
        id = self->slots[2].id;
        data->mode = 2;
        data->playerId = id;
        fn_82486098(data, 3, choice, text);
        fn_8228ABB8(self, 3, text, &first, &second);
        self->slots[3].state = 2;
        self->slots[3].pending = 0;
        self->slots[3].active = 1;
        self->slots[3].id = self->slots[2].id;
        break;
    }
    case 3:
        fn_8228ACD0(self, 3, self->table);
        self->slots[3].time = 0;
        self->slots[3].state = 3;
        self->slots[3].pending = 0;
        self->slots[3].active = 1;
        break;
    }
}
