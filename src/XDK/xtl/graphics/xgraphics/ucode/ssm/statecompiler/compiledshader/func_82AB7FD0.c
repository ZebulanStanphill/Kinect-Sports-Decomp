typedef unsigned int U32;
typedef struct {
    void *heap;
    void *(*alloc)(void *heap, U32 size);
    char pad[0x97c - 8];
    void *patchList;
} CS_82AB7FD0;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern U32 fn_82AB74A0(const void *pPatchDescr);
extern void fn_82AB6368(void *list, void *item);
extern void *memcpy(void *, const void *, U32);

#define CS_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

int fn_82AB7FD0(CS_82AB7FD0 *pCS, const void *pPatchDescr)
{
  void *pCopy;
  CS_ASSERT(pCS, 0x3bc);
  CS_ASSERT(pPatchDescr, 0x3bd);
  pCopy = pCS->alloc(pCS->heap, fn_82AB74A0(pPatchDescr));
  if (pCopy == 0) {
    CS_ASSERT(!"Unable to allocate memory for our copy of the patch description", 0x3c6);
    return 0x10;
  }
  memcpy(pCopy, pPatchDescr, fn_82AB74A0(pPatchDescr));
  fn_82AB6368(pCS->patchList, pCopy);
  return 0;
}
