extern "C" int fn_82E32038(int, int, void *);
struct Item_82E62EF8 {
  virtual void d0();
  virtual void d1();
  virtual void Release();
  virtual void d3();
  virtual void d4();
  virtual void d5();
  virtual void d6();
  virtual void d7();
  virtual void d8();
  virtual void d9();
  virtual void d10();
  virtual void d11();
  virtual void d12();
  virtual void d13();
  virtual void d14();
  virtual void d15();
  virtual void d16();
  virtual void d17();
  virtual void d18();
  virtual void d19();
  virtual void d20();
  virtual void d21();
  virtual void d22();
  virtual void d23();
  virtual void d24();
  virtual void d25();
  virtual void d26();
  virtual void d27();
  virtual void d28();
  virtual void d29();
  virtual void d30();
  virtual void d31();
  virtual void d32();
  virtual void d33();
  virtual void d34();
  virtual int M8c(unsigned idx);
};
struct Base_82E62EF8 {
  virtual void d0();
  virtual void d1();
  virtual void d2();
  virtual void d3();
  virtual void d4();
  virtual void d5();
  virtual void d6();
  virtual void d7();
  virtual void d8();
  virtual void d9();
  virtual void d10();
  virtual void d11();
  virtual void d12();
  virtual void d13();
  virtual void d14();
  virtual void d15();
  virtual void d16();
  virtual void d17();
  virtual void d18();
  virtual void d19();
  virtual void d20();
  virtual void d21();
  virtual void d22();
  virtual void d23();
  virtual void d24();
  virtual void d25();
  virtual void d26();
  virtual void d27();
  virtual void d28();
  virtual void d29();
  virtual void d30();
  virtual void d31();
  virtual int M80(Item_82E62EF8 *it);
};
struct Obj_82E62EF8 : Base_82E62EF8 {
  int f4[0x14];
  unsigned count;
  int m58;
  int *arr;
};
extern "C" int fn_82E62EF8(Obj_82E62EF8 *o, Item_82E62EF8 **out)
{
  Item_82E62EF8 *it = 0;
  int r;
  if (out == 0) {
    r = 0x80070057;
  } else {
    r = fn_82E32038(o->count, o->m58, &it);
    if (r >= 0) {
      r = o->M80(it);
      if (r >= 0) {
        unsigned i;
        for (i = 0; i < o->count; i++) {
          if (o->arr[i] != 0) {
            r = it->M8c(i);
            if (r < 0) goto fail;
          }
        }
        {
          Item_82E62EF8 *t = it;
          it = 0;
          *out = t;
        }
      }
    }
fail:
    if (it != 0) it->Release();
  }
  return r;
}