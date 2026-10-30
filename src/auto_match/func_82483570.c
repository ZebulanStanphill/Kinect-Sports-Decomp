// Callback installed with its context by fn_8247E810: sets ctx+0xf8 to whether
// 20 <= value < 100. arg is unused.
void fn_82483570(int *ctx, int arg, int value)
{
    int v;

    if (value >= 20 && value < 100)
        v = 1;
    else
        v = 0;
    ctx[62] = v;
}
