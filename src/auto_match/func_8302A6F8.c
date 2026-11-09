// Kinect Sports retail 4D5308C9, function 0x8302A6F8 (48 bytes).
// Calls the double-valued fn_82F65FB0 on its argument and returns the scaled result as float.
extern double fn_82F65FB0(double x);
extern double lbl_82005728;

float fn_8302A6F8(float x)
{
    return (float)(fn_82F65FB0(x) * lbl_82005728);
}
