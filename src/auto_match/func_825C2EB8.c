/* Catmull-Rom interpolation through ten evenly spaced keys; t runs from 0 to 1. */
float fn_825C2EB8(float t, const float *keys)
{
    float x;
    unsigned short i;
    unsigned short prev;
    unsigned short next;
    unsigned short after;
    float s;
    float d;
    float last;
    float cubic;
    float square;
    float linear;

    x = t * 9.0f;
    i = (unsigned short)x;
    prev = i - (i != 0);
    next = i + (i != 9);
    after = next + (next != 9);
    s = x - (float)i;
    d = keys[next] - keys[i];
    last = keys[after];
    cubic = (last - keys[prev] - d) * 0.5f - d;
    square = d * 2.0f + keys[prev] - (keys[i] + last) * 0.5f;
    linear = (keys[next] - keys[prev]) * 0.5f;
    return ((cubic * s + square) * s + linear) * s + keys[i];
}
