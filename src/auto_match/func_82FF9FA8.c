struct Obj_82FF9FA8;
typedef struct VT_82FF9FA8 { void *pad[2]; void (*f8)(struct Obj_82FF9FA8 *); } VT_82FF9FA8;
typedef struct Obj_82FF9FA8 { VT_82FF9FA8 *vt; } Obj_82FF9FA8;
typedef struct Mgr_82FF9FA8 {
  char pad[0x34];
  Obj_82FF9FA8 **begin;
  Obj_82FF9FA8 **end;
  Obj_82FF9FA8 **cap;
} Mgr_82FF9FA8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;
extern char lbl_8326434C[];

void fn_82FF9FA8(Mgr_82FF9FA8 *m)
{
  unsigned short n;
  Obj_82FF9FA8 **it;

  it = m->begin;
  if (it != m->end) {
    do {
      n = 1;
      RtlEnterCriticalSection(lbl_8326434C);
      if (it != m->end) {
        do {
          if ((n & 0xff) == 0) break;
          (*it)->vt->f8(*it);
          it++;
          n++;
        } while (it != m->end);
      }
      RtlLeaveCriticalSection(lbl_8326434C);
    } while (it != m->end);
  }
  if (m->begin != 0) {
    m->end = m->begin;
    fn_82FA5190(lbl_831BC768, m->begin);
    m->begin = 0;
    m->end = 0;
    m->cap = 0;
  }
}
