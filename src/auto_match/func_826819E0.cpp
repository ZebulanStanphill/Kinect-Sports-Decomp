extern "C" void *fn_8267BDA8(void *, unsigned);
struct Obj_826819E0;
extern "C" void *fn_8267BED0(Obj_826819E0 *, unsigned, int *);

struct Obj_826819E0 {
  int pad0;
  int count;
  unsigned cap;
  void **slots;
  void Grow(unsigned i);
};

void Obj_826819E0::Grow(unsigned i)
{
  int a, b;
  if (i >= cap) {
    void **p;
    if (slots != 0) {
      p = (void **)fn_8267BDA8(slots, (cap + 5) * 4);
    } else {
      a = 2;
      p = (void **)fn_8267BED0(this, 0x14, &a);
    }
    slots = p;
    cap += 5;
  }
  b = 2;
  slots[i] = fn_8267BED0(this, 0x1000, &b);
  count++;
}
