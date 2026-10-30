struct Obj_82CE4118 {
  virtual ~Obj_82CE4118();
  short flag;
  short cnt;
};
typedef Obj_82CE4118 Obj_82CE4118_t;
struct Lock_82CE4118 { char pad[8]; int mode; int cnt; char pad2[8]; char cs[1]; };
extern "C" {
extern Lock_82CE4118 *lbl_8323A960;
extern unsigned lbl_8323A964;
extern unsigned KeTlsGetValue(unsigned);
extern int KeTlsSetValue(unsigned, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
}

extern "C" void fn_82CE4118(Obj_82CE4118 *o)
{
  Lock_82CE4118 *m;
  if (o->flag != 0) {
    if (o->cnt == 1) {
      o->cnt = 0;
      delete o;
    } else {
      m = lbl_8323A960;
      if (m->mode == 1 && KeTlsGetValue(lbl_8323A964) != 0x23df4554) {
        if (KeTlsGetValue(lbl_8323A964) == 0x23df4554) {
          m->cnt = m->cnt + 1;
        } else {
          RtlEnterCriticalSection(m->cs);
          m->cnt = 1;
          KeTlsSetValue(lbl_8323A964, 0x23df4554);
        }
        o->cnt = o->cnt - 1;
        m->cnt = m->cnt - 1;
        if (m->cnt <= 0) {
          KeTlsSetValue(lbl_8323A964, 0);
          RtlLeaveCriticalSection(m->cs);
        }
      } else {
        o->cnt = o->cnt - 1;
      }
    }
  }
}
