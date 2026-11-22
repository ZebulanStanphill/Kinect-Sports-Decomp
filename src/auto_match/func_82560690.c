typedef struct Player_82560690 {
    char pad0[0xcc];
    int type; /* 0xcc */
} Player_82560690;

typedef struct Players_82560690 {
    char pad0[0x10];
    Player_82560690 *players[2]; /* 0x10 */
} Players_82560690;

extern Players_82560690 lbl_83280B88;

extern int fn_825602B8(int index);

int fn_82560690(int type)
{
    int count;
    int i;

    count = 0;
    for (i = 0; i < 2; i++) {
        if (fn_825602B8(i) != 0 && (lbl_83280B88.players[i]->type == type || type == 2)) {
            count++;
        }
    }
    return count;
}
