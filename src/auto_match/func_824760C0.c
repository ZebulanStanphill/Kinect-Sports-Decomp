extern void fn_82474C00(int sub);

void fn_824760C0(int object)
{
    int sub = object + 0x10;
    if (*(int *)(sub + 0xa4) == 0) {
        return;
    }
    fn_82474C00(sub);
}
