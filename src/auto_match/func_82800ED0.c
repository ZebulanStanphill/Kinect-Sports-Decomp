float fn_82800ED0(float time, float first, float second, float third, float fourth)
{
    float halfFourth = fourth * 0.5f;
    float halfFirst = first * 0.5f;
    float scaledThird = third * 1.5f;
    float quadratic = (first - second * 2.5f) + (third * 2.0f - halfFourth);
    float cubic = (second * 1.5f - scaledThird) + (halfFourth - halfFirst);
    float linear = third * 0.5f - halfFirst;
    return ((cubic * time + quadratic) * time + linear) * time + second;
}
