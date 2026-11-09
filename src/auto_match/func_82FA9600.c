// Kinect Sports retail 4D5308C9, function 0x82FA9600 (24 bytes).
extern void fn_82FAD9A0(unsigned int *owner, int item);

void fn_82FA9600(int item)
{
    unsigned int *owner = *(unsigned int **)(item + 0x18);
    if (owner != 0) {
        fn_82FAD9A0(owner, item);
    }
}
