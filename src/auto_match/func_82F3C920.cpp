struct Com_82F3C920 {
  virtual int v00();
  virtual int v04();
  virtual unsigned Release();
  virtual int Next(unsigned n, Com_82F3C920 **out, unsigned *fetched);
  virtual int v10();
  virtual int Reset();
  virtual int v18();
  virtual int v1c();
  virtual int Get(int *out);
  virtual int Query(void *iid, Com_82F3C920 **out);
};
struct Obj_82F3C920 { char pad[0x50]; int count; Com_82F3C920 *src; };
extern "C" char lbl_8202E618;

extern "C" int fn_82F3C920(Obj_82F3C920 *o)
{
  Com_82F3C920 *a;
  Com_82F3C920 *e;
  Com_82F3C920 *item;
  int hr;
  int flag;
  a = o->src;
  o->count = 0;
  if (a == 0) return 1;
  e = 0;
  item = 0;
  if (a->Query(&lbl_8202E618, &e) < 0) {
    hr = (int)0x80004005;
  } else {
    hr = e->Reset();
    if (hr >= 0) {
      while (e->Next(1, &item, 0) == 0) {
        flag = 0;
        hr = item->Get(&flag);
        if (hr < 0) break;
        if (flag == 0) o->count++;
        if (item != 0) {
          item->Release();
          item = 0;
        }
      }
    }
  }
  if (item != 0) {
    item->Release();
    item = 0;
  }
  if (e != 0) e->Release();
  return hr;
}
