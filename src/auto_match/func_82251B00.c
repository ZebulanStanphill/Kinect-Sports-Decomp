typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */
__vector4 __VMXGetReg(int n);

typedef struct Record_82250D10 {
  unsigned char data[0x4c];
} Record_82250D10;

typedef struct State_82251B00 {
  Record_82250D10 record;
  __vector4 a;
  __vector4 b;
  __vector4 c;
  int tail; /* not set here; the 0x100 frame needs it */
} State_82251B00;

extern void fn_82250D10(Record_82250D10 *record);

void fn_82251B00(int object, long long value)
{
  State_82251B00 state;
  int *base = (int *)((char *)object + 0x50);
  int *receiver;

  fn_82250D10(&state.record);
  state.a = __VMXGetReg(77);
  state.b = __VMXGetReg(77);
  state.c = __VMXGetReg(77);
  receiver = (int *)base[6];
  (*(void (**)(int *, long long, State_82251B00 *))(*(int *)receiver + 0x14))(
      receiver, value, &state);

  if (*(int **)(base + 4) != 0) {
    (*(void (**)(int *, State_82251B00 *))(*(int *)*(int **)(base + 4) + 4))(
        *(int **)(base + 4), &state);
  }
}
