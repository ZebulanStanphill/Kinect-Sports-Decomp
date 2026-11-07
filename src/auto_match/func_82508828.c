extern unsigned char lbl_83276741;

extern void fn_82520158(const char *name, void *p, int flag);
extern void *fn_82864988(void *str, const char *text);
extern void fn_822A9E20(void *bank, void *name);
extern void fn_82864898(void *str);

void fn_82508828(void *param_1, void *param_2)
{
  unsigned char auStack_190[48];
  unsigned char auStack_160[48];
  unsigned char auStack_130[48];
  unsigned char auStack_100[48];
  unsigned char auStack_d0[48];
  unsigned char auStack_a0[48];
  unsigned char auStack_70[48];
  unsigned char auStack_40[48];

  if (lbl_83276741 == 0) {
    lbl_83276741 = 1;
  }
  fn_82520158("settings_audio_olympus", param_1, 0);
  fn_822A9E20(param_2, fn_82864988(auStack_d0, "init.bnk"));
  fn_82864898(auStack_d0);
  fn_822A9E20(param_2, fn_82864988(auStack_130, "global.bnk"));
  fn_82864898(auStack_130);
  fn_822A9E20(param_2, fn_82864988(auStack_70, "music_common.bnk"));
  fn_82864898(auStack_70);
  fn_822A9E20(param_2, fn_82864988(auStack_190, "music_frontend.bnk"));
  fn_82864898(auStack_190);
  fn_822A9E20(param_2, fn_82864988(auStack_160, "sfx_common.bnk"));
  fn_82864898(auStack_160);
  fn_822A9E20(param_2, fn_82864988(auStack_100, "speech_common.bnk"));
  fn_82864898(auStack_100);
  fn_822A9E20(param_2, fn_82864988(auStack_a0, "test_sounds.bnk"));
  fn_82864898(auStack_a0);
  fn_822A9E20(param_2, fn_82864988(auStack_40, "speech_host.bnk"));
  fn_82864898(auStack_40);
}
