// Kinect Sports retail 4D5308C9, function 0x82A9CEB8 (20 bytes).
int fn_82A9CEB8(int param_1)
{
    int *counter = (int *)(param_1 + 0x88);
    *counter = *counter + 1;
    return *counter;
}
