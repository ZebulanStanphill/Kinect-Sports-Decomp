typedef struct Scenes_824E3410 {
    int first;
    int mainMenu;
    int intro;
} Scenes_824E3410;

extern unsigned char lbl_83276741;
extern Scenes_824E3410 lbl_8326597C;
extern int fn_82520158(const char *name, void *out, int flags);

void fn_824E3410(void)
{
    int first;

    if (!lbl_83276741) {
        lbl_83276741 = 1;
    }
    fn_82520158("first_scene", &first, 0);
    lbl_8326597C.first = first;
    fn_82520158("retail_mainmenu_scene", &lbl_8326597C.mainMenu, 0);
    fn_82520158("start_intro", &lbl_8326597C.intro, 0);
}
