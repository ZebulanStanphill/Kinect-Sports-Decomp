typedef unsigned int U32;
typedef struct { int pad[3]; U32 numAcquiredLists; void *pool; } OLF_82B6B868;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern U32 fn_82AB60F0(void *);
extern void fn_82AB5FE0(void *);
extern U32 fn_825AA5F0(void);
extern void fn_82B6B230(void *, void *);
extern void *memset(void *, int, U32);
void fn_82B6B868(OLF_82B6B868 *pOLF, void *pOList)
{
  if (pOLF == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pOLF", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x29a);
  if (pOList == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pObjList", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x29b);
  if (pOLF->numAcquiredLists <= 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pOLF->numAcquiredLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x29f);
  if (fn_82AB60F0(pOList) != 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "OBJLIST_GetNumItems(pObjList) == 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x2a0);
  fn_82AB5FE0(pOList);
  memset(pOList, 0, fn_825AA5F0());
  fn_82B6B230(pOLF->pool, pOList);
  pOLF->numAcquiredLists--;
}
