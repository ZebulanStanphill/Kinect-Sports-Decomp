// Kinect Sports retail 4D5308C9, function 0x83008E90 (24 bytes).
extern int fn_82FFF4C0(int object);

int fn_83008E90(int object)
{
    if ((*(unsigned char *)(object + 0x3d) & 0x20) != 0) {
        return object;
    }
    return fn_82FFF4C0(object);
}
