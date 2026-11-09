extern void fn_824E0FB0();
typedef struct Cfg_824E0F08 { char pad[8]; float max; } Cfg_824E0F08;
typedef struct Obj_824E0F08 {
  int p0; Cfg_824E0F08 *cfg; int active; int running; int f10; int p14; float t;
} Obj_824E0F08;
void fn_824E0F08(Obj_824E0F08 *o, float dt)
{
  fn_824E0FB0();
  if (o->active != 0) {
    if (o->running != 0) {
      o->t = dt + o->t;
    }
    if (o->t > o->cfg->max) {
      o->active = 0;
      o->running = 0;
      o->t = 0.0f;
    }
  }
  if (o->f10 == 0 && o->active != 0) {
    o->running = 1;
  }
}
