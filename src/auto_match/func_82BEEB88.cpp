struct V3_82BEEB88 {
  float x, y, z;
  V3_82BEEB88 add(const V3_82BEEB88 &o) const;
};
V3_82BEEB88 V3_82BEEB88::add(const V3_82BEEB88 &o) const
{
  V3_82BEEB88 r;
  r.x = x + o.x;
  r.y = y + o.y;
  r.z = z + o.z;
  return r;
}
