struct Frame_82426C30 {
  int pad0;
  unsigned int *roll1;
  unsigned int *roll2;
  bool IsStrike() const { return roll1 != 0 && *roll1 == 10; }
  bool IsSpare() const { return roll1 != 0 && roll2 != 0 && *roll1 + *roll2 == 10; }
};

struct List_82426C30 {
  int pad0;
  Frame_82426C30 **frames;
};

struct Obj_82426C30 {
  int pad0[2];
  List_82426C30 *list;
  char padC[0x40 - 0xC];
  unsigned int count;
  Frame_82426C30 *GetFrame(unsigned int i) { return list->frames[i - 1]; }
  __forceinline unsigned int Total(unsigned int i) {
    unsigned int t = 0;
    if ((int)GetFrame(i)->roll1 != 0) {
      t = *GetFrame(i)->roll1;
      if ((int)GetFrame(i)->roll2 != 0)
        t = *GetFrame(i)->roll2 + t;
    }
    return t;
  }
};

extern "C" int fn_82426C30(Obj_82426C30 *o, unsigned int pins)
{
  for (unsigned int i = 1; i < o->count; i++) {
    if (!o->GetFrame(i)->IsStrike() && !o->GetFrame(i)->IsSpare()) {
      if (o->Total(i) < pins)
        return 0;
    }
  }
  return 1;
}
