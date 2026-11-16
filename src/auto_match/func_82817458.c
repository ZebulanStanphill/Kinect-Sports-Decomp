float fn_82817458(float x, float first, float second, float third, float a, float b, float c)
{
    float xa = x - a;
    float bc = b - c;
    float ba = b - a;
    float ab = a - b;
    float ac = a - c;
    float ca = c - a;
    float xb = x - b;
    float cb = c - b;
    float middle = (x - c) * xa / (ba * bc);
    float left = xb * (x - c) / (ab * ac);
    float right = xb * xa / (ca * cb);
    return right * third + (left * first + middle * second);
}
