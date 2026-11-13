typedef struct { int a; void (*assertFn)(int, int, int, const char *, const char *, int); } Glob_83276774;
extern Glob_83276774 lbl_83276774;
typedef struct { int f0; int state; int f8; int fc; float f10; float f14; int f18; } Obj_82465160;

void fn_82465160(Obj_82465160 *o, int state)
{
  if (state == 0xb) {
    o->f10 = o->f14;
    if (lbl_83276774.assertFn != 0) {
      lbl_83276774.assertFn(0,0,1,"PlayerCalibration::Wipe::SetState","D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\scenecontroller\\scenecontroller_playercalibration\\scenecontroller_playercalibration_effect\\scenecontroller_playercalibration_effect_wipe.cpp",0x4a);
    }
    o->f18 = 1;
  }
  o->state = state;
}
