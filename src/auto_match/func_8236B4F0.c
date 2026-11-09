typedef struct { int pad; void (*cb)(int, int, int, const char *, const char *, int); } Cb_8236B4F0;
extern Cb_8236B4F0 lbl_83276774;

typedef struct { char pad[0xd4]; int f_d4; float f_d8; } Sub_8236B4F0;
typedef struct { char pad[0x4b0]; Sub_8236B4F0 *ui; } Obj_8236B4F0;

void fn_8236B4F0(Obj_8236B4F0 *obj, float v)
{
  Sub_8236B4F0 *s = obj->ui;
  float c = 0.0f;
  s->f_d8 = v;
  if (v == c && lbl_83276774.cb != 0) {
    lbl_83276774.cb(0, 0, 1, "olympus::sport::football::FootballUI::OpenSwipe",
        "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller\\football\\sport_controller_football_ui.cpp", 0x1dc);
  }
  s->f_d4 = 1;
}
