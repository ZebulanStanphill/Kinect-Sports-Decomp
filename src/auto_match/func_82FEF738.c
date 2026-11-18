extern void fn_82FF3870(void *self, int kind, void *arg, float value);

void fn_82FEF738(unsigned char *self)
{
    self[0xd8] = (self[0xd8] & 0xe1) | 6;
    fn_82FF3870(self, 2, 0, 0.0f);
}
