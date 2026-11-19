typedef struct Stat_823AAC40 {
    char reserved00[0x20];
    float points; /* 0x20 */
} Stat_823AAC40;

typedef struct Side_823AAC40 {
    Stat_823AAC40 **stats; /* 0x00 */
    char reserved04[0xc];
    int current; /* 0x10 */
} Side_823AAC40;

typedef struct Sides_823AAC40 {
    Side_823AAC40 *home; /* 0x00 */
    Side_823AAC40 *away; /* 0x04 */
} Sides_823AAC40;

typedef struct Mode_823AAC40 {
    char reserved00[0x40];
    unsigned int kind; /* 0x40 */
} Mode_823AAC40;

typedef struct Match_823AAC40 {
    char reserved00[8];
    Sides_823AAC40 **sides; /* 0x08 */
    char reserved0c[0x94];
    Mode_823AAC40 *mode; /* 0xa0 */
} Match_823AAC40;

typedef struct Rules_823AAC40 {
    char reserved00[0x28];
    unsigned int pointsToWin; /* 0x28 */
    int lead;                 /* 0x2c */
} Rules_823AAC40;

extern int fn_82358FD8(Match_823AAC40 *match, unsigned short *text, int size, const char *key);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern unsigned short lbl_83299338[];

unsigned short *fn_823AAC40(Rules_823AAC40 *self, Match_823AAC40 *match)
{
    unsigned short text[64];
    unsigned int gamePoint = self->pointsToWin - 1;
    Sides_823AAC40 *sides = *match->sides;
    Side_823AAC40 *home = sides->home;
    Side_823AAC40 *away = sides->away;
    int lead;

    if ((int)home->stats[home->current]->points < gamePoint ||
        (int)away->stats[away->current]->points < gamePoint) {
        fn_82358FD8(match, text, 0x40, "tabletennismainobjective");
        fn_82528EE0(lbl_83299338, 0x40, text, self->pointsToWin);
    } else if ((int)match->mode != 0 && match->mode->kind == 1) {
        fn_82358FD8(match, text, 0x40, "tabletennispartymodedeuce");
        fn_82528EE0(lbl_83299338, 0x40, text);
    } else {
        lead = self->lead;
        if (lead < 1) {
            lead = 1;
        }
        fn_82358FD8(match, text, 0x40, "tabletennismainobjectivedeuce");
        fn_82528EE0(lbl_83299338, 0x40, text, lead);
    }
    return lbl_83299338;
}
