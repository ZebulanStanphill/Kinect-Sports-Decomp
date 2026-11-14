// Kinect Sports retail 4D5308C9, function 0x83128158 (16 bytes).
// A static initialiser: clears the 64-bit object at 0x8320A4D8.
extern void *memset(void *dst, int value, unsigned int size);

extern unsigned __int64 lbl_8320A4D8;

void fn_83128158(void)
{
    memset(&lbl_8320A4D8, 0, sizeof(lbl_8320A4D8));
}
