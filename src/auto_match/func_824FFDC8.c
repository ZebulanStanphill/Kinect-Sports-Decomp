typedef struct Effect_824FFDC8 Effect_824FFDC8;
typedef struct {
  void *slot0;
  void *slot1;
  void (*setState)(Effect_824FFDC8 *self, int state, int arg);
} EffectVtbl_824FFDC8;
typedef struct { char pad0[0x190]; int active; } EffectData_824FFDC8;
struct Effect_824FFDC8 {
  EffectVtbl_824FFDC8 *vt;
  EffectData_824FFDC8 *data;
};
typedef struct { char pad0[0x128]; char locators[4]; } Model_824FFDC8;
typedef struct {
  char pad0[0x4c];
  int visible;
  char pad50[0x870];
  Model_824FFDC8 *model;
} Self_824FFDC8;

extern Effect_824FFDC8 *fn_825735B8(void *locators, const char *name);

void fn_824FFDC8(Self_824FFDC8 *self, unsigned int kind, unsigned char on)
{
  void *locators;
  const char *name;
  Effect_824FFDC8 *e;
  if (self->visible == 0)
    return;
  locators = self->model->locators;
  if (locators == 0)
    return;
  switch (kind) {
  case 0:
    e = fn_825735B8(locators, "passtrailLocator");
    break;
  case 1:
    e = fn_825735B8(locators, "shoottrailLocator");
    break;
  default:
    return;
  }
  if (e == 0)
    return;
  if (on)
    e->vt->setState(e, 5, 0);
  else
    e->data->active = 0;
}
