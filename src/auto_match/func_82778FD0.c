typedef struct Color_82778FD0 {
    unsigned char a; /* 0x0 */
    unsigned char r; /* 0x1 */
    unsigned char g; /* 0x2 */
    unsigned char b; /* 0x3 */
} Color_82778FD0;

void fn_82778FD0(Color_82778FD0 *out, float hue, float saturation, float value)
{
    float r;
    float g;
    float b;

    if (saturation == 0.0f) {
        r = g = b = value;
    } else {
        float h;
        int sector;
        float fraction;
        float p;
        float q;
        float t;

        if (hue == 1.0f) {
            h = 0.0f;
        } else {
            h = hue * 6.0;
        }
        sector = (int)h;
        fraction = h - (float)sector;
        p = (1.0f - saturation) * value;
        q = (1.0f - fraction * saturation) * value;
        t = (1.0f - (1.0f - fraction) * saturation) * value;
        switch (sector) {
        case 0:
            r = value;
            g = t;
            b = p;
            break;
        case 1:
            r = q;
            g = value;
            b = p;
            break;
        case 2:
            r = p;
            g = value;
            b = t;
            break;
        case 3:
            r = p;
            g = q;
            b = value;
            break;
        case 4:
            r = t;
            g = p;
            b = value;
            break;
        default:
            r = value;
            g = p;
            b = q;
            break;
        }
    }
    out->r = (unsigned char)(r * 255.0f);
    out->g = (unsigned char)(g * 255.0f);
    out->b = (unsigned char)(b * 255.0f);
}
