typedef struct Globals_82F4EAD0 {
  void *voices[2];
  int pad8[2];
  void *pending;
} Globals_82F4EAD0;

extern Globals_82F4EAD0 lbl_83262350;
extern float fn_824B4300(void);
extern void fn_82F528E0(void *p);
extern unsigned char fn_82F4DA50(int id);
extern void fn_82F4DDD8(int id);
extern void fn_82F51AC0(void *voice, float time, int a, int b);

void fn_82F4EAD0(void)
{
  int i;
  float t = fn_824B4300();
  if (lbl_83262350.pending != 0) {
    fn_82F528E0(lbl_83262350.pending);
  }
  if (fn_82F4DA50(0x10)) {
    fn_82F4DDD8(0xc);
  }
  for (i = 0; i < 2; i++) {
    fn_82F51AC0(lbl_83262350.voices[i], t, 0, 2);
  }
}
