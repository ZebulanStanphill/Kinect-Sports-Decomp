// Kinect Sports retail 4D5308C9, function 0x830790A8 (20 bytes).
int fn_830790A8(int param_1)
{
    int *counter = (int *)(param_1 + 0x70f8);
    *counter = *counter + 1;
    return *counter;
}
