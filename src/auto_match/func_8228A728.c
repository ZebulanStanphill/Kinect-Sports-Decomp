typedef struct Player_8228A728 {
    char pad0[0x420];
} Player_8228A728;

typedef struct Data_8228A728 {
    char pad0[0x234];
    char table[0x610];          /* 0x234 */
    Player_8228A728 players[1]; /* 0x844 */
} Data_8228A728;

typedef struct Slot_8228A728 {
    int state; /* 0x00 */
    char pad4[0xc];
    int pending; /* 0x10 */
    int active;  /* 0x14 */
    char pad18[0x4];
    int id; /* 0x1c */
    char pad20[0x20];
} Slot_8228A728;

typedef struct Game_8228A728 {
    char pad0[0x6a8];
    Slot_8228A728 slots[0x2d]; /* 0x6a8 */
    char pad11e8[0x8];
    Data_8228A728 *data; /* 0x11f0 */
} Game_8228A728;

extern void XMemSet(void *dest, int value, unsigned int size);
extern void XMemCpy(char *dest, const char *src, int count);
extern void fn_8234F338(void *table, int id, int *first, int *second);
extern void fn_8228ABB8(Game_8228A728 *self, int index, char *text, int *first, int *second);

static __forceinline int IsValid(int *value)
{
    if (value == 0) {
        return 0;
    }
    return *value != 0;
}

char *fn_8228A728(char *text, Game_8228A728 *self, int index, int id, int *first, int *second)
{
    int defaultFirst;
    int defaultSecond;

    XMemSet(text, 0, 1000);
    XMemCpy(text, (char *)&self->data->players[index], 1000);
    if (!IsValid(first)) {
        fn_8234F338(self->data->table, id, &defaultFirst, &defaultSecond);
        fn_8228ABB8(self, index, text, &defaultFirst, &defaultSecond);
    } else {
        fn_8228ABB8(self, index, text, first, second);
    }
    self->slots[index].state = 2;
    self->slots[index].id = id;
    self->slots[index].pending = 0;
    self->slots[index].active = 1;
    return text;
}
