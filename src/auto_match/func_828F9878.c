// Kinect Sports retail 4D5308C9, function 0x828F9878 (20 bytes).
int fn_828F9878(int param_1)
{
    int *counter = (int *)(param_1 + 0x4);
    *counter = *counter + 1;
    return *counter;
}
