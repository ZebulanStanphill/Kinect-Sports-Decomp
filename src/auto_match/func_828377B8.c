typedef struct Globals_828377B8 {
  void *object;
  int pad[4];
  int enabled;   /* lbl_8320A8B4 */
} Globals_828377B8;
extern Globals_828377B8 lbl_8320A8A0;
extern void *lbl_8320A898;
extern void *fn_8263A858(void *src);
extern void fn_8262FE50(void *p);

void fn_828377B8(void **out)
{
  if (lbl_8320A8A0.enabled != 0) {
    *out = lbl_8320A8A0.object;
    fn_8262FE50(lbl_8320A8A0.object);
  } else {
    *out = fn_8263A858(lbl_8320A898);
  }
}
