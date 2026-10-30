extern void fn_8236BCD8(void *p);
extern unsigned char fn_822BD338(void *p, const char *s);
extern void fn_822C72E0(void *p, const char *s);

typedef struct Anim_82309008 { char pad[0x20]; void *f20; } Anim_82309008;
typedef struct Mid_82309008 { char pad[0x114]; Anim_82309008 *f114; } Mid_82309008;
typedef struct Obj_82309008 { char pad[0xc]; Mid_82309008 *fc; void *f10; } Obj_82309008;

void fn_82309008(Obj_82309008 *o)
{
  fn_8236BCD8(o->f10);
  if (fn_822BD338((char *)o->fc->f114->f20 + 4, "goaliestandready") != 0) {
    fn_822C72E0(o->fc->f114->f20, "idle");
  }
  if (fn_822BD338((char *)o->fc->f114->f20 + 4, "goaliestandreadyrun") != 0) {
    fn_822C72E0(o->fc->f114->f20, "run");
  }
}
