typedef struct G_82481368 { int pad0; int pad4; int h8; } G_82481368;
typedef struct Obj_82481368 { char pad[0xb4]; void *m_b8; } Obj_82481368;
typedef struct New_82481368 { char pad[0x41c]; void *vt; char pad2[0x14]; } New_82481368;
extern unsigned short lbl_820E975C;
extern G_82481368 lbl_83276728;
extern char lbl_821A8C90[];
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void *fn_8265C9E0(int);
extern void fn_824815F0(void);
extern void fn_8229DCA8(void *, void *, void *, void *, void *, void (*)(void), void *, int, int);
extern void *memset(void *, int, unsigned);

void fn_82481368(Obj_82481368 *p)
{
  unsigned short b0[0x400] = { lbl_820E975C };
  unsigned short b1[0x20] = { lbl_820E975C };
  unsigned short b2[0x20] = { lbl_820E975C };
  New_82481368 *n;
  fn_82528BF8(lbl_83276728.h8, "voicechat", b0, 0x400, 0, 1);
  fn_82528BF8(lbl_83276728.h8, "yes", b1, 0x20, 0, 1);
  fn_82528BF8(lbl_83276728.h8, "no", b2, 0x20, 0, 1);
  n = (New_82481368 *)fn_8265C9E0(0x434);
  if (n != 0) {
    n->vt = lbl_821A8C90;
    fn_8229DCA8(n, &lbl_820E975C, b0, b1, b2, fn_824815F0, p, 1, 0);
  } else {
    n = 0;
  }
  p->m_b8 = n;
}
