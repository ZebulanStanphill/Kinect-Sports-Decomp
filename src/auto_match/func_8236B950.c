typedef struct Hud_8236B950 {
    char pad0[0xc];
    int *movie; /* 0xc */
} Hud_8236B950;

typedef struct Ui_8236B950 {
    char pad0[0xd4];
    Hud_8236B950 *hud; /* 0xd4 */
} Ui_8236B950;

typedef struct Screen_8236B950 {
    char pad0[0x4b0];
    Ui_8236B950 **ui; /* 0x4b0 */
} Screen_8236B950;

extern void fn_8229FF28(int *movie, int score);
extern void fn_8229F758(int *movie, float minutes, float seconds, float hundredths, int index);
extern void fn_8229F858(int *movie, int color);

void fn_8236B950(Screen_8236B950 *self, int score, float time, int color)
{
    Hud_8236B950 *hud = (*self->ui)->hud;
    int seconds;

    fn_8229FF28(hud->movie, score);
    seconds = (int)time;
    fn_8229F758(hud->movie, 0.0f, (float)seconds, (float)(int)((time - (float)seconds) * 100.0f), 0);
    fn_8229F858(hud->movie, color);
}
