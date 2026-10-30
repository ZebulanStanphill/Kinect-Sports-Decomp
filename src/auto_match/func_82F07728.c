typedef struct Tab_82F07728 { unsigned short s[32]; unsigned l[16]; } Tab_82F07728;
extern Tab_82F07728 lbl_82161168;
typedef struct A_82F07728 { char pad[0x588]; int f588; char pad1[0x6d54 - 0x58c]; int f6d54; char pad2[0x6f14 - 0x6d58]; unsigned f6f14; unsigned f6f18; char pad3[0x7b38 - 0x6f1c]; int f7b38; } A_82F07728;

void fn_82F07728(A_82F07728 *a)
{
  unsigned v;

  if (a->f6d54 != 0 && a->f7b38 == 0) {
    v = lbl_82161168.l[a->f588];
    a->f6f18 = v;
    a->f6f14 = v;
    return;
  }
  v = lbl_82161168.s[a->f588];
  a->f6f18 = v;
  a->f6f14 = v;
}
