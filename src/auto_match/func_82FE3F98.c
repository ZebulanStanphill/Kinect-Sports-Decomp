// Kinect Sports retail 4D5308C9, function 0x82FE3F98 (28 bytes).
// Zeroes the four floats at +0x14..+0x20, last first.
struct Object_82FE3F98 {
    int pad[5];
    float v[4];
};

void fn_82FE3F98(struct Object_82FE3F98 *o)
{
    o->v[3] = 0.0f;
    o->v[2] = 0.0f;
    o->v[1] = 0.0f;
    o->v[0] = 0.0f;
}
