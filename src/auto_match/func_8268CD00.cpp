// Placeholder class names: the original is a const member function of a 2x3
// matrix class (this = matrix, r4 = out, r5 = in), named via the rename map.
struct Vec2 { float x, y; };
struct Mat23 {
  float m00, m01, m02, m10, m11, m12;
  void TransformVector(Vec2 &out, const Vec2 &in) const;
};

void Mat23::TransformVector(Vec2 &out, const Vec2 &in) const
{
  out.x = m00 * in.x + m01 * in.y;
  out.y = m10 * in.x + m11 * in.y;
}
