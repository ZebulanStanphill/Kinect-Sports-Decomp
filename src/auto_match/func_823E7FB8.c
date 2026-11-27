typedef struct Marker_823E7FB8 {
    char reserved00[0x110];
    void *visual; /* 0x110 */
    char reserved114[0xd8];
    int disabled; /* 0x1ec */
} Marker_823E7FB8;

typedef struct Lineup_823E7FB8 {
    char reserved00[8];
    unsigned int count; /* 0x08 */
    char reserved0c[0x3c];
    void *label; /* 0x48 */
} Lineup_823E7FB8;

typedef struct Team_823E7FB8 {
    Lineup_823E7FB8 **lineups; /* 0x00 */
    char reserved04[0xc];
    int current; /* 0x10 */
} Team_823E7FB8;

typedef struct Slot_823E7FB8 {
    char reserved00[0x20];
    unsigned int zone; /* 0x20 */
    char reserved24[0xc];
} Slot_823E7FB8;

typedef struct Play_823E7FB8 {
    int selected;                 /* 0x00 */
    unsigned int side;            /* 0x04 */
    int attackName;               /* 0x08 */
    unsigned int attackZones[7];  /* 0x0c */
    int defenceName;              /* 0x28 */
    unsigned int defenceZones[7]; /* 0x2c */
} Play_823E7FB8;

extern void fn_822AF138(void *visual, int state);
extern const char *fn_823D2A18(int key);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern int fn_822ACB68(void *label, const char *name);
extern Marker_823E7FB8 *fn_822ABA88(Lineup_823E7FB8 *lineup, unsigned int index);

void fn_823E7FB8(Play_823E7FB8 *play, unsigned int *targets, int highlight, Team_823E7FB8 ***teams,
                 void ***panels, Slot_823E7FB8 *slots)
{
    char name[0x80];
    unsigned int side = play->side;
    unsigned int other = side == 0;
    Team_823E7FB8 *attack = (*teams)[side];
    Team_823E7FB8 *defence = (*teams)[other];
    Marker_823E7FB8 *marker;
    unsigned int selected;
    unsigned int zone;
    unsigned int i;
    int state;
    unsigned int *it;
    unsigned int *end;

    fn_822AF138((*panels)[side], 0xb);
    fn_82526C70(name, 0x80, "default_zone%sattack", fn_823D2A18(play->attackName));
    fn_822ACB68(attack->lineups[attack->current]->label, name);
    for (i = 0; i < attack->lineups[attack->current]->count; i++) {
        marker = fn_822ABA88(attack->lineups[attack->current], i);
        zone = play->attackZones[i];
        slots[side * 7 + i].zone = zone;
        if (marker->disabled != 0)
            state = 8;
        else
            state = 0x16;
        fn_822AF138(marker->visual, state);
    }
    fn_822AF138((*panels)[other], 0xc);
    fn_82526C70(name, 0x80, "default_zone%sattack", fn_823D2A18(play->defenceName));
    fn_822ACB68(defence->lineups[defence->current]->label, name);
    selected = (unsigned int)-1;
    if (highlight != 0)
        selected = play->attackZones[play->selected];
    for (i = 0; i < defence->lineups[defence->current]->count; i++) {
        marker = fn_822ABA88(defence->lineups[defence->current], i);
        zone = play->defenceZones[i];
        slots[other * 7 + i].zone = zone;
        if (marker->disabled != 0)
            state = 8;
        else if (zone == selected)
            state = 0x15;
        else {
            end = targets + 3;
            for (it = targets; it != end; ++it) {
                if (*it == i)
                    break;
            }
            if (it != end)
                state = 0x11;
            else
                state = 0xa;
        }
        fn_822AF138(marker->visual, state);
    }
}
