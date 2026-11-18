// Fills a result for one player: mode 1, or mode 2 when a random draw against the player's chance
// succeeds, then looks the mode's name up. Exact only when compiled together with fn_823D2A18
// (link-time code generation): r4 stays live across that call.
struct Vector_823E6E98 {
    int *begin; /* 0x00 */
    int *end;   /* 0x04 */
};

struct Result_823E6E98 {
    int index;              /* 0x00 */
    int mode;               /* 0x04 */
    unsigned char data[12]; /* 0x08 */
    unsigned char enabled;  /* 0x14 */
};

struct Player_823E6E98 {
    float emptyChance; /* 0x00 */
    char padding04[0xa0];
    float chance; /* 0xa4 */
    char paddingA8[0x84];
};

extern "C" {
int fn_823CC7A0(void);
int fn_82520780(unsigned int *context, float value);
int fn_823D2A18(int mode);
int fn_823D9AB0(int value, void *out);
extern unsigned int lbl_83265A28;
}

class Self_823E6E98
{
  public:
    void Fill(int index, Result_823E6E98 *out);

    char padding00[0x20];
    Vector_823E6E98 **vectors; /* 0x20 */
    char padding24[0x4c8];
    Player_823E6E98 players[2]; /* 0x4ec */
};

void Self_823E6E98::Fill(int index, Result_823E6E98 *out)
{
    Vector_823E6E98 *values;
    int hit;

    out->index = index;
    out->mode = 1;
    values = vectors[index];
    if ((unsigned int)(values->end - values->begin) > 0) {
        hit = fn_82520780(&lbl_83265A28, players[fn_823CC7A0()].chance);
    } else {
        hit = fn_82520780(&lbl_83265A28, players[fn_823CC7A0()].emptyChance);
    }
    if (hit != 0) {
        out->mode = 2;
    }
    out->enabled = fn_823D9AB0(fn_823D2A18(out->mode), out->data);
}
