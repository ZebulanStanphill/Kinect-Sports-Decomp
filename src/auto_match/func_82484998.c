// Records a value for the sport whose main movie is named by the object's name string
// (boxing, football, volleyball, table tennis, bowling, athletics).
char *strstr(const char *s, const char *sub);

typedef struct Results_82484998 {
    char pad0[0x108];
    unsigned int athletics;     /* 0x108 */
    unsigned int bowling;       /* 0x10c */
    unsigned int boxing;        /* 0x110 */
    unsigned int football;      /* 0x114 */
    unsigned int tableTennis;   /* 0x118 */
    unsigned int volleyball;    /* 0x11c */
} Results_82484998;

typedef struct Game_82484998 {
    char pad0[0x100];
    Results_82484998 *results;
} Game_82484998;

typedef struct Obj_82484998 {
    char pad0[0x234];
    char name[1];
} Obj_82484998;

extern Game_82484998 *lbl_83265988;

static __forceinline int Compare(const unsigned char *p, const char *lit)
{
    const unsigned char *q = p;
    unsigned char c = *q;
    unsigned char b = (unsigned char)lit[0];
    if (c == b) {
        int d = (int)lit - (int)p;
        do {
            q++;
            if (c == 0)
                return 0;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    return c - b;
}

void fn_82484998(Obj_82484998 *self, unsigned int value)
{
    Game_82484998 *game = lbl_83265988;

    if (Compare((const unsigned char *)self->name, "boxing_main") == 0) {
        if (game->results->boxing != value)
            game->results->boxing = value;
    } else if (Compare((const unsigned char *)self->name, "football_main") == 0) {
        if (game->results->football != value)
            game->results->football = value;
    } else if (Compare((const unsigned char *)self->name, "volleyball_main") == 0) {
        if (game->results->volleyball != value)
            game->results->volleyball = value;
    } else if (Compare((const unsigned char *)self->name, "tabletennis_main") == 0) {
        if (game->results->tableTennis != value)
            game->results->tableTennis = value;
    } else if (Compare((const unsigned char *)self->name, "bowling_main") == 0) {
        if (game->results->bowling != value)
            game->results->bowling = value;
    } else if (strstr(self->name, "athletics_main") != 0) {
        if (game->results->athletics != value)
            game->results->athletics = value;
    }
}
