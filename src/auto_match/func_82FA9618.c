// Kinect Sports retail 4D5308C9, function 0x82FA9618 (24 bytes).
extern void fn_82FADA60(int owner, int item);

void fn_82FA9618(int item)
{
    unsigned int owner = *(unsigned int *)(item + 0x18);
    if (owner != 0) {
        fn_82FADA60(owner, item);
    }
}
