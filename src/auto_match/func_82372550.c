typedef struct Ent_82372550 Ent_82372550;
typedef struct VT_82372550 {
  void *s[5];
  void (*f14)(Ent_82372550 *, const char *);
} VT_82372550;
struct Ent_82372550 {
  VT_82372550 *vt;
  int pad[10];
  int f2c;
  int pad2[0xd5 - 0xc];
  int fd5;
};
extern int lbl_831DCD58[];
extern Ent_82372550 *fn_822CEE40(Ent_82372550 *);
extern void fn_822CDC98(Ent_82372550 *, const char *);
extern void fn_822315A0(int);
void fn_82372550(int param_1, int param_2, Ent_82372550 *p3, Ent_82372550 *p4, int p5, int p6)
{
  int iVar3;
  Ent_82372550 *e;
  if (*(int *)(param_1 + 0x1f0) != 8) {
    if (p5 >= 0x18) {
      iVar3 = 6;
    } else {
      iVar3 = lbl_831DCD58[p5];
    }
    e = fn_822CEE40(p3);
    if (*(int *)(param_1 + 0x220) != 0) {
      p3->vt->f14(p3, "movement_hit_medium");
    }
    if (p3->f2c == p4->f2c) {
      if (iVar3 == 2) {
        fn_822CDC98(p3, "comment_smashchance");
        fn_822CDC98(p3, "comment_cleanongoal");
      }
      fn_822CDC98(p3, "event_pass");
      switch (p5) {
      case 4:
        fn_822CDC98(p4, "comment_goodbump");
        fn_822CDC98(p4, "comment_goodpass");
        fn_822CDC98(p4, "event_receive");
        break;
      case 6:
      case 7:
        fn_822CDC98(p4, "comment_goodset");
        break;
      }
    } else {
      fn_822CDC98(p3, "event_attack");
    }
    if (iVar3 == 4 && e != 0) {
      fn_822CDC98(e, "comment_goodblock");
    }
    if (p6 != 0) {
      fn_822CDC98(p3, "event_defend");
      if (e != 0 && p3->fd5 != 0) {
        fn_822CDC98(e, "comment_recovery");
      }
    }
  }
  if (*(unsigned int *)(param_2 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_2 + 4));
  }
}
