typedef struct Globals_82837818 {
  void *object;
  int pad[3];
  int enabled;   /* lbl_8320A8B4 */
} Globals_82837818;
extern Globals_82837818 lbl_8320A8A4;
extern void *lbl_8320A898;
extern void *fn_8263A820(void *src);
extern void fn_8262FE50(void *p);

void fn_82837818(void **out)
{
  if (lbl_8320A8A4.enabled != 0) {
    *out = lbl_8320A8A4.object;
    fn_8262FE50(lbl_8320A8A4.object);
  } else {
    *out = fn_8263A820(lbl_8320A898);
  }
}
