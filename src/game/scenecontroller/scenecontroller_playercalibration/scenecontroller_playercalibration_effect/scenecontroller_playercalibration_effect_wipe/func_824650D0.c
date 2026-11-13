typedef struct {
    int f0;
    int f4;
    void (*traceFn)(const char *func, const char *file, int line);
} Glob_83276774;
typedef struct {
    int pad[4];
    float f10;
    int f14;
    int active;
} Obj_824650D0;
extern Glob_83276774 lbl_83276774;

void fn_824650D0(Obj_824650D0 *o, float dt)
{
  if (o->active != 0) {
    o->f10 = o->f10 - dt;
    if (o->f10 <= 0.0f) {
      if (lbl_83276774.traceFn != 0) {
        lbl_83276774.traceFn("PlayerCalibration::Wipe::Update","D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\scenecontroller\\scenecontroller_playercalibration\\scenecontroller_playercalibration_effect\\scenecontroller_playercalibration_effect_wipe.cpp",0x37);
      }
      o->active = 0;
    }
  }
}
