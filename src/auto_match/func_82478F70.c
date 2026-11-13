typedef struct G_82478F70 { int pad0; int pad4; int h8; } G_82478F70;
typedef struct New_82478F70 { char pad[0x41c]; void *vt; char pad2[0x14]; } New_82478F70;
extern unsigned short lbl_820E975C;
extern G_82478F70 lbl_83276728;
extern New_82478F70 *lbl_832766E8;
extern char lbl_821A8C90[];
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void *fn_8265C9E0(int);
extern void fn_824790D8(void);
extern void fn_8229DCA8(void *, void *, void *, void *, void *, void (*)(void), void *, int, int);
extern void *memset(void *, int, unsigned);

void fn_82478F70(void)
{
  unsigned short title[0x100] = { lbl_820E975C };
  unsigned short content[0x400] = { lbl_820E975C };
  unsigned short yes[0x100] = { lbl_820E975C };
  unsigned short no[0x100] = { lbl_820E975C };
  New_82478F70 *n;
  fn_82528BF8(lbl_83276728.h8, "exit_stadium_warning_title", title, 0x100, 0, 1);
  fn_82528BF8(lbl_83276728.h8, "exit_stadium_warning_content", content, 0x400, 0, 1);
  fn_82528BF8(lbl_83276728.h8, "yes", yes, 0x100, 0, 1);
  fn_82528BF8(lbl_83276728.h8, "no", no, 0x100, 0, 1);
  n = (New_82478F70 *)fn_8265C9E0(0x434);
  if (n != 0) {
    n->vt = lbl_821A8C90;
    fn_8229DCA8(n, title, content, yes, no, fn_824790D8, 0, 1, 0);
    lbl_832766E8 = n;
  } else {
    lbl_832766E8 = 0;
  }
}
