// Kinect Sports retail 4D5308C9, function 0x83053448 (24 bytes).
// Clears the four words at 0xa0..0xac, then forwards all arguments to fn_830500F0.
extern char fn_830500F0(int o, int s, __int64 *v, int mode);

char fn_83053448(int o, int s, __int64 *v, int mode)
{
    *(int *)(o + 0xa0) = 0;
    *(int *)(o + 0xa4) = 0;
    *(int *)(o + 0xa8) = 0;
    *(int *)(o + 0xac) = 0;
    return fn_830500F0(o, s, v, mode);
}
