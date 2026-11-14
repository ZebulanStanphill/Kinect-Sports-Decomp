extern void fn_82FFF628(void *self, int type, float value, int a, int b);

void fn_83032710(void *self, int type, float value, int a, int b)
{
    if (type == 0) {
        type = 0x1d;
    } else if (type == 2) {
        type = 0x1f;
    }
    fn_82FFF628(self, type, value, a, b);
}
