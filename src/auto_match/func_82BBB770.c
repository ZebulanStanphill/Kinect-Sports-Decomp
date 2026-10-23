typedef struct {
  unsigned int pad : 24;
  unsigned int b7 : 1;
  unsigned int b6 : 1;
  unsigned int rest : 6;
} Flags;

typedef struct {
  char pad[0x858];
  Flags flags;
} Inner;

typedef struct {
  char pad[0xc];
  Inner *inner;
} Obj;

extern int fn_82BBA888();
extern int fn_82BBAAE0();


void fn_82BBB770(int param_1,Obj *param_2)

{
  if ((unsigned char)param_2->inner->flags.b6) {
    fn_82BBA888(param_1,param_2);
  }
  if ((unsigned char)param_2->inner->flags.b7) {
    fn_82BBAAE0(param_1,param_2);
  }
}
