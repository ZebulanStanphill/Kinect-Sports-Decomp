extern float fn_82809558(float value);
extern float fn_8280A5D8(float value);

int fn_827EDED0(float a, float b, float c, float d, float *out)
{
    float discriminant;
    float nearest;
    float root;

    discriminant = b * b - a * c;
    if (discriminant < 0.0f) {
        return 0;
    }
    nearest = a * d + b;
    if (nearest < 0.0f && nearest * nearest > discriminant) {
        return 0;
    }
    root = fn_82809558(discriminant);
    if (-b - root >= 0.0f) {
        *out = -(fn_8280A5D8(a) * (root + b));
        return 1;
    }
    if (root > nearest || root < b) {
        return 0;
    }
    *out = fn_8280A5D8(a) * (root - b);
    return 1;
}
