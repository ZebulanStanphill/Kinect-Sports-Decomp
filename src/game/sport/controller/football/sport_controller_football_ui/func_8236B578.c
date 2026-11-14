typedef struct {
    void *f0;
    void *f4;
    void (*trace)(const char *func, const char *file, int line);
    void *pad[5];
    int (*query)(void);
} Glob_8236B578;
extern Glob_8236B578 lbl_83276774;

typedef struct { char pad[0xd4]; int f_d4; float f_d8; } Sub_8236B578;
typedef struct { char pad[0x4b0]; Sub_8236B578 *ui; } Obj_8236B578;

int fn_8236B578(Obj_8236B578 *obj)
{
    Sub_8236B578 *s = obj->ui;
    if (s->f_d4 != 0) {
        if (s->f_d8 <= 0.0f && (lbl_83276774.query != 0 ? lbl_83276774.query() : 0) != 0) {
            s->f_d4 = 0;
            if (lbl_83276774.trace != 0)
                lbl_83276774.trace("olympus::sport::football::FootballUI::CloseSwipe",
                "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller\\football\\sport_controller_football_ui.cpp", 0x1e5);
        } else {
            return 0;
        }
    }
    return 1;
}
