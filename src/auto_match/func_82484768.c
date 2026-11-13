typedef struct Info_82484768 {
    char pad[0x108];
    int athletics;   /* 0x108 */
    int bowling;     /* 0x10c */
    int boxing;      /* 0x110 */
    int football;    /* 0x114 */
    int tabletennis; /* 0x118 */
    int volleyball;  /* 0x11c */
} Info_82484768;

typedef struct Game_82484768 {
    char pad[0x100];
    Info_82484768 *info;
} Game_82484768;

typedef struct Obj_82484768 {
    char pad[0x234];
    char name[1];
} Obj_82484768;

extern Game_82484768 *lbl_83265988;
extern char *strstr(const char *s, const char *sub);
extern int strcmp(const char *a, const char *b);

static __forceinline int Cmp_82484768(const unsigned char *p, const char *s)
{
    const unsigned char *q = p;
    unsigned char c = *q;
    unsigned char b = *s;
    if (c == b) {
        int d = (int)s - (int)p;
        do {
            q++;
            if (c == 0) return 0;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    return c - b;
}

int fn_82484768(Obj_82484768 *self)
{
    int v = 0;
    Game_82484768 *game = lbl_83265988;

    if (lbl_83265988 != 0) {
        if (Cmp_82484768((const unsigned char *)self->name, "boxing_main") == 0)
            v = game->info->boxing;
        else if (Cmp_82484768((const unsigned char *)self->name, "football_main") == 0)
            v = game->info->football;
        else if (Cmp_82484768((const unsigned char *)self->name, "volleyball_main") == 0)
            v = game->info->volleyball;
        else if (Cmp_82484768((const unsigned char *)self->name, "tabletennis_main") == 0)
            v = game->info->tabletennis;
        else if (Cmp_82484768((const unsigned char *)self->name, "bowling_main") == 0)
            v = game->info->bowling;
        else if (strstr(self->name, "athletics_main") != 0)
            v = game->info->athletics;
        if (v < 0 || v > 3)
            v = 0;
    }
    return v;
}
