extern int fn_82E50CB8();
extern int fn_82E50F10();
extern char lbl_82152F7C[];

typedef struct Unk_82E42088 { struct VT_82E42088 *vt; } Unk_82E42088;
typedef struct VT_82E42088 {
  void *s0; void *s1;
  unsigned int (*Release)(Unk_82E42088 *);
  void *s3;
  int (*Query)(Unk_82E42088 *, char *, Unk_82E42088 **);
} VT_82E42088;

int fn_82E42088(int param_1, Unk_82E42088 *param_2)
{
  int hr;
  Unk_82E42088 **slot;
  if (param_2 == 0) {
    return 0x80070057;
  }
  fn_82E50CB8(param_1 + 0xc);
  slot = (Unk_82E42088 **)(param_1 + 0x5bc);
  if (*slot != 0) {
    (*slot)->vt->Release(*slot);
    *slot = 0;
  }
  hr = param_2->vt->Query(param_2, lbl_82152F7C, slot);
  fn_82E50F10(param_1 + 0xc);
  return hr;
}
