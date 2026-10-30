extern int fn_822315A0(void *);
extern int *fn_8229AE10(void *, int);
extern int fn_8229F5A8(int);
extern int fn_82672C20(int, const char *, int, int);
typedef struct { int ptr; void *rep; } Ref;

void fn_823605C0(int param_1, int param_2)
{
  Ref ref;
  if (param_2 >= 0) {
    if (*(int *)(*(int *)(param_1 + 0xd4) + 0x183c) == 0) {
      fn_82672C20(*fn_8229AE10(&ref, *(int *)(param_1 + 0xd4)), "_root.scorecardCtrl.show", 0, 0);
      if (ref.rep != 0) {
        fn_822315A0(ref.rep);
      }
    }
    else {
      fn_8229F5A8(*(int *)(*(int *)(param_1 + 0xd4) + 0xc));
    }
  }
}
