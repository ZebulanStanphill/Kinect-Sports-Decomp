float fn_8280C108(float m00, float m01, float m02, float m10, float m11, float m12,
                  float m20, float m21, float m22)
{
    return (m01 * m12 - m02 * m11) * m20
         + ((m11 * m22 - m12 * m21) * m00 - (m01 * m22 - m02 * m21) * m10);
}
