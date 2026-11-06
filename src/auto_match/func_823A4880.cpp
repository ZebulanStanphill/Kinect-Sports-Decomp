typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern "C" {
__vector4 __VMXGetReg(int n);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
void fn_822315A0(unsigned int);
}

struct Ptr_823A4880 {
  int *ptr;
  unsigned int rep;
  ~Ptr_823A4880() { if (rep != 0) fn_822315A0(rep); }
};

struct Slot_823A4880 {
  int id;
  int pad;
  float a;
  float b;
};

extern "C" {
Ptr_823A4880 fn_822EFBF0(unsigned int);
void fn_823831D8(int);
void fn_82398F48(unsigned int, unsigned int);
void fn_82399038(unsigned int);
int fn_82399C38(int);
void fn_823A5108(int, int);
void fn_824BD858(int, float, int, float, int, int);
unsigned char fn_8288B760(unsigned int);
void fn_823A4880(int param_1);
}

void fn_823A4880(int param_1)
{
  int obj;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  int on;
  bool ok;

  obj = *(int *)(*(int *)(param_1 + 8) + 8);
  a = *(int *)(obj + 0x1e4);
  b = *(int *)(obj + 0x84);
  c = *(int *)(obj + 0x1f8);
  if (*(int **)(param_1 + 0xc) != 0 && **(int **)(param_1 + 0xc) != 0) {
    if (c != 0 && *(int *)(c + 0x24) != 0) {
      if (*(unsigned int *)(c + 0x168) != 0) {
        on = fn_8288B760(*(unsigned int *)(c + 0x168));
      } else {
        on = *(int *)(c + 0x16c);
      }
      if (on != 0) {
        Slot_823A4880 *s;
        fn_82398F48(a, c);
        obj = *(int *)(*(int *)(param_1 + 8) + 8);
        s = (Slot_823A4880 *)(obj + 0x31c) + (fn_82399C38(obj) != 0 ? 3 : 2);
        fn_824BD858(*(int *)(obj + 0x90), s->a, *(int *)(*(int *)(obj + 0x90) + 0xb0), s->b, s->id, 0);
      }
    }
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x260) |= 0x40;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x260) |= 2;
    fn_823A5108(*(int *)(param_1 + 8), 3);
  } else if (*(int *)(param_1 + 0x10) == 0 && a != 0 &&
             (*(int *)(a + 0x114) != 0 || *(int *)(a + 0x124) != 0)) {
    *(int *)(param_1 + 0x10) = 1;
    {
      __vector4 z = __VMXGetReg(77);
      *(__vector4 *)(a + 0x20) = __vsel(z, __VMXGetReg(77), __VMXGetReg(67));
    }
    if (b != 0) {
      fn_823831D8(*fn_822EFBF0(b).ptr + 400);
    }
  }
  ok = *(int *)(param_1 + 0x10) != 0 && (b == 0 || fn_822EFBF0(b).ptr[0xf] != 0);
  if (ok) {
    if (c != 0) {
      fn_82399038(c);
    }
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x260) |= 2;
    fn_823A5108(*(int *)(param_1 + 8), 4);
  }
}
