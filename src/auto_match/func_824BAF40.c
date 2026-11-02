typedef unsigned int U32;
typedef struct { char pad[0x100]; U32 *tab; } Obj_824BAF40;
typedef struct { char pad[0x1c]; Obj_824BAF40 *o; int idx; U32 type; int flag; void *fn; int busy; int fail; } S_824BAF40;
extern unsigned char fn_828EA610(Obj_824BAF40 *);
extern unsigned char fn_828EA5F8(Obj_824BAF40 *);
extern unsigned char fn_82512508(Obj_824BAF40 *);
extern int fn_824BB0C0(S_824BAF40 *, Obj_824BAF40 *, U32, int, int);
extern void fn_824BB600(void);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
void fn_824BAF40(S_824BAF40 *s, Obj_824BAF40 *o, U32 type, int a, int b)
{
  if (o != 0 && fn_828EA610(o) == 0 && fn_828EA5F8(o) != 0) {
    int extra = 0;
    int idx;
    if (a != 0) {
      idx = 0x2de;
    } else if (b != 0) {
      idx = 0x2df;
    } else {
      switch (type) {
      case 3:
        idx = 0x2e0;
        extra = 0x32;
        break;
      case 2:
        idx = 0x2dd;
        extra = 0x19;
        break;
      case 1:
        idx = 0x2e1;
        extra = 0x4b;
        break;
      case 0:
        idx = 0x2dc;
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
        if (fn_824BB0C0(s, o, type, (a != 0 || b != 0) ? 1 : 0, extra) != 0) {
          s->idx = idx;
          s->o = o;
          s->type = type;
          s->flag = (a != 0 || b != 0) ? 1 : 0;
          s->busy = 1;
          s->fn = (void *)fn_824BB600;
          return;
        }
      }
      s->fail = 1;
    }
  }
}
