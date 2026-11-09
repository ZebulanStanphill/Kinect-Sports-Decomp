// Kinect Sports retail 4D5308C9, function 0x83058DF8 (72 bytes).
// Initialises the header via fn_8305BB58 and the float pair at +0xc from a constant pair.
extern void fn_8305BB58(unsigned int *p);
extern void fn_8305B958(float *dst, float a, float b);
extern float lbl_8217E378[2];

unsigned int *fn_83058DF8(unsigned int *p)
{
    fn_8305BB58(p);
    fn_8305B958((float *)(p + 3), lbl_8217E378[0], lbl_8217E378[1]);
    return p;
}
