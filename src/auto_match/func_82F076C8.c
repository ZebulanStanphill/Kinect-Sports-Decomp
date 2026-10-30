typedef struct Tab_82F076C8 { unsigned short s[32]; unsigned l[16]; } Tab_82F076C8;
extern Tab_82F076C8 lbl_82161168;
typedef struct A_82F076C8 { char pad[0x6d54]; int f6d54; char pad2[0x7b38 - 0x6d58]; int f7b38; } A_82F076C8;
typedef struct B_82F076C8 { char pad[0x64]; int f64; char pad2[4]; unsigned f6c; unsigned f70; } B_82F076C8;

void fn_82F076C8(A_82F076C8 *a, B_82F076C8 *b)
{
  unsigned v;

  if (a->f6d54 != 0 && a->f7b38 == 0) {
    v = lbl_82161168.l[b->f64];
    b->f70 = v;
    b->f6c = v;
    return;
  }
  v = lbl_82161168.s[b->f64];
  b->f70 = v;
  b->f6c = v;
}
