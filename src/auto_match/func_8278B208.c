void fn_8278B208(unsigned char *object,unsigned char enabled) {unsigned char *flags=object+0x28;if(enabled)*flags|=8;else *flags&=247;*(unsigned short *)(object+0x2a)|=128;}
