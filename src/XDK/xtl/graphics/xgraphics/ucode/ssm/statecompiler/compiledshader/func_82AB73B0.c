typedef struct {
    void *heap;
    void *(*alloc)(void *heap, unsigned int size);
    char pad[0x988 - 8];
    void *stateList;   /* 0x988 */
} CS_82AB73B0;
typedef struct {
    int eState;
    unsigned int value;
} StateValue_82AB73B0;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void fn_82AB6368(void *list, void *item);

#define AS_NUM_STATES 0x7ae
#define R400_NUM_STATES 0x826

#define CS_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

int fn_82AB73B0(CS_82AB73B0 *pCS, int eState, unsigned int value)
{
  StateValue_82AB73B0 *pValue;
  CS_ASSERT(pCS, 0x44c);
  CS_ASSERT(eState >= AS_NUM_STATES, 0x44d);
  CS_ASSERT(eState < R400_NUM_STATES, 0x44e);
  pValue = (StateValue_82AB73B0 *)pCS->alloc(pCS->heap, sizeof(StateValue_82AB73B0));
  if (pValue == 0) {
    CS_ASSERT(!"Could not allocate memory for R400 State Value Struct", 0x456);
    return 0x10;
  }
  pValue->eState = eState;
  pValue->value = value;
  fn_82AB6368(pCS->stateList, pValue);
  return 0;
}
