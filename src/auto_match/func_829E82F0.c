extern unsigned int lbl_82057BCC[];

unsigned int fn_829E82F0(void *self, unsigned int width, unsigned int height)
{
    unsigned int level = 0;
    unsigned int i;
    for (i = 0; i < 8; i++) {
        if (lbl_82057BCC[i] > width || lbl_82057BCC[i] > height) {
            return level;
        }
        level = i;
    }
    return 7;
}
