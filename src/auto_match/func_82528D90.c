typedef struct Msg_82528D90 { int param; unsigned id; int ctx; } Msg_82528D90;
typedef struct Lis_82528D90 { int pad; struct Lis_82528D90 *next; unsigned id; void (*cb)(Msg_82528D90 *); int ctx; } Lis_82528D90;
extern int lbl_8327F7F4[];

void fn_82528D90(void)
{
  int p = (int)lbl_8327F7F4 + 0xc;
  do {
    if (*(unsigned *)p != 0) {
      Msg_82528D90 m;
      for (;;) {
        Lis_82528D90 *l;
        m.param = 0;
        m.id = 0;
        if (XNotifyGetNext(*(unsigned *)p, 0, &m.id, &m.param) == 0) break;
        for (l = *(Lis_82528D90 **)(p - 4); l != 0; l = l->next) {
          if (l->id == m.id) {
            m.ctx = l->ctx;
            l->cb(&m);
          }
        }
      }
    }
    p += 0xc;
  } while (p < (int)lbl_8327F7F4 + 0x24);
}
