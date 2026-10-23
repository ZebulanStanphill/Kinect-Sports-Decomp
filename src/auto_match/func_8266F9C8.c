typedef struct Obj Obj;
typedef struct {
  int (*f[32])(Obj *, int, int, int, int, int);
} Vt;
struct Obj { Vt *vt; };
typedef struct {
  char pad[0x10];
  Obj *o;
  char pad2[0xf0 - 0x14];
  int active;
  char pad3[0x108 - 0xf4];
  char cs[0x1c];
} M;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_8266F9C8(M *param_1, int param_2, int param_3, int param_4, int param_5)
{
  void *cs;
  int r;

  r = 0;
  if (param_1->active != 0) {
    cs = param_1->cs;
    if (cs != 0) {
      RtlEnterCriticalSection(cs);
    }
    r = param_1->o->vt->f[0x54 / 4](param_1->o, 5, param_2, param_3, param_4, param_5);
    if (cs != 0) {
      RtlLeaveCriticalSection(cs);
    }
  }
  return r;
}
