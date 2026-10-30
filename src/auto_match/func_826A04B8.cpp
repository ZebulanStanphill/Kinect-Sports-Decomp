struct Sub_826A04B8 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
  virtual unsigned char call(int a, int b);
};
struct Item_826A04B8 { char pad[8]; unsigned f8; char pad2[4]; Sub_826A04B8 sub; };
struct Base_826A04B8 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
  virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
  virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
  virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
  virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
  virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
  virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
  virtual void v54(); virtual void v55(); virtual void v56();
  virtual Item_826A04B8 *getItem();
  virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62();
  virtual unsigned getMask();
  char pad[0x88]; unsigned f8c;
};
extern "C" int fn_826824B0(Item_826A04B8 *);
extern "C" unsigned char fn_8269AEB8(int, int);
extern "C" int fn_8269FD90(Base_826A04B8 *, int);

extern "C" int fn_826A04B8(int param_1, int param_2, int param_3)
{
  int idx;
  Item_826A04B8 *it;
  Base_826A04B8 *b;

  if (fn_8269AEB8(param_3, 0) != 0) {
    b = (Base_826A04B8 *)(param_1 - 0x68);
    idx = fn_8269FD90(b, param_3);
    if (idx != -1 && idx <= 0x1f && (b->getMask() & (1 << idx)) != 0) {
      if (idx != 0x1f) return 0;
      b->f8c = b->f8c & 0xfffff9ff;
      return 1;
    }
  }
  b = (Base_826A04B8 *)(param_1 - 0x68);
  it = b->getItem();
  if (it != 0) {
    Sub_826A04B8 *s = &it->sub;
    it->f8 = (it->f8 + 1) & 0x8fffffff;
    if (s->call(param_2, param_3) != 0) {
      fn_826824B0(it);
      return 1;
    }
    fn_826824B0(it);
  }
  return 0;
}
