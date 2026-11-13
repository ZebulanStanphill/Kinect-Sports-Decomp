typedef struct Entry_8251D7E0 {
  int f0;
  void *handle;
  int f8;
  int active;
  char pad10[0x20];
} Entry_8251D7E0;

typedef struct Globals_8251D7E0 {
  char pad0[0x28];
  Entry_8251D7E0 entries[4];
  int pade8;
  Entry_8251D7E0 *cur;
  Entry_8251D7E0 *saved;
  char padf4[0x14];
  void (*callback)(void *handle);
} Globals_8251D7E0;

extern Globals_8251D7E0 lbl_832960A0;
extern void fn_82595950(void *handle);

void fn_8251D7E0(void)
{
  int i;
  Entry_8251D7E0 *e;
  lbl_832960A0.saved = lbl_832960A0.cur;
  for (i = 3; i >= 0; i--) {
    e = &lbl_832960A0.entries[i];
    if (e->handle != 0) {
      lbl_832960A0.cur = e;
      if (lbl_832960A0.saved == e || e->active != 0) {
        fn_82595950(e->handle);
      }
    }
  }
  lbl_832960A0.cur = lbl_832960A0.saved;
  if (lbl_832960A0.callback != 0) {
    lbl_832960A0.callback(lbl_832960A0.cur->handle);
  }
}
