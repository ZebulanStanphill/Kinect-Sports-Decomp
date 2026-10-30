void fn_827586D8(char *p, unsigned char b) { unsigned char *q = *(unsigned char **)(p+8); unsigned char x; if (b) x = q[0x24] | 8; else x = q[0x24] & 0xf7; q[0x24] = x; }
