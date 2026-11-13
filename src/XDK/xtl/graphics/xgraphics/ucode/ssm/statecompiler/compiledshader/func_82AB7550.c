typedef unsigned int U32;
typedef struct {
    void *heap;
    void *(*alloc)(void *heap, U32 size);
    char pad[0x984 - 8];
    void *reqList;   /* 0x984 */
} CS_func_82AB7550;
typedef struct {
    int eType;
    U32 a;
    U32 b;
    U32 c;
} ReqState_func_82AB7550;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void fn_82AB6368(void *list, void *item);

#define CS_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

int fn_82AB7550(CS_func_82AB7550 *pCS, U32 a, U32 b, U32 c)
{
  ReqState_func_82AB7550 *pReq;
  CS_ASSERT(pCS, 0x499);
  pReq = (ReqState_func_82AB7550 *)pCS->alloc(pCS->heap, sizeof(ReqState_func_82AB7550));
  if (pReq == 0) {
    CS_ASSERT(!"Could not allocate memory for the Required Renderstate Struct", 0x4a2);
    return 0x10;
  }
  pReq->eType = 0;
  pReq->a = a;
  pReq->b = b;
  pReq->c = c;
  fn_82AB6368(pCS->reqList, pReq);
  return 0;
}
