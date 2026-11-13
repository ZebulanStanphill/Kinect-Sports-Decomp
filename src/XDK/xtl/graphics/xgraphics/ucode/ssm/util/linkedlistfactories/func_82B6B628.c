typedef struct { int pad[3]; unsigned int numAcquiredLists; void *pool; } OLF_82B6B628;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB5D88(void *);
extern void fn_82AB5C40(void *);
extern unsigned int fn_825AA5F0(void);
extern void fn_82B6B230(void *, void *);
extern void *memset(void *, int, unsigned int);
void fn_82B6B628(OLF_82B6B628 *pOLF, void *pOList)
{
  if (pOLF == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pILF", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x1bd);
  if (pOList == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pIntList", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x1be);
  if (pOLF->numAcquiredLists <= 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pILF->numAcquiredLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x1c2);
  if (fn_82AB5D88(pOList) != 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "INTLIST_GetNumItems(pIntList) == 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x1c3);
  fn_82AB5C40(pOList);
  memset(pOList, 0, fn_825AA5F0());
  fn_82B6B230(pOLF->pool, pOList);
  pOLF->numAcquiredLists--;
}
