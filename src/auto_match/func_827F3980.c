extern unsigned fn_82811080();
extern int fn_82811238();
extern unsigned fn_82811438();
extern char lbl_8320A3E0[];
typedef struct { char pad[0x14]; int cnt; unsigned h; unsigned short idx; unsigned short on; } Obj_827F3980;
void fn_827F3980(Obj_827F3980 *o, unsigned short idx, unsigned h)
{
  unsigned s[4];
  unsigned char b[16];
  unsigned short on;
  if (o->on == 0 || h != 0 || idx != o->idx) {
    if (o->on != 0) {
      s[0] = 3;
      fn_82811238(lbl_8320A3E0, o->h, fn_82811438(b, s, 0x10));
    }
    o->idx = idx;
    o->h = h;
    if (idx == 0 || h != 0) {
      on = 0;
    } else {
      on = 1;
    }
    o->on = on;
    if (on != 0) {
      s[0] = 0;
      o->h = fn_82811080(lbl_8320A3E0, idx << 2, fn_82811438(b, s, 0x10));
    }
  }
  o->cnt = o->cnt + 1;
}
