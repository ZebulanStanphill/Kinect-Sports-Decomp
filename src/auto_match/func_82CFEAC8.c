unsigned fn_82CFEAC8(unsigned x) { unsigned y;
if (x & 1u) y = (x >> 1) ^ 0xedb88320u; else y = x >> 1;
x=y>>1; if(y&1u) x^=0xedb88320u;
y=x>>1; if(x&1u) y^=0xedb88320u;
x=y>>1; if(y&1u) x^=0xedb88320u;
y=x>>1; if(x&1u) y^=0xedb88320u;
x=y>>1; if(y&1u) x^=0xedb88320u;
y=x>>1; if(x&1u) y^=0xedb88320u;
if(y&1u) return (y>>1)^0xedb88320u; return y>>1; }