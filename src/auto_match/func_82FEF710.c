extern void fn_82FF3870(void *self, int kind, void *arg, float value);

void fn_82FEF710(unsigned char *self)
{
    self[0xd8] = (self[0xd8] & 0xe1) | 2;
    fn_82FF3870(self, 1, 0, 0.0f);
}
