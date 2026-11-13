typedef struct Code_82AB7070 {
  unsigned int dwCodeSizeInDwords;
  unsigned int f4;
  unsigned int code[1];
} Code_82AB7070;
typedef struct {
  void *heap;
  void *(*alloc)(void *heap, unsigned int size);
  char pad[0x2c - 8];
  Code_82AB7070 *pCode;
} CS_82AB7070;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void *memcpy(void *, const void *, unsigned int);

#define CS_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

int fn_82AB7070(CS_82AB7070 *pCS, unsigned int dwCodeSizeInDwords, const void *pCode)
{
  unsigned int size = dwCodeSizeInDwords * 4;
  CS_ASSERT(pCS, 0x226);
  pCS->pCode = (Code_82AB7070 *)pCS->alloc(pCS->heap, size + 8);
  if (pCS->pCode == 0) {
    CS_ASSERT(!"Could not allocate Shader Code", 0x22d);
    return 0x10;
  }
  pCS->pCode->dwCodeSizeInDwords = dwCodeSizeInDwords;
  pCS->pCode->f4 = pCS->pCode->dwCodeSizeInDwords;
  CS_ASSERT((pCS->pCode->dwCodeSizeInDwords % 3) == 0, 0x233);
  CS_ASSERT(pCS->pCode->dwCodeSizeInDwords < 16384, 0x234);
  memcpy(pCS->pCode->code, pCode, size);
  return 0;
}
