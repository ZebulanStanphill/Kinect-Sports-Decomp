typedef struct {
  char pad0[8];
  float *states;
  char pad1[0x38];
  unsigned int numStates;
} AS_82B6E130;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

float fn_82B6E130(AS_82B6E130 *obj, unsigned int eState)
{
  if (!(eState < obj->numStates)) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eState < pAS_Object->ASMapInfo.uNumStates", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x152);
  }
  return obj->states[eState];
}
