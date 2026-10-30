typedef struct {
  char pad0[8];
  unsigned int *states;
  char pad1[0x38];
  unsigned int numStates;
} AS_82AB6EC0;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

unsigned int fn_82AB6EC0(AS_82AB6EC0 *obj, unsigned int eState)
{
  if (!(eState < obj->numStates)) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eState < pAS_Object->ASMapInfo.uNumStates", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x135);
  }
  return obj->states[eState];
}
