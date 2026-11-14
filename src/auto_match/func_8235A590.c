typedef struct TeamTable_8235A590 {
    unsigned char pad[0x10];
    int ids[2];
} TeamTable_8235A590;

typedef struct TeamInfo_8235A590 {
    unsigned char pad[8];
    unsigned short name[(0x11c - 8) / 2];
} TeamInfo_8235A590;

typedef struct Teams_8235A590 {
    unsigned char pad[0x28];
    TeamTable_8235A590 *table;
    unsigned char pad2c[0x10];
    TeamInfo_8235A590 *infos;
} Teams_8235A590;

extern Teams_8235A590 *lbl_832765BC;
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_82F64988(unsigned short *dst, int size, const unsigned short *src);

static __forceinline int FindTeam(Teams_8235A590 *teams, int id)
{
    int i;
    for (i = 0; i < 2; i++) {
        if (teams->table->ids[i] == id) {
            return i;
        }
    }
    return -1;
}

void fn_8235A590(int id, unsigned short *buf, int size, int *out)
{
    if (lbl_832765BC != 0) {
        int index = FindTeam(lbl_832765BC, id);
        fn_82F64988(buf, size, lbl_832765BC->infos[index].name);
        *out = index == 0 ? 1 : 2;
    } else {
        fn_82528EE0(buf, size, L"Team %d", id);
        *out = 0;
    }
}
