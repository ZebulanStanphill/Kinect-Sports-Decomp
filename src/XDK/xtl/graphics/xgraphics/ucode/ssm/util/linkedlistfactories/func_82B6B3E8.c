typedef struct { int pad[3]; unsigned int numAcquiredLists; void *pool; } OLF_82B6B3E8;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB59E8(void *);
extern void fn_82AB53C0(void *);
extern unsigned int fn_82D3B290(void);
extern void fn_82B6B230(void *, void *);
extern void *memset(void *, int, unsigned int);
void fn_82B6B3E8(OLF_82B6B3E8 *pOLF, void *pOList)
{
  if (pOLF == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pOLF", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0xe0);
  if (pOList == 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pOList", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0xe1);
  if (pOLF->numAcquiredLists <= 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pOLF->numAcquiredLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0xe5);
  if (fn_82AB59E8(pOList) != 0) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "OLIST_GetNumItems(pOList) == 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0xe6);
  fn_82AB53C0(pOList);
  memset(pOList, 0, fn_82D3B290());
  fn_82B6B230(pOLF->pool, pOList);
  pOLF->numAcquiredLists--;
}
