typedef unsigned int U32;
typedef struct { char pad[0x100]; U32 *tab; } Obj_824BB8C8;
typedef struct { char pad[0x1c]; Obj_824BB8C8 *o; int idx; U32 type; int flag; void *fn; int busy; int fail; } S_824BB8C8;
extern unsigned char fn_828EA610(Obj_824BB8C8 *);
extern unsigned char fn_828EA5F8(Obj_824BB8C8 *);
extern unsigned char fn_82512508(Obj_824BB8C8 *);
extern int fn_824BBA48(S_824BB8C8 *, Obj_824BB8C8 *, U32, int, int);
extern void fn_824BC050(void);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
void fn_824BB8C8(S_824BB8C8 *s, Obj_824BB8C8 *o, U32 type, int a, int b)
{
  if (o != 0 && fn_828EA610(o) == 0 && fn_828EA5F8(o) != 0) {
    int extra = 0;
    int idx;
    if (a != 0) {
      idx = 0x22c;
    } else if (b != 0) {
      idx = 0x22d;
    } else {
      switch (type) {
      case 3:
        idx = 0x22a;
        extra = 0x5d;
        break;
      case 2:
        idx = 0x229;
        extra = 0x3e;
        break;
      case 1:
        idx = 0x22b;
        extra = 0x1f;
        break;
      case 0:
        idx = 0x228;
        break;
      default:
        return;
      }
    }
    if (o->tab[idx] != 1) o->tab[idx] = 1;
    RtlEnterCriticalSection(s);
    if (s->busy != 0) {
      s->fail = 1;
      RtlLeaveCriticalSection(s);
    } else {
      RtlLeaveCriticalSection(s);
      if (fn_82512508(o) != 0) {
        if (fn_824BBA48(s, o, type, (a != 0 || b != 0) ? 1 : 0, extra) != 0) {
          s->idx = idx;
          s->o = o;
          s->type = type;
          s->flag = (a != 0 || b != 0) ? 1 : 0;
          s->busy = 1;
          s->fn = (void *)fn_824BC050;
          return;
        }
      }
      s->fail = 1;
    }
  }
}
