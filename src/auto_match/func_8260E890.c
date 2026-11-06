extern void fn_8251DC90(void *obj, void *state);

typedef struct State_8260E890 {
  int w0;
  int sign : 1;
  int rest : 31;
  int w2;
  int w3;
  int w4;
} State_8260E890;
typedef struct Inner_8260E890 { char pad[0x8ac]; State_8260E890 *state; } Inner_8260E890;
typedef struct Obj_8260E890 { char pad[0x60]; Inner_8260E890 **inner; } Obj_8260E890;
typedef struct Arg_8260E890 { char pad[0x10]; int flag; } Arg_8260E890;

void fn_8260E890(Obj_8260E890 *param_1, void *param_2, Arg_8260E890 *param_3)
{
  Inner_8260E890 *inner;
  State_8260E890 st;

  inner = *param_1->inner;
  st = *(State_8260E890 *)((char *)inner->state + 0x10);
  if (st.sign != param_3->flag) {
    st.sign = param_3->flag;
    fn_8251DC90(inner, &st);
  }
}
