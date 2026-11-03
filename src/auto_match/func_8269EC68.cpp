extern "C" void fn_826824B0(void *);
struct Itf_8269EC68 {
  virtual void p0() {}
  virtual void p1() {}
  virtual void p2() {}
  virtual void p3() {}
  virtual void p4() {}
  virtual void p5() {}
  virtual void p6() {}
  virtual void p7() {}
  virtual void Op(int, int, int, void *);
};
struct Item_8269EC68 { char pad0[8]; unsigned f8; int pad; Itf_8269EC68 itf; };
struct Base_8269EC68 {
  virtual void q0() {}
  virtual void q1() {}
  virtual void q2() {}
  virtual void q3() {}
  virtual void q4() {}
  virtual void q5() {}
  virtual void q6() {}
  virtual void q7() {}
  virtual void q8() {}
  virtual void q9() {}
  virtual void q10() {}
  virtual void q11() {}
  virtual void q12() {}
  virtual void q13() {}
  virtual void q14() {}
  virtual void q15() {}
  virtual void q16() {}
  virtual void q17() {}
  virtual void q18() {}
  virtual void q19() {}
  virtual void q20() {}
  virtual void q21() {}
  virtual void q22() {}
  virtual void q23() {}
  virtual void q24() {}
  virtual void q25() {}
  virtual void q26() {}
  virtual void q27() {}
  virtual void q28() {}
  virtual void q29() {}
  virtual void q30() {}
  virtual void q31() {}
  virtual void q32() {}
  virtual void q33() {}
  virtual void q34() {}
  virtual void q35() {}
  virtual void q36() {}
  virtual void q37() {}
  virtual void q38() {}
  virtual void q39() {}
  virtual void q40() {}
  virtual void q41() {}
  virtual void q42() {}
  virtual void q43() {}
  virtual void q44() {}
  virtual void q45() {}
  virtual void q46() {}
  virtual void q47() {}
  virtual void q48() {}
  virtual void q49() {}
  virtual void q50() {}
  virtual void q51() {}
  virtual void q52() {}
  virtual void q53() {}
  virtual void q54() {}
  virtual void q55() {}
  virtual Item_8269EC68 *Get();
};
extern "C" void fn_8269EC68(unsigned p, int a, int b, int c)
{
  Base_8269EC68 *base = (Base_8269EC68 *)(p - 0x68);
  Item_8269EC68 *r = base->Get();
  if (r != 0) {
    Itf_8269EC68 *i = &r->itf;
    r->f8 = (r->f8 + 1) & 0x8fffffff;
    i->Op(a, b, c, p - 0x68 != 0 ? (void *)p : 0);
    fn_826824B0(r);
  }
}
