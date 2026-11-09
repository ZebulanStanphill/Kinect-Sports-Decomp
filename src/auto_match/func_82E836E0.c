// Kinect Sports retail 4D5308C9, function 0x82E836E0 (120 bytes).
// Stores the mode word at +0x1eb8; when it is non-zero, resets the state words and calls fn_82F02720.
extern void fn_82F02720(int o);

void fn_82E836E0(int o, int mode)
{
    *(int *)(o + 0x1eb8) = mode;
    if (mode == 0) {
        return;
    }
    *(int *)(o + 0x1c20) = 0;
    *(int *)(o + 0x888) = 1;
    *(int *)(o + 0xb08) = 0;
    *(int *)(o + 0x644) = 1;
    *(int *)(o + 0x62c) = 0;
    *(int *)(o + 0x64c) = 0;
    *(int *)(o + 0x314) = 0;
    *(int *)(o + 0xa04) = 0;
    *(int *)(o + 0x978) = 1;
    *(int *)(o + 0x8d4) = 0;
    *(int *)(o + 0x648) = 1;
    *(int *)(o + 0x604) = 0;
    *(int *)(o + 0x920) = 0;
    *(int *)(o + 0xafc) = 0;
    *(int *)(o + 0x84c) = 0;
    *(int *)(o + 0x850) = 0x100;
    *(int *)(o + 0x594) = 0;
    *(int *)(o + 0x59c) = 0;
    *(int *)(o + 0x5a0) = 0;
    *(int *)(o + 0x598) = 0;
    *(int *)(o + 0x5a4) = 0;
    *(int *)(o + 0x628) = 1;
    fn_82F02720(o);
}
