struct Stream_82FEF6D0 {
    unsigned char pad[0xd8];
    unsigned char mode; /* 0xd8 */
};

extern void fn_82FF3870(void *self, int kind, void *arg, float value);

void fn_82FEF6D0(struct Stream_82FEF6D0 *self)
{
    self->mode = (self->mode & 0xe1) | 6;
    fn_82FF3870(self, 3, 0, 0.0f);
}
