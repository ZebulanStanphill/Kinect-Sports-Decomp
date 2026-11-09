// Kinect Sports retail 4D5308C9, function 0x82F56C70 (24 bytes).
extern void fn_82F5B5A8(int sub);

void fn_82F56C70(int object)
{
    int sub = *(int *)(*(int *)(object + 4) + 0x1d0);
    if (sub == 0) {
        return;
    }
    fn_82F5B5A8(sub);
}
