extern unsigned char lbl_83156E70;


void fn_828114D0(unsigned char *data, unsigned int bit, unsigned char value) {
 unsigned char mask = (&lbl_83156E70)[bit & 7];
 unsigned int index = bit >> 3;
 data[index] &= value * mask | ~mask;
}
