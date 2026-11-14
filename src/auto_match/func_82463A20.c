typedef struct View_82463A20 {
    unsigned char pad[0x4c];
    int colour;
} View_82463A20;

typedef struct Screen_82463A20 {
    unsigned char pad[0xa0];
    View_82463A20 *mainView;
    View_82463A20 *overlayView;
} Screen_82463A20;

typedef struct Manager_82463A20 {
    Screen_82463A20 *screen;
} Manager_82463A20;

typedef struct Self_82463A20 {
    unsigned char pad[0x1d4];
    int useOverlay;
} Self_82463A20;

extern Manager_82463A20 *fn_824BC7E8(void);
extern void fn_8257D088(int x, int y, int w, int h, int alpha, int colour, int font);
extern int lbl_8320A898;

void fn_82463A20(Self_82463A20 *self)
{
    if (self->useOverlay != 0) {
        Screen_82463A20 *screen = fn_824BC7E8()->screen;
        int colour;
        if (screen->overlayView != 0) colour = screen->overlayView->colour;
        else colour = screen->mainView->colour;
        fn_8257D088(800, 50, 320, 240, 255, colour, lbl_8320A898);
    } else {
        fn_8257D088(800, 50, 320, 240, 255, fn_824BC7E8()->screen->mainView->colour, lbl_8320A898);
    }
}
