// Kinect Sports retail 4D5308C9, function 0x83057BA0 (72 bytes).
// Initialises the header via fn_8305BB58 and the float pair at +0xc from a constant pair.
extern void fn_8305BB58(unsigned int *p);
extern void fn_8305B958(float *dst, float a, float b);
extern float lbl_8217E248[2];

unsigned int *fn_83057BA0(unsigned int *p)
{
    fn_8305BB58(p);
    fn_8305B958((float *)(p + 3), lbl_8217E248[0], lbl_8217E248[1]);
    return p;
}
