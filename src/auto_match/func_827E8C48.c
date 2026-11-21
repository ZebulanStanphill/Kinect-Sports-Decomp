extern float fn_82809558(float value);
extern void fn_82810558(const float *direction, const float *origin, float t, float *out);
extern float lbl_831F13A8;

int fn_827E8C48(float startTime, float endTime, float speed, float minHeight, float maxHeight,
                const float *origin, const float *direction, float *outT)
{
    float dt;
    float invSpeed;
    float height;
    float a;
    float b;
    float c;
    float scaled;
    float disc;
    float t;
    float hit[3];

    dt = endTime - startTime;
    invSpeed = 1.0f / speed;
    height = origin[1] * dt + startTime * speed;
    a = (direction[0] * direction[0] + direction[2] * direction[2]) -
        direction[1] * direction[1] * invSpeed * invSpeed * dt * dt;
    scaled = height * invSpeed;
    c = (origin[0] * origin[0] + origin[2] * origin[2]) - scaled * scaled;
    b = (origin[0] * direction[0] + origin[2] * direction[2]) * 2.0f -
        direction[1] * height * invSpeed * invSpeed * dt * 2.0f;
    disc = b * b - c * a * 4.0f;
    if (disc > 0.0f) {
        if (disc > lbl_831F13A8) {
            float root = fn_82809558(disc);
            float t1 = root - b;
            float t2 = -b - root;
            if (t1 <= lbl_831F13A8 || t2 <= lbl_831F13A8) {
                return 0;
            }
            if (t1 >= t2) {
                t1 = t2;
            }
            t = t1 / a * 0.5f;
        } else {
            t = -(b / (a * 2.0f));
        }
        if (t >= 0.0f && t <= 1.0f) {
            fn_82810558(direction, origin, t, hit);
            if (hit[1] > minHeight && hit[1] < maxHeight) {
                *outT = t;
                return 1;
            }
        }
    }
    return 0;
}
